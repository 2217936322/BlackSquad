#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NON_CONFORMING_SWPRINTFS
#include <Windows.h>
#include <stdio.h>
#include <iostream> 
#include <fstream> 
#include <time.h>


#include "CFakeThread/CFakeThread.h"
#include "MinHook/MinHook.h"
#include "SdkHeaders.h"


CFakeThread FakeThread;
using namespace std;

void Log(const char *fmt, ...)
{
	if (!fmt)	return;

	char		text[4096];
	va_list		ap;
	va_start(ap, fmt);
	vsprintf_s(text, fmt, ap);
	va_end(ap);

	ofstream logfile("C:\\Functions.txt", ios::app);
	if (logfile.is_open() && text)	logfile << text << endl;
	logfile.close();
}

int countnum = 0;

#define MakeColor(R, G, B) { B, G, R, 255 }
#define MapColorValueA(health, inMax) (unsigned char)(255 - (((((health - inMax) * 100) / inMax) * 255) / 100))
#define MapColorValueB(health, inMax) (unsigned char)((((health * 100) / inMax) * 255) / 100)
//UFont* pFont = NULL;

FColor Black MakeColor(0, 0, 0);
FColor White MakeColor(255, 255, 255);
FColor Red MakeColor(255, 0, 0);
FColor Green MakeColor(0, 255, 0);
FColor Blue MakeColor(0, 0, 255);
FColor Orange MakeColor(255, 128, 0);
FColor Yellow MakeColor(255, 255, 0);
FColor Cyan MakeColor(0, 255, 255);

ACombatPlayerControllerBase* pPC = nullptr;

HWND g_window = NULL;

//FPS
INT Fps = 0;
FLOAT LastTickCount = 0.0f;
FLOAT CurrentTickCount;
wchar_t FrameRate[50];

FVector W2SLoc;
FVector MyCameraLocation;
FRotator MyCameraRotation;

int iFovAngle = 4;
int iVirtualJumpValue = 20;
wchar_t* char2wchar(const char* cchar)
{
	wchar_t *m_wchar;
	int len = MultiByteToWideChar(CP_ACP, 0, cchar, strlen(cchar), NULL, 0);
	m_wchar = new wchar_t[len + 1];
	MultiByteToWideChar(CP_ACP, 0, cchar, strlen(cchar), m_wchar, len);
	m_wchar[len] = '\0';
	return m_wchar;
}
FRotator inline VectorToRotation(APawn *MyPawn, const FVector& vector)
{
	FRotator rotation;
	rotation.Pitch = (int)(MyPawn->Atan2(vector.Z, MyPawn->Sqrt((vector.X * vector.X) + (vector.Y * vector.Y))) * CONST_RadToUnrRot);
	rotation.Yaw = (int)(MyPawn->Atan2(vector.Y, vector.X) * CONST_RadToUnrRot);
	rotation.Roll = 0;
	return rotation;
}
float inline StrLen(UCanvas* pCanvas, FString InputString)
{
	//VMProtectBeginMutation("StrLen");
	float X, Y;
	pCanvas->StrLen(InputString, &X, &Y);
	return X;
	//VMProtectEnd();
}
float inline StrHeight(UCanvas* pCanvas, FString InputString)
{
	//VMProtectBeginMutation("StrHeigth");
	float X, Y;
	pCanvas->StrLen(InputString, &X, &Y);
	return Y;
	//VMProtectEnd();
}
void inline DrawString(UCanvas* pCanvas, float X, float Y, FString String, float XScale, float YScale, FColor pColor)
{
	//VMProtectBeginMutation("DrawString");
	float OldCurX = pCanvas->CurX;
	float OldCurY = pCanvas->CurY;

	FColor OldColour = pCanvas->DrawColor;

	pCanvas->CurX = X;
	pCanvas->CurY = Y;
	pCanvas->DrawColor = pColor;

	pCanvas->DrawText(String, false, XScale, YScale, NULL);

	pCanvas->CurX = OldCurX;
	pCanvas->CurY = OldCurY;

	pCanvas->DrawColor = OldColour;
	//VMProtectEnd();
}
void inline DrawRect(UCanvas* pCanvas, float X, float Y, float Width, float Height, UTexture2D* Texture, FColor pColor)
{
	//VMProtectBeginMutation("DrawRect");
	float OldCurX = pCanvas->CurX;
	float OldCurY = pCanvas->CurY;

	FColor OldColor = pCanvas->DrawColor;

	pCanvas->CurX = X;
	pCanvas->CurY = Y;
	pCanvas->DrawColor = pColor;

	pCanvas->DrawRect(Width, Height, Texture);

	pCanvas->CurX = OldCurX;
	pCanvas->CurY = OldCurY;

	pCanvas->DrawColor = OldColor;
	//VMProtectEnd();
}
void inline DrawBorderText(UCanvas *canvas, FString Text, float CoordX, float CoordY, FColor Color)
{
	//BLACK BORDER
	{
		canvas->SetPos(CoordX + 1, CoordY + 1, 0);
		canvas->SetDrawColor(0, 0, 0, 255);
		canvas->DrawText(Text, false, 1.0f, 1.0f, NULL);

		canvas->SetPos(CoordX - 1, CoordY + 1, 0);
		canvas->SetDrawColor(0, 0, 0, 255);
		canvas->DrawText(Text, false, 1.0f, 1.0f, NULL);

		canvas->SetPos(CoordX + 1, CoordY - 1, 0);
		canvas->SetDrawColor(0, 0, 0, 255);
		canvas->DrawText(Text, false, 1.0f, 1.0f, NULL);

		canvas->SetPos(CoordX - 1, CoordY - 1, 0);
		canvas->SetDrawColor(0, 0, 0, 255);
		canvas->DrawText(Text, false, 1.0f, 1.0f, NULL);

		canvas->SetPos(CoordX - 1, CoordY, 0);
		canvas->SetDrawColor(0, 0, 0, 255);
		canvas->DrawText(Text, false, 1.0f, 1.0f, NULL);

		canvas->SetPos(CoordX + 1, CoordY, 0);
		canvas->SetDrawColor(0, 0, 0, 255);
		canvas->DrawText(Text, false, 1.0f, 1.0f, NULL);

		canvas->SetPos(CoordX, CoordY - 1, 0);
		canvas->SetDrawColor(0, 0, 0, 255);
		canvas->DrawText(Text, false, 1.0f, 1.0f, NULL);

		canvas->SetPos(CoordX, CoordY + 1, 0);
		canvas->SetDrawColor(0, 0, 0, 255);
		canvas->DrawText(Text, false, 1.0f, 1.0f, NULL);
	}

	canvas->SetPos(CoordX, CoordY, 0);
	canvas->DrawColor = Color;
	canvas->DrawTextW(Text, false, 1.0f, 1.0f, NULL);
}
void inline FPS(UCanvas* canvas)
{
	CurrentTickCount = clock() * 0.001f;
	Fps++;
	if ((CurrentTickCount - LastTickCount) > 1.0f)
	{
		LastTickCount = CurrentTickCount;
		swprintf(FrameRate, 50, L"[ FPS: %d ]", Fps);
		Fps = 0;
	}
	DrawBorderText(canvas, FrameRate, canvas->ClipX - 5 - (StrLen(canvas, FrameRate)), 2.5f, White);
}
void inline DrawCrosshair(UCanvas* pCanvas, FColor pColor)
{
	//VMProtectBeginMutation("DrawCrosshair");
	DrawRect(pCanvas, pCanvas->ClipX / 2 - 10, pCanvas->ClipY / 2 - 0.5f, 20, 2, pCanvas->DefaultTexture, pColor);
	DrawRect(pCanvas, pCanvas->ClipX / 2 - 0.5f, pCanvas->ClipY / 2 - 10, 2, 20, pCanvas->DefaultTexture, pColor);
	//VMProtectEnd();
}
FVector inline WorldToScreen(UCanvas* pCanvas, FVector Location)
{
	if (!pPC->Pawn->Weapon) return { 0,0,0 };
	FVector Vector;

	FVector AxisX, AxisY, AxisZ, Delta, Transformed;

	pCanvas->GetAxes(MyCameraRotation, &AxisX, &AxisY, &AxisZ);

	Delta = pPC->Subtract_VectorVector(Location, MyCameraLocation);
	Transformed.X = pPC->Dot_VectorVector(Delta, AxisY);
	Transformed.Y = pPC->Dot_VectorVector(Delta, AxisZ);
	Transformed.Z = pPC->Dot_VectorVector(Delta, AxisX);

	if (Transformed.Z < 1.00f)
		Transformed.Z = 1.00f;

	float FOVAngle = pPC->PlayerCamera->GetFOVAngle() + ((pPC->PlayerCamera->GetFOVAngle() * 29.0f) / 61);

	Vector.X = (pCanvas->ClipX / 2.0f) + Transformed.X * ((pCanvas->ClipX / 2.0f) / pPC->Tan(FOVAngle * CONST_Pi / 360.0f)) / Transformed.Z;
	Vector.Y = (pCanvas->ClipY / 2.0f) + -Transformed.Y * ((pCanvas->ClipX / 2.0f) / pPC->Tan(FOVAngle * CONST_Pi / 360.0f)) / Transformed.Z;
	return Vector;
}
void inline Draw2DBoundingBox(UCanvas* canvas, ACombatPawn* Target, FColor color)
{
	//VMProtectBeginMutation("Draw2DBoundingBox");
	if (!Target->IsAliveAndWell()) return;

	FBox Box;
	Target->GetComponentsBoundingBox(&Box);

	FVector BoxMax = WorldToScreen(canvas, Box.Max);
	FVector BoxMin = WorldToScreen(canvas, Box.Min);
	FVector BoxCenter = WorldToScreen(canvas, Target->Location);

	float Width = fabs((BoxMax.Y - BoxMin.Y) / 4);

	canvas->Draw2DLine(BoxCenter.X - Width, BoxMin.Y, BoxCenter.X + Width, BoxMin.Y, color); // низ
	canvas->Draw2DLine(BoxCenter.X - Width, BoxMax.Y, BoxCenter.X + Width, BoxMax.Y, color); // верх
	canvas->Draw2DLine(BoxCenter.X - Width, BoxMin.Y, BoxCenter.X - Width, BoxMax.Y, color); // лево
	canvas->Draw2DLine(BoxCenter.X + Width, BoxMax.Y, BoxCenter.X + Width, BoxMin.Y, color); // право
	//VMProtectEnd();
}
void inline Draw3DBoundingBox(UCanvas* pCanvas, APawn* CombatPawn, FColor pColor)
{
	//VMProtectBeginMutation("Draw3DBoundingBox");
	if (!CombatPawn->IsAliveAndWell())
		return;

	FVector Min, Max, vVec1, vVec2, vVec3, vVec4, vVec5, vVec6, vVec7, vVec8;

	FBox Box;
	CombatPawn->GetComponentsBoundingBox(&Box);

	if (Box.IsValid)
	{
		Max = Box.Max;
		Min = Box.Min;
		{
			vVec3 = Min;
			vVec3.X = Max.X;
			vVec4 = Min;
			vVec4.Y = Max.Y;
			vVec5 = Min;
			vVec5.Z = Max.Z;
			vVec6 = Max;
			vVec6.X = Min.X;
			vVec7 = Max;
			vVec7.Y = Min.Y;
			vVec8 = Max;
			vVec8.Z = Min.Z;
			vVec1 = WorldToScreen(pCanvas, Min);
			vVec2 = WorldToScreen(pCanvas, Max);
			vVec3 = WorldToScreen(pCanvas, vVec3);
			vVec4 = WorldToScreen(pCanvas, vVec4);
			vVec5 = WorldToScreen(pCanvas, vVec5);
			vVec6 = WorldToScreen(pCanvas, vVec6);
			vVec7 = WorldToScreen(pCanvas, vVec7);
			vVec8 = WorldToScreen(pCanvas, vVec8);

			pCanvas->Draw2DLine(vVec1.X, vVec1.Y, vVec5.X, vVec5.Y, pColor);
			pCanvas->Draw2DLine(vVec2.X, vVec2.Y, vVec8.X, vVec8.Y, pColor);
			pCanvas->Draw2DLine(vVec3.X, vVec3.Y, vVec7.X, vVec7.Y, pColor);
			pCanvas->Draw2DLine(vVec4.X, vVec4.Y, vVec6.X, vVec6.Y, pColor);
			pCanvas->Draw2DLine(vVec1.X, vVec1.Y, vVec3.X, vVec3.Y, pColor);
			pCanvas->Draw2DLine(vVec1.X, vVec1.Y, vVec4.X, vVec4.Y, pColor);
			pCanvas->Draw2DLine(vVec8.X, vVec8.Y, vVec3.X, vVec3.Y, pColor);
			pCanvas->Draw2DLine(vVec8.X, vVec8.Y, vVec4.X, vVec4.Y, pColor);
			pCanvas->Draw2DLine(vVec2.X, vVec2.Y, vVec6.X, vVec6.Y, pColor);
			pCanvas->Draw2DLine(vVec2.X, vVec2.Y, vVec7.X, vVec7.Y, pColor);
			pCanvas->Draw2DLine(vVec5.X, vVec5.Y, vVec6.X, vVec6.Y, pColor);
			pCanvas->Draw2DLine(vVec5.X, vVec5.Y, vVec7.X, vVec7.Y, pColor);
		}
	}
	//VMProtectEnd();
}
FVector inline GetBonePosition(APawn *pPawn, int BoneID)
{
	FName BoneName = pPawn->Mesh->GetBoneName(BoneID);
	return pPawn->Mesh->GetBoneLocation(BoneName, 0);
}
void inline DrawBone(UCanvas* pCanvas, APawn *Pawnx, FColor pColor)//眼睛 骨骼点ID: 8
{
	if (!Pawnx->Mesh) return;
	int BoneVec[][2] =
	{
		//左腿
		{ 52, 51 },{ 51, 50 },{ 50, 54 },{ 54, 49 },
		//屁股
		{ 49, 48 },{ 48, 55 },
		//右腿
		{ 55, 60 },{ 60, 56 },{ 56, 57 },{ 57, 58 },
		//脊椎
		{ 48, 3 },{ 3, 4 },{ 4, 5 },{ 5, 6 },{ 6, 7 },
		//左臂
		{ 6, 10 },{ 10, 29 },{ 29, 30 },{ 30, 31 },
		//右臂
		{ 6, 9 },{ 9, 12 },{ 12, 13 },{ 13, 14 }
	};
	for (int i = 0; i < 23; ++i)
	{
		FVector Bone1 = GetBonePosition(Pawnx, BoneVec[i][0]);
		FVector Bone2 = GetBonePosition(Pawnx, BoneVec[i][1]);

		FVector Out1 = WorldToScreen(pCanvas, Bone1);
		FVector Out2 = WorldToScreen(pCanvas, Bone2);

		pCanvas->Draw2DLine(Out1.X, Out1.Y, Out2.X, Out2.Y, pColor);

		//FVector Bone1 = GetBonePosition(pPawn, i);
		//FVector Out1 = WorldToScreen(pCanvas, Bone1);
		//
		//wchar_t BoneID[256];
		//swprintf(BoneID, L"%i", i);
		//
		//DrawString(pCanvas, Out1.X, Out1.Y, BoneID, 1.0f, 1.0f, White);
	}
}
bool inline IsVisible(const FVector& Location, APawn *target)
{
	if (!target->Mesh) return false;
	FVector extent = { 0, 0, 0 };
	FVector hitLocation;
	FVector hitNormal;
	FTraceHitInfo hitInfo;
	AActor *actor = pPC->Trace(Location, MyCameraLocation, true, extent, 0, &hitLocation, &hitNormal, &hitInfo);
	return (target == actor);
}
void inline AutoAim(UCanvas *pCanvas, APawn *MyPawn, APawn *target)
{
	if (!target->Mesh) return;
	FVector HeadBoneLocation = GetBonePosition(target, 8);
	//if (!IsVisible(HeadBoneLocation, target)) return;
	FRotator NewRotation = VectorToRotation(MyPawn, MyPawn->Subtract_VectorVector(HeadBoneLocation, MyCameraLocation));
	MyPawn->ClientSetRotation(NewRotation);
	//printf("NewRotation: %i  %i\n", NewRotation.Pitch, NewRotation.Yaw);
	//printf("MyCameraRotation: %i  %i\n", MyCameraRotation.Pitch, MyCameraRotation.Yaw);
}
void inline CheckOutsideScreen(UCanvas* canvas, wchar_t* string, float CoordX, float CoordY, const FColor& color)
{
	if (StrLen(canvas, string) + CoordX < canvas->ClipX)
	{
		DrawBorderText(canvas, string, CoordX, CoordY, color);
		return;
	}
	else
	{
		for (int i = 0; i < 1024; i++)
		{
			if (wcslen(string) - 1 >= 1)
				string[wcslen(string) - 1] = '\0';
			else return;
			if (StrLen(canvas, string) + CoordX < canvas->ClipX)
			{
				DrawBorderText(canvas, string, CoordX, CoordY, color);
				return;
			}
		}
	}
	return;
}
float inline Get3DDistance(AActor *pawn, AActor *target)
{
	return sqrt
	(pow(target->Location.X - pawn->Location.X, 2)
		+ pow(target->Location.Y - pawn->Location.Y, 2)
		+ pow(target->Location.Z - pawn->Location.Z, 2));
}
void inline HeadCircle(APawn *target, UCanvas* pCanvas, int numSides, FColor Color)
{
	if (!target->Mesh) return;
	FVector WorldHead = GetBonePosition(target, 8);
	FVector Head = WorldHead;
	Head = WorldToScreen(pCanvas, Head);
	FVector HeadUp = WorldHead;
	HeadUp.Z += 4;
	HeadUp = WorldToScreen(pCanvas, HeadUp);
	FVector HeadLeft = WorldHead;
	HeadLeft.X += 4;
	HeadLeft = WorldToScreen(pCanvas, HeadLeft);
	FVector HeadRight = WorldHead;
	HeadRight.Y += 4;
	HeadRight = WorldToScreen(pCanvas, HeadRight);
	FVector Neck = GetBonePosition(target, 7);
	Neck = WorldToScreen(pCanvas, Neck);
	pCanvas->Draw2DLine(Neck.X, Neck.Y, Head.X, Head.Y, Color);
	float X = Head.X;
	float Y = Head.Y;
	float radius = 0;
	float up = (HeadUp.Y - Head.Y);
	float left = (X - HeadLeft.X);
	float right = (X - HeadRight.X);
	if (up < 0) up = -up;
	if (left < 0) left = -left;
	if (right < 0) right = -right;
	if (up >= left && up >= right) radius = up;
	else if (left >= up && left >= right) radius = left;
	else if (right >= up && right >= up) radius = right;
	if (radius < 0) radius = -radius;
	float Step = CONST_Pi * 2.0f / numSides;
	int Count = 0;
	FVector2D V[128];
	for (float a = 0; a < CONST_Pi*2.0; a += Step) {
		float X1 = radius * cos(a) + X;
		float Y1 = radius * sin(a) + Y;
		float X2 = radius * cos(a + Step) + X;
		float Y2 = radius * sin(a + Step) + Y;
		V[Count].X = X1;
		V[Count].Y = Y1;
		V[Count + 1].X = X2;
		V[Count + 1].Y = Y2;
		pCanvas->Draw2DLine(V[Count].X, V[Count].Y, X2, Y2, Color);
	}
}
void inline DrawTargetName(UCanvas *canvas, APawn *pawn, APawn *target, const FColor& color)
{
	if (!target->Mesh) return;
	FVector center = WorldToScreen(canvas, GetBonePosition(target, 8));
	wchar_t buffer[1024];
	swprintf(buffer, 1024, L"[%dM] %s", (int)(Get3DDistance(pawn, target) / 100), target->GetHumanReadableName().c_str());
	FString name(buffer);
	CheckOutsideScreen(canvas, buffer, center.X - StrLen(canvas, name) / 2, center.Y - 30, color);
}
void inline DrawHealthBar(UCanvas *canvas, APawn *pawn)
{
	FVector min, max, center;
	FBox box;
	pawn->GetComponentsBoundingBox(&box);
	if (box.IsValid)
	{
		min = box.Min;
		max = box.Max;
		int Health = pawn->eventGetHealth();
		int HealthMax = 100;
		if (Health > HealthMax) {
			Health = HealthMax;
		}
		float size = (70.0f / HealthMax) * Health;
		FColor color;
		if (Health > (HealthMax / 2))
		{
			color = MakeColor(MapColorValueA(Health, (HealthMax / 2)), 255, 0);
		}
		else
		{
			color = MakeColor(255, MapColorValueB(Health, (HealthMax / 2)), 0);
		}
		float W = max.X - min.X;
		float H = max.Y - min.Y;
		float D = max.Z - min.Z;
		center.X = max.X - (W / 2);
		center.Y = max.Y - (H / 2);
		center.Z = max.Z - (D + 8);
		center = WorldToScreen(canvas, center);
		center.Y += 7;
		canvas->Draw2DLine(center.X - 35 - 1, center.Y, ((center.X - 35) + size), center.Y, color);
		canvas->Draw2DLine(center.X - 35 - 1, center.Y - 1, ((center.X - 35) + size), center.Y - 1, color);
		canvas->Draw2DLine(center.X - 35 - 1, center.Y - 2, ((center.X - 35) + size), center.Y - 2, color);
		canvas->Draw2DLine(center.X - 35 - 1, center.Y - 3, ((center.X - 35) + size), center.Y - 3, color);
		canvas->Draw2DLine(center.X - 36, center.Y + 1, center.X + 36, center.Y + 1, Black);
		canvas->Draw2DLine(center.X - 36 - 1, center.Y - 4, center.X + 36, center.Y - 4, Black);
		canvas->Draw2DLine(center.X - 36, center.Y - 4, center.X - 36, center.Y + 1, Black);
		canvas->Draw2DLine(center.X + 36, center.Y - 4, center.X + 36, center.Y + 1, Black);
	}
}
bool inline IsInFOV(APawn *pawn, APawn* target)
{
	float dist2 = Get3DDistance(pawn, target);

	FRotator newRotation = VectorToRotation(pawn, pawn->Subtract_VectorVector(target->Location, MyCameraLocation));
	float fYaw = (float)(pPC->Rotation.Yaw - newRotation.Yaw);
	if (fYaw < 0) fYaw = -fYaw;

	fYaw = (fYaw / 182.0444f);

	int HowMany = (int)fYaw;
	int Inside = HowMany / 360;

	if (Inside > 0) fYaw = (fYaw - (360 * Inside));

	switch (iFovAngle)
	{
	case 0:
		if (fYaw <= 1) return true;
		else return false;

		break;
	case 1:
		if (fYaw <= 2) return true;
		else return false;

		break;
	case 2:
		if (fYaw <= 3) return true;
		else return false;

		break;
	case 3:
		if (fYaw <= 5) return true;
		else return false;

		break;
	case 4:
		if (fYaw <= 10) return true;
		else return false;

		break;
	case 5:
		if (fYaw <= 25) return true;
		else return false;

		break;
	case 6:
		if (fYaw <= 30) return true;
		else return false;

		break;
	case 7:
		if (fYaw <= 45) return true;
		else return false;

		break;
	default:
		return false;
	}
}
void inline VirtualJump(APawn* MyPawn)
{
	MyPawn->SetCollisionSize(MyPawn->GetCollisionRadius(), (float)(iVirtualJumpValue + 55));
}
void PostRender(UCanvas *canvas) {
	if (!canvas) return;

	//canvas->SetPos(10, 10, 0);
	//canvas->DrawColor = Green;
	//wchar_t* szText = char2wchar("啵一个紫血");
	//canvas->DrawTextW(szText, false, 1.0f, 1.0f, NULL);


	DrawBorderText(canvas, L"ImKK QQ:2217936322", (canvas->ClipX / 2) - (StrLen(canvas, L"ImKK QQ:2217936322") / 2), 3, Red);
	FPS(canvas);
	//DrawCrosshair(canvas,Red);
	APawn* MyPawn;
	if (!pPC || !pPC->PlayerCamera || !pPC->Pawn) return;
	MyPawn = pPC->Pawn;
	pPC->PlayerCamera->GetCameraViewPoint(&MyCameraLocation, &MyCameraRotation);
	if (pPC->WorldInfo && pPC->WorldInfo->PawnList)
	{
		ACombatPawn *PlayerPawn = (ACombatPawn*)pPC->WorldInfo->PawnList;
		while (PlayerPawn)
		{
			if (PlayerPawn == MyPawn && !PlayerPawn->bDeleteMe && !PlayerPawn->bPlayedDeath/* && !MyPawn->Weapon*/)//修改自身的数据
			{
				/*//增高鞋垫
				//VirtualJump(MyPawn);

				//子弹无重力
				//((ACombatPawn*)MyPawn->Weapon)->CustomGravityScaling = 0.0f;

				//printf("bCanDisplayIconInTacticalMap: %i  PowerBullet_Buff: %i  bIsInvulnerable: %i  bIsLocalPawn: %i  bIsCheatPawn: %i  bWeaponImpactAttenuate: %i  bRespawnAction: %i  bDirtyWeaponAmmo: %i  bGodMode: %i\n",
				//	((ACombatPawn*)MyPawn)->bCanDisplayIconInTacticalMap,
				//	((ACombatPawn*)MyPawn)->PowerBullet_Buff,
				//	((ACombatPawn*)MyPawn)->bIsInvulnerable,
				//	((ACombatPawn*)MyPawn)->bIsLocalPawn,
				//	((ACombatPawn*)MyPawn)->bIsCheatPawn,
				//	((ACombatPawn*)MyPawn)->bWeaponImpactAttenuate,
				//	((ACombatPawn*)MyPawn)->bRespawnAction,
				//	((ACombatPawn*)MyPawn)->bDirtyWeaponAmmo,
				//	((ACombatPawn*)MyPawn)->bGodMode);

				//((ACombatPawn*)MyPawn)->PowerBullet_Buff = 1;
				//((ACombatPawn*)MyPawn)->bIsInvulnerable = 1;//复活时的无敌保护状态
				//((ACombatPawn*)MyPawn)->bIsLocalPawn = 1;//等于1就表明当前pawn是LocalPlayer

				//((ACombatPawn*)MyPawn)->bWeaponImpactAttenuate = 0;//武器伤害?
				//((ACombatPawn*)MyPawn)->bDirtyWeaponAmmo = 0;
				//((ACombatPawn*)MyPawn)->bGodMode = 0;

				//人物飞天
				//if (GetAsyncKeyState(VK_LCONTROL) & GetAsyncKeyState(VK_SPACE) & 0x8000)
				//{
				//	((ACombatPawn*)MyPawn)->CustomGravityScaling = 0.0f;//人物飞天(修改重力)默认重力0.65
				//}
				//else
				//{
				//	((ACombatPawn*)MyPawn)->CustomGravityScaling = 0.65f;//人物飞天(修改重力)默认重力0.65
				//}

				//加30发子弹
				//((ACombatWeapon*)MyPawn->Weapon)->AddAmmo(30);

				//0秒换弹
				//((ACombatWeapon*)MyPawn->Weapon)->ReloadTime = 0.0f;
				//((ACombatWeapon*)MyPawn->Weapon)->ReloadingActionTime = 0.0f;
				//((ACombatWeapon*)MyPawn->Weapon)->PreReloadingActionTime = 0.0f;
				//((ACombatWeapon*)MyPawn->Weapon)->PreReloadTime = 0.0f;
				//((ACombatWeapon*)MyPawn->Weapon)->PostReloadTime = 0.0f;

				//瞬击
				//if (GetAsyncKeyState(VK_LBUTTON))
				//{
				//	MyPawn->Weapon->InstantFire();
				//	MyPawn->Weapon->bInstantHit = true;
				//	MyPawn->Weapon->InstantHitDamage.Data[0] = 9999;
				//	MyPawn->Weapon->InstantHitMomentum.Data[0] = 9999;
				//}*/
				if (!(ACombatWeapon*)MyPawn->Weapon) return;

				((ACombatPawn*)MyPawn)->bIsCheatPawn = 0;//估计是判断是否是挂壁 为0吧

				//无后
				((ACombatWeapon*)MyPawn->Weapon)->bRemoveVerticalRecoil = 1;
				((ACombatWeapon*)MyPawn->Weapon)->bRemoveHorizonRecoil = 1;
				((ACombatWeapon*)MyPawn->Weapon)->RecoilInterpSpeed = 0;
				((ACombatWeapon*)MyPawn->Weapon)->RecoilAutoCorrectSpeed = 0;

				//一秒千刀
				if (((ACombatWeapon*)MyPawn->Weapon)->IsMeleeWeapon()) { ((AWeapon*)MyPawn->Weapon)->FireInterval.Data[0] = 0.1f; }

				//无扩散
				((AWeapon*)MyPawn->Weapon)->EquipTime = 0;
				((AWeapon*)MyPawn->Weapon)->PutDownTime = 0;
				((AWeapon*)MyPawn->Weapon)->WeaponRange = 100000;
				((ACombatWeapon*)MyPawn->Weapon)->Accuracy = 1;
				((ACombatWeapon*)MyPawn->Weapon)->bNoSpread = 1;
				((ACombatWeapon*)MyPawn->Weapon)->bAutoReload = 1;
				((ACombatWeapon*)MyPawn->Weapon)->ControlAccuracy = 9999;
				((ACombatWeapon*)MyPawn->Weapon)->SpreadOuterSpeedAccuracy = 9999;
				((ACombatWeapon*)MyPawn->Weapon)->SpreadOuterSpeedAccuracy = 10000;
				((ACombatWeapon*)MyPawn->Weapon)->CurRecoilFactor.Deviation_Max = 1;
				((ACombatWeapon*)MyPawn->Weapon)->CurRecoilFactor.Deviation_Added = 0;
				((ACombatWeapon*)MyPawn->Weapon)->CurRecoilFactor.Deviation_Start = 0;
				((ACombatWeapon*)MyPawn->Weapon)->SpreadCorrectInterpOuterSpeed = 9999;
				((ACombatWeapon*)MyPawn->Weapon)->SpreadCorrectInterpInnerSpeed = 9999;
				((ACombatWeapon*)MyPawn->Weapon)->CurRecoilFactor.HorizonRecoil_Max = 1;
				((ACombatWeapon*)MyPawn->Weapon)->CameraShake_HitBodyAdjust.Data[0] = 0;
				((ACombatWeapon*)MyPawn->Weapon)->CurRecoilFactor.VerticalRecoil_Max = 1;
				((ACombatWeapon*)MyPawn->Weapon)->CurRecoilFactor.HorizonRecoil_MinVariable = 0;
				((ACombatWeapon*)MyPawn->Weapon)->CurRecoilFactor.VerticalRecoil_MinVariable = 0;
				((ACombatWeapon*)MyPawn->Weapon)->CurRecoilFactor.AddedPitchVerticalRecoilMax = 0;
			}
			else if (!PlayerPawn->bDeleteMe && !PlayerPawn->bPlayedDeath)//敌人的
			{
				if (!PlayerPawn->IsSameTeamByController((AController*)MyPawn))//判断是玩家队伍是否与自己不相等
				{
					W2SLoc = WorldToScreen(canvas, PlayerPawn->Location);
					FVector HeadBoneLocation = GetBonePosition(PlayerPawn, 8);
					if (IsVisible(HeadBoneLocation, PlayerPawn))//障碍物判断 骨骼头 可视为真
					{
						if (GetAsyncKeyState(VK_LBUTTON))
						{
							if (IsInFOV(MyPawn, PlayerPawn))
							{
								AutoAim(canvas, MyPawn, PlayerPawn);//垃圾测试自瞄
							}
						}
						//准星到骨骼头连线
						FVector HeadBoneOut = WorldToScreen(canvas, HeadBoneLocation);//骨骼头ID:8
						canvas->Draw2DLine(canvas->ClipX / 2, canvas->ClipY / 2, HeadBoneOut.X, HeadBoneOut.Y, Red);
						//2D方框
						//Draw2DBoundingBox(canvas, PlayerPawn, Red);
						//3D方框
						Draw3DBoundingBox(canvas, PlayerPawn, Red);
						//骨骼绘制
						DrawBone(canvas, PlayerPawn, Red);
						//头部圆圈
						HeadCircle(PlayerPawn, canvas, 10, Red);
					}
					else
					{
						//准星到骨骼头连线
						FVector HeadBoneOut = WorldToScreen(canvas, HeadBoneLocation);//骨骼头ID:8
						canvas->Draw2DLine(canvas->ClipX / 2, canvas->ClipY / 2, HeadBoneOut.X, HeadBoneOut.Y, White);
						//2D方框
						//Draw2DBoundingBox(canvas, PlayerPawn, Green);
						//3D方框
						Draw3DBoundingBox(canvas, PlayerPawn, Orange);
						//骨骼绘制
						DrawBone(canvas, PlayerPawn, Yellow);
						//头部圆圈
						HeadCircle(PlayerPawn, canvas, 10, Cyan);
					}
					//玩家名字
					DrawTargetName(canvas, MyPawn, PlayerPawn, Green);
					//玩家血量
					DrawHealthBar(canvas, PlayerPawn);
					//人物透视
					if (!PlayerPawn->Mesh) return;
					PlayerPawn->Mesh->DrawOutLine = 1;
					PlayerPawn->Mesh->OutlineColor = Red;
					PlayerPawn->Mesh->OutlineWidth = 2;
					PlayerPawn->Mesh->OutlineMinWidth = 1;
					PlayerPawn->Mesh->OutLineColorIntense = 2.5f;
					PlayerPawn->Mesh->OutlineBlendMode = 3;
					PlayerPawn->Mesh->SetDepthPriorityGroup(ESceneDepthPriorityGroup::SDPG_World);
					PlayerPawn->Mesh->SetViewOwnerDepthPriorityGroup(ESceneDepthPriorityGroup::SDPG_World, ESceneDepthPriorityGroup::SDPG_World);
				}
				else
				{
					PlayerPawn->Mesh->DrawOutLine = 0;
				}
			}
			PlayerPawn = (ACombatPawn*)PlayerPawn->NextPawn;
		}
	}
}
void __fastcall MyProcessEvent(class UObject *pObject, void* edx /*别瞎几把改,也别瞎几把调用!!*/, UFunction *pFunction, void* pParams, void* pResult)
{
	string v_pFunction{ pFunction->GetFullName() };
	//Log("%s", v_pFunction.c_str());
	//std::cout << v_pFunction.c_str() << std::endl;

	//if (GetAsyncKeyState('O') & 1) //-
	//	countnum--;
	//if (GetAsyncKeyState('P') & 1) //+
	//	countnum++;
	//if (GetAsyncKeyState(VK_END) & 1) //reset, set to -1
	//	countnum = 0;
	//printf("countnum: %i\n", countnum);

	//printf("%X\n", ((UCombatGameEngine*)UObject::FindObject< UCombatGameEngine >("CombatGameEngine Transient.CombatGameEngine"))->GetTinyFont());
	if (v_pFunction.find("Function Engine.GameViewportClient.PostRender") != string::npos)
	{
		if (pParams)
		{
			//UCanvas *mCanvas = ((UGameViewportClient_eventPostRender_Parms*)(pParams)).Canvas;
			UGameViewportClient_eventPostRender_Parms* x = (UGameViewportClient_eventPostRender_Parms*)(pParams);
			//if (!pFont)
			//{
			//	pFont = x->Canvas->GetDefaultCanvasFont();
			//}
			PostRender(x->Canvas);
		}
	}
	if (v_pFunction.find("Function CombatGame.CombatPC.PlayerTick") != string::npos)
	{
		if (pObject)
		{
			pPC = ((ACombatPlayerControllerBase*)(pObject));
		}
	}
	/*	if (v_pFunction.find("Function Engine.PlayerController.StopFire") != string::npos)
		{

		}
	*/
	if (v_pFunction.find("Function CombatGame.CombatPC.Destroyed") != string::npos)
	{
		if (pObject == pPC)
		{
			pPC = nullptr;
		}
	}
	ProcessEvent(pObject, pFunction, pParams, pResult);
}
DWORD WINAPI OnAttach(LPVOID lpParam) {

	Beep(1000, 500);

	AllocConsole();
	freopen("CONOUT$", "w", stdout);

	std::cout << "啵一个紫血!!!" << std::endl;
	do {
		std::cout << "等待游戏窗口创建!" << std::endl;
		g_window = FindWindow(L"LaunchCombatUWindowsClient", L"BlackSquad (32-bit, DX9)");
		if (!g_window)
		{
			Sleep(500);
		}
	} while (!g_window);
	std::cout << "游戏窗口创建完毕!!" << std::endl;

	if (MH_Initialize() != MH_OK) printf("MH_Initialize failed\n");
	if (MH_CreateHook((PVOID)ProcessEvent, MyProcessEvent, reinterpret_cast<void**>(&ProcessEvent)) != MH_OK) printf("ProcessEvent hook failed\n");
	if (MH_EnableHook(MH_ALL_HOOKS) != MH_OK) { printf("MH_EnableHook failed\n"); return 1; }

	return 0;
}
BOOL WINAPI DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved) {
	if (dwReason == DLL_PROCESS_ATTACH) {
		DisableThreadLibraryCalls(hModule);
		std::wstring v_exe_full_path{ GetCommandLineW() };
		if (v_exe_full_path.find(L"BlackSquadGame.exe") != std::wstring::npos)
		{
			FakeThread.CreateFakeThread(OnAttach, NULL);
		}
	}
	return TRUE;
}
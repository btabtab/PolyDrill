#include "../MetaLauncher/RaylibHandling.h"
#include "../MetaLauncher/EngineCode/KettleRenderer.h"
#include "../MetaLauncher/EngineCode/KettleString.h"

void drawRoomScene()
{
}

void drawLoop()
{
}

int main()
{
	Camera3D camera;
	startup("PolyDrill v0.1", 300, 300, &camera);
	SetCameraMode(camera, CAMERA_FREE);
	while (!WindowShouldClose())
	{
		UpdateCamera(&camera);
		{
			BeginDrawing();
			{
			}			
			ClearBackground(BLACK);
		}
		DrawFPS(10, 10);

	EndDrawing();

	drawRoomScene();
	}
}
#include "../MetaLauncher/RaylibHandling.h"
#include "../MetaLauncher/EngineCode/KettleRenderer.h"
#include "../MetaLauncher/EngineCode/KettleString.h"

void drawRoomScene()
{
	Polygon a = testPolygon(7.f);
	a.verts[1].pnt.x =- 7;
	PolygonCollection floor[2] = {getPolygonCollection(testPolygon(7.f)), getPolygonCollection(testPolygon(-7.f))};
	renderPolygonCollection(&floor[0], testLight());
	renderPolygonCollection(&floor[1], testLight());
}

int main()
{
	Camera3D camera;
	startup("PolyDrill v0.1", 300, 300, &camera);
	SetCameraMode(camera, CAMERA_FREE);
	while (!WindowShouldClose())
	{
		UpdateCamera(&camera);
			BeginDrawing();
			
			ClearBackground(BLACK);
			BeginMode3D(camera);
			{
				drawRoomScene();
			}
			EndMode3D();

		DrawFPS(10, 10);

	EndDrawing();

	drawRoomScene();
	}
}
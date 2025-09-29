#include "raylib.h"

int main() {
    const int screenWidth = 960;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Raylib 3d cube");
     
    //Defining camera
    camera3D camera = {0};
    camera.positon = (vector3){0.0f,5.0f,5.0f}
    camera.target = (vector3){0.0f,0.0f,0.0f}
    camera.up = (vector3){0.0f,1.0f,0.0f}
    camera

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        
        BeginMode3D(camera);

            DrawCube(cubePosition, 2.0f, 2.0f, 2.0f, GREEN);
            DrawCubeWires(cubePosition, 2.0f, 2.0f, 2.0f, PURPLE);

            DrawGRID(10, 1.0F);

        EndMode3D();

        DrawText("WELCOME TO MITCH N' KICKS' 3D PLAY SPACE", 10, 40, 20, BLACK)

        EndDrawing();
    }

    CloseWindow();
    return 0;
}
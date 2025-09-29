#include "raylib.h"

int main() {
    const int screenWidth = 960;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Raylib 3d cube");
     
    //Defining camera
    Camera3D camera = {0};
    Camera.Position = (Vector3){0.0f,5.0f,5.0f};
    Camera.target = (Vector3){0.0f,0.0f,0.0f};
    Camera.up = (Vector3){0.0f,1.0f,0.0f};
    Camera.fovy = 45.0f;
    Camera.projection = CAMERA_PERSPECTIVE;

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        
        BeginMode3D(Camera);

            DrawCube(CubePosition, 2.0f, 2.0f, 2.0f, GREEN);
            DrawCubeWires(CubePosition, 2.0f, 2.0f, 2.0f, PURPLE);

            DrawGrid(10, 1.0F);

        EndMode3D();

        DrawText("WELCOME TO MITCH N' KIXS' 3D PLAY SPACE", 10, 40, 20, BLACK);

        EndDrawing();
    }

    CloseWindow();
} 
#include "raylib.h"

int main() {
    const int screenWidth = 960;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Raylib 3d cube");
     
    //Defining camera
    Camera3D camera = {0};
    camera.Position = (Vector3){0.0f,10.0f,10.0f};
    camera.target = (Vector3){0.0f,0.0f,0.0f};
    camera.up = (Vector3){0.0f,1.0f,0.0f};
    camera.fovy = 45.0f;
    camera.projection = CAMERA_PERSPECTIVE;

    vector3 cubePosition = {0.0f, 0.0f, 0.0f};
    Vector3 CubeRotation = {0.0f, 0.0f, 0.0f};

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        
        if(IsKeyDown(KEY_RIGHT)) cubePosition.x += 0.5f;
        if(IsKeyDown(KEY_LEFT)) cubePosition.x -= 0.5f;
        if(IsKeyDown(KEY_UP)) cubePosition.Z += 0.5f;
        if(IsKeyDown(KEY_DOWN)) cubePosition.Z -= 0.5f;
        if(IsKeyDown(KEY_SPACE)) cubePosition.Y += 0.5f;
        if(IsKeyDown(KEY_SIX)) cubePosition.Y -= 0.5f;

        if(IsKeyDown(KEY_R)) CubeRotation += 1.0f

        BeginDrawing();
        ClearBackground(RAYWHITE);
        
        BeginMode3D(camera);

            DrawCube(CubePosition, 2.0f, 2.0f, 2.0f, GREEN);
            DrawCubeWires(CubePosition, 2.0f, 2.0f, 2.0f, PURPLE);

            DrawGrid(10, 1.0F);

        EndMode3D();

        DrawText("WELCOME TO MITCH N' KIXS' 3D PLAY SPACE", 10, 40, 20, BLACK);

        EndDrawing();
    }

    CloseWindow();
} 
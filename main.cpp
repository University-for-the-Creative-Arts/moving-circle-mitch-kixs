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
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
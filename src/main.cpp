#include <iostream>
#include "myLib.hpp"
#include "spaceship.hpp"
#include "raylib.h"

//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------
int main(void)
{
    std::cout << "Hello C++\n";
    myLib::hello();

    // Initialization
    //--------------------------------------------------------------------------------------
    const int windowWidth = 750;
    const int windowHeight = 600;

    InitWindow(windowWidth, windowHeight, "SPACE INVADERS");

    SetTargetFPS(45); // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------
    Spaceship spaceship;
    // Main game loop
    while (!WindowShouldClose()) // Detect window close button or ESC key
    {
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        //----------------------------------------------------------------------------------

        // Draw
        //----------------------------------------------------------------------------------
        BeginDrawing();

        ClearBackground(GRAY);

        DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
        spaceship.Draw();

        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow(); // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}
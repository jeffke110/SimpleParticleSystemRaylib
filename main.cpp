/*******************************************************************************************
*
*   Simple Particle System - Jeffrey Kedda
*
*   Created a smoke like particle system using vectors and drawing circles
*
********************************************************************************************/

#include "Particles.h"

int main(void)
{
    
    const int screenWidth = 800;
    const int screenHeight = 450;

    InitWindow(screenWidth, screenHeight, "SimpleParticleSystem");
    SetWindowState(FLAG_WINDOW_RESIZABLE);
    SetWindowMinSize(screenWidth, screenHeight);
    SetTargetFPS(60);
    
    Particles test = Particles();

    // Main game loop
    while (!WindowShouldClose())       
    {

        BeginDrawing();

        ClearBackground(RAYWHITE);
        test.draw();
        
        EndDrawing();

        test.updateMovement();
        test.addParticle();
        test.removeParticle();
        
    }

    CloseWindow();        
   
    return 0;
}
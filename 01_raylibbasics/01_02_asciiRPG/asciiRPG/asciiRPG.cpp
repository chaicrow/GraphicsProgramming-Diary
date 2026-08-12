// In this program I want to try and make a little ascii rpg inspired by Erik Yuzwa on Youtube. 
// As I have a huge passion for oldschool RPGs this motivates me to try raylib further and also dive into more challenging aspects of it.

#include "project.h"

int main()
{
    // Initialize game

    InitWindow(800, 600, "ASCII RPG");
    SetTargetFPS(60);
    srand(time(NULL)); // This uses the current system time in seconds as a seed

    game_startup();

    while (!WindowShouldClose()) {

        // Update game

        game_update();

        // Draw game

        game_draw();

    }

    game_shutdown();

    CloseWindow();

    return 0;
}

// 

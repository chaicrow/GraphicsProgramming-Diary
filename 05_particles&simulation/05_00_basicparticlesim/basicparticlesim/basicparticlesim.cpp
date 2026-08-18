// In this mini project I want to create a very basic particle simulation that follows your mouse around :)
//

#include <iostream>
#include <raylib.h>
#include <stdlib.h>        
#include <math.h> 

#define MAX_PARTICLES 1000

    // Defining the particle in a struct

typedef struct Particle {
    Vector2 position;
    Vector2 velocity;
    float radius;
    Color color;
    bool alive;
} Particle;



int main()
{
    // Initialize Window
    InitWindow(600, 600, "particlesim");
    SetTargetFPS(60);

    float drag = 0.5f;

    float maxSpeed = 5.0f;

    // Initializing particles

    Particle dustbunnies[MAX_PARTICLES] = { 0 };

    for (int i = 0; i < MAX_PARTICLES; i++)
    {
        dustbunnies[i].position.x = GetRandomValue(0, 600);
        dustbunnies[i].position.y = GetRandomValue(0, 600);
        dustbunnies[i].velocity.x = 0;
        dustbunnies[i].velocity.y = 0;
        dustbunnies[i].color = WHITE;
        dustbunnies[i].radius = 1;
        dustbunnies[i].alive = true;
    }

    while (!WindowShouldClose()) {

    // Get mouse position

        Vector2 mousePos = GetMousePosition();



        for (int i = 0; i < MAX_PARTICLES; i++) {


            Vector2 direction;

            direction.x = mousePos.x - dustbunnies[i].position.x;
            direction.y = mousePos.y - dustbunnies[i].position.y;

            float length = sqrt(
                direction.x * direction.x +
                direction.y * direction.y 
            );

            if (length != 0)
            {
                direction.x /= length;
                direction.y /= length;
            }

            dustbunnies[i].velocity.x += direction.x * drag;
            dustbunnies[i].velocity.y += direction.y * drag;

            // Friction
            dustbunnies[i].velocity.x *= 0.80f;
            dustbunnies[i].velocity.y *= 0.80f;

            dustbunnies[i].position.x += dustbunnies[i].velocity.x;
            dustbunnies[i].position.y += dustbunnies[i].velocity.y;


            
        }





        // Drawing the simulation
        BeginDrawing();
        ClearBackground(DARKGRAY);

        DrawCircle(mousePos.x, mousePos.y, 5, WHITE);

        for (int i = 0; i < MAX_PARTICLES; i++)
        {
            if (dustbunnies[i].alive)
                DrawCircle(dustbunnies[i].position.x, dustbunnies[i].position.y, dustbunnies[i].radius, dustbunnies[i].color);
        }

        EndDrawing();
    }

    CloseWindow();

    return 0;

}

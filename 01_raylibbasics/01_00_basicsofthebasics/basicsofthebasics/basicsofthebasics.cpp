// Hi :)
// This is my first time working with raylib! I've worked with blueprints in Unreal Engine before and did the whole beginner C++ tutorial from freeCodecamp.org on Youtube.
// Now it's time to get into raylib to get comfortable with coding in general. 
// I want to try specifically graphics programming so I am excited to see what we can achieve in Raylib before I go into OpenGL.

#include <iostream>
#include "raylib.h"


int main()
{

	InitWindow(600, 600, "My first window!");
	while (!WindowShouldClose())
	{
		BeginDrawing();

		ClearBackground(BLUE);
		DrawCircleV(Vector2{ 150, 550 }, 200, PINK);
		DrawCircleV(Vector2{ 50, 400 }, 100, DARKPURPLE);
		DrawText("This is my first raylib program!", 50, 200, 30, WHITE);

		EndDrawing();
	}

	CloseWindow();

	return 0;

}

// 
// Hi :)
// This is my first time working with raylib! I've worked with blueprints in Unreal Engine before and did the whole beginner C++ tutorial from freeCodecamp.org on Youtube.
// Now it's time to get into raylib to get comfortable with coding in general. 
// I want to try specifically graphics programming so I am excited to see what we can achieve in Raylib before I go into OpenGL.
// In this project I just want to draw some basic shapes and text to get a feel for how raylib works.

#include <iostream>
#include "raylib.h" // We need this to call the functions from the raylib library.


int main()
{

	InitWindow(600, 600, "My first window!"); // This opens a window with the title "My first window!" and a size of 600x600 pixels.
	while (!WindowShouldClose()) // This loop runs while the window is open.
	{
		BeginDrawing(); // This function tells the program that we are about to start drawing.

		ClearBackground(BLUE);	// This function clears the screen and fills it with a blue color.
		DrawCircleV(Vector2{ 150, 550 }, 200, PINK);	// This function draws a circle at the position (150, 550) with a radius of 200 pixels and a pink color.
		DrawCircleV(Vector2{ 50, 400 }, 100, DARKPURPLE); // This function draws a circle at the position (50, 400) with a radius of 100 pixels and a dark purple color.
		DrawText("This is my first raylib program!", 50, 200, 30, WHITE); // This function draws the text at the position (50, 200) with a font size of 30 pixels and a white color.

		EndDrawing();	// This function tells the program that we are done drawing and it can now display the contents of the screen.
	}

	CloseWindow();

	return 0;

}

// I enjoy the fact that raylib syntax is very self explanatory. 
// This is of course just extremely basic but I needed that to get into it and check whether I linked the library correctly. 

// In this program I'll build a mini game to discover more about raylib.
// I'm using a Programming With Nick tutorial on Youtube.
//

#include <iostream>
#include <vector>
#include <raylib.h>

class Food {
    public:
    int x;
    int y;
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;

    Color foodCol;

    Food(unsigned char r, unsigned char g, unsigned char b, unsigned char a)
        : r(r), g(g), b(b), a(a), foodCol(r, g, b, a) {}

    void spawn() {
		x = GetRandomValue(0, 800);
		y = GetRandomValue(0, 800);

    }

	void draw() {
		DrawCircle(x, y, 20, foodCol);
	}


};

int main()
{

	int ballX = 400;
	int ballY = 400;

    int foodCount = 0;


	Color pasPink = { 255, 192, 203, 255 };
	Color mossGreen = { 138, 154, 91, 255 };

    InitWindow(800, 800, "raylib mini game");
    SetTargetFPS(60);

	// Spawning 20 plums at random positions on the screen

    Food plum(128, 0, 128, 255);
    Food apple(255, 0, 0, 255);

   
    plum.spawn();
    apple.spawn();


    //Game Loop
    while (!WindowShouldClose()) {


		// Movement of the ball with WASD keys

        if (IsKeyDown(KEY_D)) {
        
            ballX += 3;
        }

        if (IsKeyDown(KEY_A)) {

            ballX -= 3;
        }

        if (IsKeyDown(KEY_W)) {

            ballY -= 3;
        }

        if (IsKeyDown(KEY_S)) {

            ballY += 3;
        }

		
		
		// Drawing of all the elements on the screen

        BeginDrawing();

		ClearBackground(pasPink);

        DrawCircle(ballX, ballY, 20, mossGreen);

        plum.draw();

        apple.draw();

        EndDrawing();

    }




    CloseWindow();
    return 0;
}

// 

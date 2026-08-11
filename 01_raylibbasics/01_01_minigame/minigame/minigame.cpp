// In this program I'll build a mini game to discover more about raylib.
// I'm using a Programming With Nick tutorial on Youtube.
//

#include <iostream>
#include <vector>
#include <raylib.h>
#include <list>

class Food { // Here a food class is created. I want the x and y values to always be randomized upon spawn. I also want to decide the color for every object of that class.
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

	int ballX = 400; // Setting up x and y values for the spawn of the movable ball.
	int ballY = 400;


	Color pasPink = { 255, 192, 203, 255 }; // Creating colors for the ball and the background.
	Color mossGreen = { 138, 154, 91, 255 };

    InitWindow(800, 800, "raylib mini game"); // Initializing the game window.
    SetTargetFPS(60);




	// Spawning 20 plums/apples at random positions on the screen

    Food plum(128, 0, 128, 255);
    Food apple(255, 0, 0, 255);

    std :: list<Food> plums; // Creating a list for all of our plums and apples
    std::list<Food> apples; 

    for (int i = 0; i < 10; i ++) { // Adding 10 items to each list (we are adding copies of the objects plum and apple)

        plums.push_back(plum); // push_back() is used to add the item in the brackets to the end of the list.
        apples.push_back(apple);
    }

    for (Food& plum : plums) { // For every object plum in the list plums we spawn a plum. 
        plum.spawn();
    }

    for (Food& apple : apples) {
        apple.spawn();
    }



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

        // Collecting foods

        for (auto it = plums.begin(); it != plums.end(); ) {

            if (CheckCollisionCircles(

                Vector2(ballX, ballY), 20, 
                Vector2(it->x, it->y), 20)) {

                it = plums.erase(it);
            }

            else {
                ++it;
            }
        }


        for (auto it = apples.begin(); it != apples.end(); ) {

            if (CheckCollisionCircles(

                Vector2(ballX, ballY), 20,
                Vector2(it->x, it->y), 20)) {

                it = apples.erase(it);
            }

            else {
                ++it;
            }
        }
   

		// Drawing of all the elements on the screen

        BeginDrawing();

		ClearBackground(pasPink);

        DrawCircle(ballX, ballY, 20, mossGreen);

        for (Food& plum : plums) {
            plum.draw();
        }

        for (Food& apple : apples) {
            apple.draw();
        }

        EndDrawing();

    }



    CloseWindow();
    return 0;
}

// 

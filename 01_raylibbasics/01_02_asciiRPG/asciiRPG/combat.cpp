#include "project.h"

void draw_combat_screen() {
	DrawRectangle(40, 40, 400, 200, DARKGRAY);
	DrawRectangleLines(40, 40, 400, 200, WHITE);
	DrawText("Combat!", 60, 60, 24, WHITE);
	DrawText("A monster smelled the sandwich in your bag!", 60, 100, 15, WHITE);
	DrawText("[G] Attack [H] Give Sandwich", 60, 140, 15, YELLOW);
}

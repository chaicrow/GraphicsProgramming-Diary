

#include "project.h"

Player player(10, "Strawberry");

void game_startup() {

	InitAudioDevice();

	player.x = 2; 
	player.y = 2; 
}


void game_update() {



}


void game_draw() {

	BeginDrawing();
	ClearBackground(BLACK);

	Vector2 origin = { 0 , 0 };
	draw_map(origin);
	draw_player(origin);

	EndDrawing();

}


void game_shutdown() {

	CloseAudioDevice();

}
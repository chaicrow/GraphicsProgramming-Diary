

#include "project.h"

Player player(10, "Strawberry");

GameState gameState = GameState::MAP;

void game_startup() {

	InitAudioDevice();

	player.x = 2; 
	player.y = 2; 


}


void game_update() {

	char next_tile;

	switch (gameState) {
	case GameState::MAP:

			if (IsKeyPressed(KEY_D) && map[player.y][player.x + 1] != '#') player.x++;
			if (IsKeyPressed(KEY_A) && map[player.y][player.x - 1] != '#') player.x--;
			if (IsKeyPressed(KEY_S) && map[player.y + 1][player.x] != '#') player.y++;
			if (IsKeyPressed(KEY_W) && map[player.y - 1][player.x] != '#') player.y--;

			next_tile = map[player.y][player.x];

			if (next_tile == 'M') {
				gameState = GameState::COMBAT;
			}

		break;

	case GameState::COMBAT:

		if (IsKeyPressed(KEY_G)) {
			// currently always win
			gameState = GameState::MAP;
			map[player.y][player.x] = '.';
		}

		if (IsKeyPressed(KEY_H)) {
			// currently always win
			gameState = GameState::MAP;
			map[player.y][player.x] = 'W';
		}

		break;
	}

	// Player movement



}


void game_draw() {

	BeginDrawing();
	ClearBackground(BLACK);

		switch (gameState) {
		case GameState::MAP: {

			Vector2 origin = { 0 , 0 };
			draw_map(origin);
			draw_player(origin);
			break;
		} 

		case GameState::COMBAT: {
			draw_combat_screen();
			break;
		}
	}



	EndDrawing();

}


void game_shutdown() {

	CloseAudioDevice();

}
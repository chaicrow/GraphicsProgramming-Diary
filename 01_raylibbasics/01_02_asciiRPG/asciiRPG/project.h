#pragma once


#include <iostream>
#include <array>
#include <raylib.h>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <cstring>
#include <string>

constexpr int TILE_SIZE = 32;
constexpr int MAP_WIDTH = 20;
constexpr int MAP_HEIGHT = 15;

class Player {
public:
	int x;
	int y;
	int health;
	std::string name;

	Player(int aHealth, std::string aName) {

		health = aHealth;
		name = aName;
	}
};


enum class GameState {
	MAP,
	COMBAT
};

extern GameState gameState;


// game.cpp file
void game_startup();
void game_update();
void game_draw();
void game_shutdown();
extern Player player;

// map.cpp file
Color get_tile_color(char tile);
void draw_map(Vector2 origin); 
void draw_player(Vector2 origin);
extern std::array<std::array<char, MAP_WIDTH>, MAP_HEIGHT> map;

// combat.cpp file
void draw_combat_screen();
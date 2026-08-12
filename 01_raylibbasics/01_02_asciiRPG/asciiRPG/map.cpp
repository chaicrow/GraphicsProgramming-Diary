

#include "project.h"



std::array <

    std::array <char, MAP_WIDTH>, 

    MAP_HEIGHT > 
    
    map = { {

    "###################",
    "#.................#",
    "#..*..............#",
    "#..........~~~~~..#",
    "#..........~~~~~..#",
    "#.............*...#",
    "#.................#",
    "#....*.....###....#",
    "#.................#",
    "#....~~~~.........#",
    "#.................#",
    "#..~~~~~..........#",
    "#..~###~..........#",
    "#..~~~~~.....*....#",
    "###################"

} }; // IMPORTANT: As we have an array in an array with rows and then columns we need to work with map[y][x]!

Color get_tile_color(char tile) { // Switch assigning each char a different color.
    switch (tile) {
    case '#': return GRAY; // Dungeon
    case '.': return GREEN; // Grass
    case '~': return BLUE; // Water
    case '*': return YELLOW; // Flower
    default: return RAYWHITE; 
    }
}

void draw_map(Vector2 origin) { // This function draws the map.

    for (int y = 0; y < MAP_HEIGHT; y++) {
        for (int x = 0; x < MAP_WIDTH; x++) {           // We do that by looping through each char of the rows [y] for each of the columns [x]
            char tile = map[y][x];                      // Every tile is defined by a value of the y array and a value from the x array. 
            Color tile_color = get_tile_color(tile);    // The color is defined by the character at the location map[y][x]. We use the get_tile_color function to decide which color.
            Vector2 pos = {
                origin.x + x * TILE_SIZE + 8,
                origin.y + y * TILE_SIZE + 6            // The actual position on the screen is decided via an origin (0,0) plus the array values [y][x] times TILE_SIZE plus 8/6 (those are offsets).
            };

            DrawTextEx(
                GetFontDefault(),
                TextFormat("%c", tile),
                pos,
                24,
                1,
                tile_color);
        }
            
    }
}

void draw_player(Vector2 origin) {
    Vector2 pos = {
        origin.x + player.x * TILE_SIZE + 8,
        origin.y + player.y * TILE_SIZE + 6
    };
    DrawTextEx(
        GetFontDefault(),
        "@",
        pos,
        24,
        1,
        PINK);
    
}

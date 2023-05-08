#ifndef SO_LONG_H
#define SO_LONG_H

#include <stdio.h>
#include <unistd.h>
// Command and Argument parameters
#include <fcntl.h>
// macros for reporting and retrieving error conditions using the symbol errno
#include <errno.h>
#include <string.h>

#include "get_next_line.h"
#include "libft.h"
#include "../minilibx/mlx.h"

// typedef struct

typedef struct game_start
{
    int fd; // for get_next_line argument parameter 
    int height_map; // 0 being top centre
    int width_map; // 0 is centre left 

    // for error checking 
    int player_count;
    int exit_count;
    int collectables;

    int x;
    int y;
    int step_counter;

    /* 
    int bomb;
    int enemey;
    */

   char **map;

   void *floor;
   void *wall;
   void *player;
   void *exit;
   void *collectables;
   void *mlx_pointer;
   void *window_pointer;

} game_complete;

// struct methods 

int exit_point(game_complete *game);
int map_reading(game_complete *game, char **argv);
int controls_working(int command, game_complete *game);

void adding_in_graphics(game_complete *game);
void place_images_in_game(game_complete *game);
void error_check(game_complete *game);

#endif

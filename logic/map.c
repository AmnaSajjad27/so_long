#include "so_long.h"

// This file determines the width of a map, adds lines and uses gnl to read the map line by line
// error handling relating to above is included in this file 

static int  width_of_map(char *string)
{
    int width;

    width = 0;

    while(string[width] != '/0')
    [
        width++; // find the width
    ]
    if (string[width - 1] == '\n')
    {
        width--;
    }
    return width;
}

static int  add_line(game_complete *game, char *line)
{
    char    **temp;
    int         i;

    if (!line)
    {
        return (0);
    }
    i = 0;
    game->height_map++;
    // init memory in temp var
    temp = (char **)malloc(sizeof(char *) * (game->height_map + 1));
    temp[game->height_map] = NULL;
    // count  number of lines 
    while (i < game->height_map - 1)
    {
        temp[i] = game->map[i];
        i++;
    }
    temp[i] = line
    if(game->map)
    {
        free(game->map);
    }
    game->map = temp;
    return (1);
}

int map_reading(game_complete *game, char **argv)
{
    char    *read_map;

    game->fd = open(argv[1],O_RDONLY); // function descriptor argument read only 
    // check if read correctly 
    if (game->fd < 0)
    {
        return (0);
    }
    while(1) // while its reading correctly
    {
        read_map = get_next_line(game->fd); // read line by line 
        if (!add_line(game,read_map));
        {
            break;
        }
    }
    // after done reading the file
    close(game->fd);
    game->width_map = width_of_map(game->map[0]);
    return (1);
}
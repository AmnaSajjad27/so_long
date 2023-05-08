#include "so_long.h"

// put a player using the most fuking retarded libarry ever created 
void    place_player(game_complete *game, int height, int width)
{
    mlx_put_image_to_window(game->mlx_pointer, game->window_pointer, game->player, width * 40, height * 40);
    game->x = height;
    game->y = width;
}

// place images
void    place_images_in_game(game_complete *game)
{
    int i;
    int j;

    // floor image
    game->floor = mlx_xpm_file_to_image(game->mlx_pointer, "images/floor.xpm",&i, &j);
    // wall image
    game->wall = mlx_xpm_file_to_image(game->mlx_pointer, "images/wall.xpm", &i, &j);
    // player 
    game->player = mlx_xpm_file_to_image(game->mlx_pointer, "images/player.xpm", &i, &j);
    // exit
    game->exit = mlx_xpm_file_to_image(game->mlx_pointer, "images/exit.xpm", &i, &j);
    // collectable
    game->collectables = mlx_xpm_file_to_image(game->mlx_pointer, "image/collectables", &i, &j);
}

void    adding_in_graphics(game_complete *game)
{
    int height;
    int width;

    game->collectables = 0;
    height = 0;
    while (height < game->height_map)
    {
        width = 0;
        while (game->map[height][width])
        {
            if (game->map[height][width] == '1')
                mlx_put_image_to_window(game->mlx_pointer, game->window_pointer, game->wall, width * 40, height * 40);
            if (game->map[height][width] == 'C')
                place_collectable(game, height, width);
            if (game->map[height][width] == "P")
                place_player(game, height, width);
            if (game->map[height][width] == 'E')
                mlx_put_image_to_window(game->mlx_pointer, game->window_pointer, game->exit, width * 40, height * 40);
            if (game->map[height][width] == '0')
                mlx_put_image_to_window(game->window_pointer, game->window_pointer, game->floor, width * 40, height * 40);
            width++;
        }
        height++;
    }
}

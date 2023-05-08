#include "so_long.h"

static void	*ft_memset(void *b, int c, size_t length)
{
	unsigned char	*p;

	p = (unsigned char *)b;
	while (length--)
		*p++ = (unsigned char)c;
	return (b);
}

// method to determine when to exit 
int exit_point(game_complete *game)
{
    int rule;

    rule = 0;
    if (game->window_pointer)
    {
        mlx_destroy_window(game->mlx_pointer, game->window_pointer); // destroy mlx pointer and game window 
    }
    free(game->mlx_pointer); // free the mlx_pointer to avoid seg fault
    while (line < game->height_map - 1)
    {
        free(game->map[rule++]);
    }
    free(game->map); // free game map
    exit(0);
}

int main(int argc, char **argv)
{
    game_complete   game;

    if (argc !=2)   // not enought arguemnts i.e. no map selected, exit
    {
        return (0);
    }
    // initalising the game
    ft_memset(&game, 0, sizeof(game_complete));
    map_reading(&game, argv);
    error_check(&game);
    
    game.mlx_pointer = mlx_init();
    game.window_pointer = mlx_new_window(game.mlx_pointer, (game.width_map * 40), (game.height_map * 40), "so_long");
    place_images_in_game(&game);
    adding_in_graphics(&game);
    mlx_key_hook(game.window_pointer, 17, 0, (void *)exit, 0);
    mlx_loop(game.mlx_pointer);   
}
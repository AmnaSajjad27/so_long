
#include "../../main.h"

int	quit_game(t_env *env)
{
	printf("The game have been exited ! \n");
	mlx_destroy_window(env->mlx, env->win);
	env->win = NULL;
	return (EXIT_SUCCESS);
}

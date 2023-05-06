#include "../../main.h"

void	quit_app(t_env *env, const char *message, int code)
{
	printf("Error\n%s\n", message);
	free_env(env);
	exit(code);
}

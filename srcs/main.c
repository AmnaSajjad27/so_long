
#include "../main.h"

int	main(int argc, char const *argv[])
{
	t_env	env;

	ft_bzero(&env, sizeof(t_env));
	args_parse(&env, argc, argv);
	start_so_long(&env);
	return (0);
}

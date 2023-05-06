
#include "../../main.h"

int	run_up(t_env *env)
{
	env->try_to_run_dir.y -= QUOTIENT_MOVE;
	return (actually_run(env));
}

int	run_down(t_env *env)
{
	env->try_to_run_dir.y += QUOTIENT_MOVE;
	return (actually_run(env));
}

int	run_right(t_env *env)
{
	env->try_to_run_dir.x += QUOTIENT_MOVE;
	return (actually_run(env));
}

int	run_left(t_env *env)
{
	env->try_to_run_dir.x -= QUOTIENT_MOVE;
	return (actually_run(env));
}

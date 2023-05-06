
#include "../../main.h"
#include "get_next_line.h"

void	free_array(char **splitted)
{
	int	i;

	i = 0;
	while (splitted[i] != NULL)
	{
		free(splitted[i]);
		splitted[i] = NULL;
		i++;
	}
	free(splitted);
}

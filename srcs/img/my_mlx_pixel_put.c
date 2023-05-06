
#include "../../main.h"

void	my_mlx_pixel_put(t_data *data, int x, int y, int32_t color)
{
	char	*dst;

	dst = data->addr + (y * data->line_length + x * (data->bits_per_pixel
				/ BYTES_SIZE));
	*(int32_t *)dst = color;
}

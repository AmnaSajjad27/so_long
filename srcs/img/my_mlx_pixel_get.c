
#include "../../main.h"

int32_t	my_mlx_pixel_get(t_data *datas, t_coordinates coos)
{
	return (*(int32_t *)(datas->addr + (coos.y * datas->line_length + coos.x
			* (datas->bits_per_pixel / BYTES_SIZE))));
}

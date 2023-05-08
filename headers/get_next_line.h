#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include "get_next_line.h"
# include "../minilibx/mlx.h"

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 5
# endif

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strdup(const char *s1);
char	*get_next_line(int fd);
size_t	ft_strlen(const char *c);
char	*ft_strchr(const char *s, int c);

#endif
#include "ft_printf.h"

int	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	if (s == NULL)
		return (0);
	while (s[i] != 0)
		i++;
	return (i);
}

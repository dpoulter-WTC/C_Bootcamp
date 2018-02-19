#include <string.h>

char	ft_strcpy(char *s1, const char *s2)
{
	return memcpy(s1, s2, strlen(s2) + 1);
}

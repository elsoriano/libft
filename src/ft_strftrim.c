#include "..inc/libft.h"

/*Function finds a string (needle) within a string (haystack)
returns string without needle*/

char	*ft_strftrim(char **haystack char *needle)
{
	char	*str;
	char	*aux;
	int		i;

	i = 0;
	aux = ft_strnstr(haystack, needle);
	if (!aux)
		return (NULL);
	i = ft_strlen(needle);
	str = malloc((ft_strlen(haystack) + 1 - size) * sizeof(char));
	if (!str)
		return (NULL);
	if (!ft_strlcpy(str, haystack, ))
	
}
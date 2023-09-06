/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 10:11:53 by aaires-b          #+#    #+#             */
/*   Updated: 2023/09/06 10:15:21 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char			*new_dest; 
	char			*new_src;
	unsigned int	i;

	new_dest = (char *) dest;
	new_src = (char *) src;
	if (dest == NULL && src == NULL)
		return (NULL);
	i = n;
	if (new_dest > new_src)
	{
		while (i > 0)
		{
			i--;
			new_dest[i] = new_src[i];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (new_dest);
}

/*int main()
{
	char src[] = "olaaaaaaa";

	ft_memmove(src + 2, src, strlen(src) + 1);
	printf("%s", src);
}*/
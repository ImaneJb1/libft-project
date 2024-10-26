/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoubair <ijoubair@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:11:08 by ijoubair          #+#    #+#             */
/*   Updated: 2024/10/25 11:11:11 by ijoubair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
void	*ft_memset(void	*b, int	c, size_t	len)
{
	int	i;
	unsigned char *str;

	str = b;
	i = 0;
	while (i < len - 1)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	str[i] = '\0';
	return(str);
}
/*#include <stdio.h>
int	main()
{
	char	str[10];
	printf("%s", ft_memset(str, 48, 10));

}
*/

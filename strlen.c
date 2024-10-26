/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ijoubair <ijoubair@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:08:11 by ijoubair          #+#    #+#             */
/*   Updated: 2024/10/26 13:36:40 by ijoubair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(char	*str)
{
	size_t		len;
	int			i;

	i = 0;
	len = 0;
	while (str[i])
	{
		len++;
		i++;
	}
	return (len);
}

/*#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%ld", ft_strlen(argv[1]));
	}
	return (0);
}
*/

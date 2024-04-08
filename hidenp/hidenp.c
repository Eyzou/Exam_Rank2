/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hodenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 13:40:00 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/08 13:40:02 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
	int i = 0;
	int j = 0;
	
	if(argc == 3)
	{
		while(argv[2][j] && argv[1][i])
		{
			if(argv[2][j] == argv[1][i])
				i++;
			j++;
		}
		if(argv[1][i] == '\0')
			write(1,"1",1);
		else
			write(1,"0",1);
	}
	write(1,"\n",1);
}
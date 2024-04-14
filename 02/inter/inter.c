/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elo <elo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 11:01:53 by elo               #+#    #+#             */
/*   Updated: 2024/04/14 11:21:52 by elo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
	int i = 0;
	int j = 0;
	int lookup[256] = {};
	
	if(argc == 3)
	{
		while(argv[1][i])
		{
			j = 0;
			while(argv[2][j])
			{

				if(argv[1][i] == argv[2][j] && !lookup[(int)argv[2][j]])
				{
					lookup[(int)argv[2][j]] = 1;
					write(1,&argv[2][j],1);
				}
				j++;
			}
		i++;
		}
	}
	write(1,"\n",1);
}
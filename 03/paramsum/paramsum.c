/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:24:34 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/15 16:31:24 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_nbr(int nb)
{
	if(nb > 9)
		put_nbr(nb/10);
	write(1,&"0123456789"[nb % 10],1);

}
int main (int argc, char **argv)
{
	(void)argv;
	if(argc >= 1)
	{
		put_nbr(argc - 1);
	}
	write(1,"\n",1);
}
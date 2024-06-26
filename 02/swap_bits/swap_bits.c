/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 08:59:46 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/10 09:00:52 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


unsigned char swap_bits(unsigned char octet)
{
	return((octet << 4 | octet >> 4));
}

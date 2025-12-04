/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliano <yuliano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 22:35:35 by yuliano           #+#    #+#             */
/*   Updated: 2025/12/04 23:31:31 by yuliano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *horde;
	
	if (N <= 0)
		return (NULL);
	horde = new Zombie[N];

	for(int i = 0; i < N; i++)
		horde[i].set_zombie(name);
	return (horde);
}
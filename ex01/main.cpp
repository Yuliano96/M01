/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliano <yuliano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 23:08:36 by yuliano           #+#    #+#             */
/*   Updated: 2025/12/04 23:48:33 by yuliano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int n = 5;
	Zombie *horde = zombieHorde(n, "zomnbie");
	if (horde == NULL)
		return (1);

	for (int i = 0; i < n; i++)
		horde[i].announce();
		

	delete [] horde;
	return (0);
}
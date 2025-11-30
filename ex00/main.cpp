/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypacileo <ypacileo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 18:52:02 by ypacileo          #+#    #+#             */
/*   Updated: 2025/11/30 19:25:51 by ypacileo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "newZombie.h"


int main()
{
	Zombie *zombie = newZombie("FOOD");

	zombie->announce();

	delete zombie;
	return (0);
}
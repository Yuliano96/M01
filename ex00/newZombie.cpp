/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypacileo <ypacileo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 18:58:53 by ypacileo          #+#    #+#             */
/*   Updated: 2025/11/30 19:15:30 by ypacileo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "newZombie.h"

Zombie *newZombie(std::string name)
{
	Zombie *zombie = new Zombie(name);
	return (zombie);
}
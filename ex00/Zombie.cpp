/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypacileo <ypacileo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 18:35:57 by ypacileo          #+#    #+#             */
/*   Updated: 2025/11/30 18:44:49 by ypacileo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	name = "";
}

Zombie::Zombie(const std::string &_name)
{
	name = _name;
}

void Zombie::announce(void)
{
	std::cout<<name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << name << ": Destroyed "<<std::endl;
}
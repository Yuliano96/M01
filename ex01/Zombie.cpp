/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliano <yuliano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 18:35:57 by ypacileo          #+#    #+#             */
/*   Updated: 2025/12/04 22:59:49 by yuliano          ###   ########.fr       */
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

void Zombie::set_zombie(const std::string &_name)
{
	name = _name;
}

Zombie::~Zombie(void)
{
	std::cout << name << ": Destroyed "<<std::endl;
}
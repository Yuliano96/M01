/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliano <yuliano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 12:14:27 by yuliano           #+#    #+#             */
/*   Updated: 2025/12/06 12:27:24 by yuliano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA()
{
	Weapon w;
	
	name = "";
	weapon = w;
}

HumanA::HumanA(const std::string &_name, Weapon _weapon)
{
	name = _name;
	weapon = _weapon;
}

void HumanA::set_name(const std::string &_name)
{
	name = _name;
}

void HumanA::set_weapon(const Weapon &_weapon)
{
	weapon = _weapon;
}

void HumanA::attack()
{
	std::cout<<name<<"ataca con su"<<weapon<<endl;
}
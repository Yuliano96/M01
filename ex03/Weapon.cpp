/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliano <yuliano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 11:26:34 by yuliano           #+#    #+#             */
/*   Updated: 2025/12/06 12:29:02 by yuliano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	type = "";
}

Weapon::Weapon(const std::string &_type)
{
	type = _type;
}

const std::string& Weapon::getType() const
{
	return (type);
}


void Weapon::setType(const std::string &_type)
{
	type = _type;
}
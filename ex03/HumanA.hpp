/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliano <yuliano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 12:08:13 by yuliano           #+#    #+#             */
/*   Updated: 2025/12/06 12:24:02 by yuliano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:

	std::string name;
	Weapon weapon;
	
	public:
	
	HumanA();
	HumanA(const std::string &_name, Weapon _weapon);
	void set_name(const std::string &_name);
	void set_weapon(const Weapon &_weapon);
	void attack();
};
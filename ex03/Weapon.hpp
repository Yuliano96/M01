/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliano <yuliano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/06 09:54:41 by yuliano           #+#    #+#             */
/*   Updated: 2025/12/06 12:28:49 by yuliano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
	private:
	
	std::string type;
	
	public:
	
	Weapon();
	Weapon(const std::string &_type);
	
	/*
	const antes del tipo → const en el valor retornado.
	const al final del método → método no puede modificar el objeto.
	*/
	const std::string &getType() const;
	void setType(const std::string &_type);
	
};

#endif
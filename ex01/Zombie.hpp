/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliano <yuliano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 16:56:52 by ypacileo          #+#    #+#             */
/*   Updated: 2025/12/05 19:55:46 by yuliano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	private:

	std::string name;
	
	public:

	Zombie();
	Zombie(const std::string &_name);
	void	set_zombie(const std::string &_name);
	void	announce(void);
	~Zombie();
};

Zombie *zombieHorde(int N, std::string name);

#endif
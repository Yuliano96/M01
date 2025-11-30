/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ypacileo <ypacileo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 16:56:52 by ypacileo          #+#    #+#             */
/*   Updated: 2025/11/30 18:20:16 by ypacileo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef Zombie_H
# define Zombie_H

#include <string>

class Zombie
{
	private:
	std::string name;
	
	public:
	Zombie();
	Zombie(const std::string &_name);
	void	announce(void);
	~Zombie();
};

#endif
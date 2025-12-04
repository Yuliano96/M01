/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliano <yuliano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 21:07:06 by yuliano           #+#    #+#             */
/*   Updated: 2025/12/04 21:09:17 by yuliano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "randomChump.h"

void randomChump(std::string name)
{
	Zombie zombie(name);
	zombie.announce();
}
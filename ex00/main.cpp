/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliano <yuliano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 21:25:00 by yuliano           #+#    #+#             */
/*   Updated: 2025/12/04 21:50:53 by yuliano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "newZombie.h"
#include "randomChump.h"

int	main(void)
{
	Zombie	*heapZombie;

	std::cout << "Creamos un zombi en la stack con randomChump():" << std::endl;
	randomChump("StackZombie");
	std::cout << "   -> Este zombi se destruye automáticamente al salir" << std::endl;
	std::cout << "      de la función randomChump()." << std::endl;
	std::cout << std::endl;

	std::cout << "Creamos un zombi en el heap con newZombie():" << std::endl;
	heapZombie = newZombie("HeapZombie");
	heapZombie->announce();
	std::cout << "   -> Este zombi vive más allá de la función que lo creó" << std::endl;
	std::cout << "      y debemos destruirlo manualmente con delete." << std::endl;
	std::cout << std::endl;

	std::cout << "   Llamamos a delete para destruir el zombi del heap:" << std::endl;
	delete heapZombie;
	std::cout << std::endl;

	std::cout << "Fin del programa. Observa cuándo se llama al destructor" << std::endl;
	std::cout << "en cada caso y cómo ayuda a depurar la memoria." << std::endl;
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuliano <yuliano@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 19:58:30 by yuliano           #+#    #+#             */
/*   Updated: 2025/12/05 21:04:46 by yuliano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std:: string &stringREF = str;

	
	//direciones
	std::cout<<"direcciones:"<<std::endl;
	std::cout<<&str<<std::endl;
	std::cout<<stringPTR<<std::endl;
	std::cout<<&stringREF<<std::endl<<std::endl;

	/*
	Nota:
		El puntero guarda la dirección explícitamente.
		La referencia NO guarda la dirección, solo se usa la variable original.
		La referencia no almacena la dirección, se comporta como si fuera la misma variable.
	*/

	//valores
	std::cout<<"valores:"<<std::endl;
	std::cout<<str<<std::endl;
	std::cout<<*stringPTR<<std::endl;
	std::cout<<stringREF<<std::endl;
	return (0);
}
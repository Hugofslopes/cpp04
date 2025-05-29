/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 13:26:30 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/29 09:58:34 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
	Animal* animals[100];
	size_t i = 0; 
	for (; i < 100 ; i++){
		if (i < 50)
		{	
			std::cout << std::endl << i << std::endl;
			animals[i] = new Dog;
		}
		if (i >= 50){
			std::cout << std::endl << i << std::endl;
			animals[i] = new Cat;
		}
	}
	std::cout << std::endl << i << std::endl << std::endl;

	for (i = 0; i < 100 ; i++)
	{
		std::cout << i << "- ";
		animals[i]->makeSound();
	}

	std::cout << std::endl << i << std::endl << std::endl;

	for (i = 0 ; i < 100 ; i++){
		std::cout << std::endl << i << std::endl;
		delete animals[i];
}
}
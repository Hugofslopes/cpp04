/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 13:26:30 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/29 10:11:05 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
	{
		//Animal animals;
		Cat dog;
		std::cout << std::endl;
		Dog cat;
		std::cout << std::endl;

		dog.makeSound();
		std::cout << dog.getType() << std::endl;
		std::cout << std::endl;

		cat.makeSound();
		std::cout << cat.getType() << std::endl;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	WrongCat wcat;
	WrongAnimal wanimal;
	std::cout << std::endl;

	std::cout << wcat.getType() << std::endl;
	wcat.makeSound();
	std::cout << std::endl;

	std::cout << wanimal.getType() << std::endl;
	wanimal.makeSound();
	std::cout << std::endl;

}
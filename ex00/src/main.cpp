/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 13:26:30 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/29 09:50:04 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();

std::cout << std::endl;

std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;

std::cout << std::endl;

i->makeSound();
j->makeSound();
meta->makeSound();

std::cout << std::endl;

delete meta;
std::cout << std::endl;
delete j;
std::cout << std::endl;
delete i;

std::cout << std::endl;

const WrongAnimal* wa = new WrongAnimal();
const WrongAnimal* cat = new WrongCat();

std::cout << std::endl;

wa->makeSound();
cat->makeSound();
std::cout << cat->getType() << std::endl;

std::cout << std::endl;

delete wa;
std::cout << std::endl;
delete cat;

return 0;
}
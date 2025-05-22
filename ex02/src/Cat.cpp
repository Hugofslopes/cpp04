/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 13:16:11 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/22 21:38:36 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() {
    type = "Cat";
    brain = new Brain;
    std::cout << "Cat constructor" << std::endl;
}

Cat::Cat(const Cat &other) : Animal() {
    type = other.type;
    brain = new Brain;
    std::cout << "Cat Copy constructor" << std::endl;
}

Cat& Cat::operator=(const Cat &other) {
    if (this != &other)
        type = other.type;
    std::cout << " Cat Copy assignment operator called" << std::endl;  
    return (*this);
}

Cat::~Cat() {
    delete brain;
    std::cout << "Cat Destructor" << std::endl;
}

void Cat::makeSound() {
    std::cout << "Cat meow!!" << std::endl;
}

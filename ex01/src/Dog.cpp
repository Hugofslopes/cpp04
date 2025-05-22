/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 13:16:22 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/22 20:29:05 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog(){
    type = "Dog";
    brain = new Brain;
    std::cout << "Dog constructor" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(){
    type = other.type;
    brain = new Brain;
    std::cout << "Dog Copy constructor" << std::endl;
}

Dog& Dog::operator=(const Dog &other)
{
    if (this != &other)
        type = other.type;
    std::cout << "Dog Copy assignment operator called" << std::endl;  
    return (*this);
}

Dog::~Dog(){
    delete brain;
    std::cout << "Dog Destructor" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Dog bark!!" << std::endl;
}

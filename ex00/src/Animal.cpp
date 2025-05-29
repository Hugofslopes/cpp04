/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 12:09:53 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/29 09:21:55 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"

Animal::Animal() {
    type = "Animal";
    std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal(const Animal &other) {
    type = other.type;
    std::cout << "Animal copy constructor" << std::endl;
}

Animal& Animal::operator=(const Animal &other) {
    if (this != &other)
        type = other.type;
    std::cout << "Copy assignment operator called" << std::endl;  
    return (*this);
}

Animal::~Animal() {
    std::cout << "Animal Destructor" << std::endl;
}

void Animal::makeSound() const {
    std::cout << "Animal Sound!!" << std::endl;
}

std::string Animal::getType() const {
    return(type);
}
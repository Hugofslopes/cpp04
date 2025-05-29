/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 15:12:15 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/29 09:45:13 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    type = "Wrong Animal";
    std::cout << "WrongAnimal Default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
    type = other.type;
    std::cout << "WrongAnimal Copy constructor" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &other) {
    if (this != &other)
        type = other.type;
    std::cout << "WrongAnimal Copy assignment operator called" << std::endl;  
    return (*this);
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal Destructor" << std::endl;
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal Sound" << std::endl;
}

std::string WrongAnimal::getType() const {
    return(type);
}
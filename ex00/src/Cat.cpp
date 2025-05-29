/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 13:16:11 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/29 09:40:37 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() {
    type = "Cat";
    std::cout << "Cat constructor" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(){
    type = other.type;
    std::cout << "Cat copy constructor" << std::endl;
}

Cat& Cat::operator=(const Cat &other) {
    if (this != &other)
        type = other.type;
    std::cout << "Cat copy assignment operator called" << std::endl;  
    return (*this);
}

Cat::~Cat(){
    std::cout << "Cat Destructor" << std::endl;
}

void Cat::makeSound() const{
    std::cout << "Cat meow!!" << std::endl;
}

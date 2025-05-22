/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 15:12:18 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/22 15:40:14 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"

WrongCat::WrongCat(){
    type = "Wrong Cat";
    std::cout << "WrongCat constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other){
    type = other.type;
    std::cout << "WrongCat Copy constructor" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &other)
{
    if (this != &other)
        type = other.type;
    std::cout << " WrongCat Copy assignment operator called" << std::endl;  
    return (*this);
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat Destructor" << std::endl;
}

void WrongCat::makeSound() const{
    std::cout << "WrongCat meow!!" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 09:56:59 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/23 18:32:13 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

Ice::Ice(){
	type = "ice";
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice& ice) : AMateria(){
	this->type = ice.type;
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice&  Ice::operator=(const Ice& ice){
	if (this != &ice)
		this->type = ice.type;
	std::cout << "Ice copy assigment constructor called" << std::endl;
	return (*this);
}

AMateria* Ice::clone() const {
	return new Ice(*this);
}

void Ice::use(ICharacter& target) const{
	std::cout << "* shoots an ice bolt at " << target.getName() << "*" 
	<< std::endl;
}
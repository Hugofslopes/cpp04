/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 09:56:44 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/23 18:32:18 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

Cure::Cure(){
	type = "cure";
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure& cure) : AMateria(){
	this->type = cure.type;
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure& Cure::operator=(const Cure& cure) {
	if (this != &cure)
		this->type = cure.type;
	std::cout << "Cure copy assignment constructor called" << std::endl;
	return (*this);
}
Cure::~Cure(){
	std::cout << "Cure destructor called" << std::endl;
}

AMateria* Cure::clone() const {
	return new Cure(*this);
}

void Cure::use(ICharacter& target) const{
	std::cout << "* heals " << target.getName() << "’s wounds *" 
	<< std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 09:56:44 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/23 10:23:44 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

Cure::Cure(){
	type = "cure";
}

Cure::Cure(const Cure& cure){
	this->type = cure.type;
}

Cure&  Cure::operator=(const Cure& cure){
	if (this != &cure)
		this->type = cure.type;
	return (*this);
}

AMateria* Cure::clone() const {
	return new Cure(*this);
}

void Cure::use(ICharacter& target) const{
	std::cout << "Ice: * shoots an ice bolt at" << target.getName() << "*";
}
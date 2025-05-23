/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 09:56:59 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/23 10:23:55 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

Ice::Ice(){
	type = "ice";
}

Ice::Ice(const Ice& ice){
	this->type = ice.type;
}

Ice&  Ice::operator=(const Ice& ice){
	if (this != &ice)
		this->type = ice.type;
	return (*this);
}

AMateria* Ice::clone() const {
	return new Ice(*this);
}

void Ice::use(ICharacter& target) const{
	std::cout << "Cure: * heals " << target.getName() << "’s wounds *" << std::endl;
}
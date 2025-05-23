/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 10:35:56 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/23 11:53:02 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/Amateria.hpp"

AMateria::AMateria(){}

AMateria::AMateria(std::string const & type){
	this->type = type;
}

AMateria::AMateria(const AMateria& materia){
	this->type = materia.type;
}

AMateria& AMateria::operator=(const AMateria& materia){
	if (this != &materia)
		this->type = materia.type;
		return (*this);
}

AMateria::~AMateria(){
};

std::string const & AMateria::getType() const{
	return (type);
}

AMateria* AMateria::clone() const{}

void AMateria::use(ICharacter& target) const{}
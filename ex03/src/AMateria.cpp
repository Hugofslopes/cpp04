/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 10:35:56 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/23 15:39:19 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/AMateria.hpp"

AMateria::AMateria(){
	std::cout << "Amateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const & type){
	this->type = type;
	std::cout << "Amateria parametrized constructor called" << std::endl;
}

AMateria::AMateria(const AMateria& materia){
	this->type = materia.type;
	std::cout << "Amateria copy constructor called" << std::endl;
}

AMateria& AMateria::operator=(const AMateria& materia){
	if (this != &materia)
		this->type = materia.type;
	std::cout << "Amateria copy assignment constructor called" << std::endl;
	return (*this);
}

AMateria::~AMateria(){
	std::cout << "Amateria destructor called" << std::endl;
};

std::string const & AMateria::getType() const{
	return (type);
}

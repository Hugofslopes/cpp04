/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 21:46:20 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/22 21:50:03 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Amateria.hpp"

AMateria::AMateria(){}

AMateria::AMateria(std::string const & type){}

AMateria::AMateria(const AMateria& materia){}

std::string const & AMateria::getType() const{
	return (type);
}

AMateria* AMateria::clone() const{}

void AMateria::use(ICharacter& target){}
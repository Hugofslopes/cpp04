/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 15:42:37 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/23 16:06:07 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource(){
	std::cout << "Materia default constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource & other) : IMateriaSource(){
	std::cout << "Materia copy constructor called" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource & other){
	std::cout << "Materia copy asignment operator constructor called" 
	<< std::endl;
}

MateriaSource::~MateriaSource(){
	std::cout << "Materia desstructor called" << std::endl;
}
		
void MateriaSource::learnMateria(AMateria*){
	
}


AMateria* MateriaSource::createMateria(std::string const & type){
	AMateria &temp = new type();
	
	return (&temp);
}
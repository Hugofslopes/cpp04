/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 15:42:37 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/23 19:01:15 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/MateriaSource.hpp"
# include "../includes/Cure.hpp"
# include "../includes/Ice.hpp"

MateriaSource::MateriaSource(){
	std::cout << "Materia default constructor called" << std::endl;
	for (size_t i =0 ; i <4 ; i++ )
		materias[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource & other) : IMateriaSource(){
	std::cout << "Materia copy constructor called" << std::endl;
	for(size_t i = 0; i < 4; i++)
			if (materias[i] != NULL)
				delete materias[i];
	for (size_t i =0 ; i <4 ; i++ )
		materias[i] = other.materias[i];
}

MateriaSource& MateriaSource::operator=(const MateriaSource &other){
	if (this != &other)
	{
		for(size_t i = 0; i < 4; i++)
			if (materias[i] != NULL)
				delete materias[i];
		for (size_t i =0 ; i <4 ; i++ )
			materias[i] = other.materias[i];
	}
	return (*this);
	std::cout << "Materia copy asignment operator constructor called" 
	<< std::endl;
}

MateriaSource::~MateriaSource(){
	for (size_t i = 0; i < 4; i++)
		if (materias[i] != NULL)
			delete materias[i];
	std::cout << "Materia desstructor called" << std::endl;
}
		
void MateriaSource::learnMateria(AMateria* materia){
	size_t i = 0;
	for (; i < 4 && materias[i] != NULL ; i++ )
	;
	if (i == 3 && materias[i] != NULL)
		std::cerr << "Materia Source is full" << std::endl;
	else
		materias[i] = materia;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (size_t i = 0; i < 4; i++) {
		if (materias[i] != NULL && materias[i]->getType() == type) {
			return materias[i]->clone();
		}
	}
	return (NULL); 
}
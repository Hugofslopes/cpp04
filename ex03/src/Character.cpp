/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 10:40:38 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/23 15:25:56 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Character.hpp"

Character::Character(std::string const name) {
	this->name = name;
	for(size_t i = 0; i < 4; i++)
		materias[i] = NULL;
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(const Character& other) : ICharacter() {
	this->name = other.name;
	for(size_t i = 0; i < 4; i++)
		materias[i] = other.materias[i];
	std::cout << "Character copy constructor called" << std::endl;
}

Character& Character::operator=(const Character& other) {
	if (this != &other){
		this->name = other.name;
		for(size_t i = 0; i < 4; i++)
			materias[i] = other.materias[i];
	}
	std::cout << "Character copy assignment constructor called" << std::endl;
	return (*this);
}

Character::~Character() {
	std::cout << "Character destructor called" << std::endl;
}

std::string const & Character::getName() const {
	return (name);
}

void Character::equip(AMateria* m) {
	size_t i = 0;
	for (; i < 4 ; i++)
		if (materias[i] == NULL)
			break;
	if ( i == 3 && materias[i] == NULL){
		std::cerr << "The Character inventory is full" << std::endl;
		return ;
	}
	materias[i] = m;
	std::cout << name << " has equiped " << m->getType() << std::endl;
}

void Character::unequip(int idx) {
	if (idx < 0 || idx > 3 || materias[idx] == NULL){
		std::cerr << "Not a valid index" << std::endl;
		return ;
	}
	else 
		materias[idx] = NULL;
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx >= 4 || !materias[idx]){
		std::cerr << "Not a valid index" << std::endl;
		return;
	}
	this->materias[idx]->use(target);
}


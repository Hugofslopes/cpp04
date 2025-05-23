/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Chracter.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 10:40:38 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/23 11:46:53 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../includes/Character.hpp"

Character::Character(std::string const name) {
	this->name = name;
	for(size_t i = 0; i < 4; i++)
		materias[i] = NULL;
	value = 0;
}

Character::~Character() {}

std::string const & Character::getName() const {
	return (name);
}

void Character::equip(AMateria* m) {
	if (value > 3) {
		std::cerr << "The Character inventory is full" << std::endl;
		return ;
	}
	materias[value] = m;
	value++;
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
	if (idx < 0 || idx >= 0|| !materias[idx])
		return;
	this->materias[idx]->use(target);
}

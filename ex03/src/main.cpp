/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 11:48:14 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/23 19:08:29 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"
#include "../includes/Ice.hpp"
#include "../includes/Cure.hpp"
#include "../includes/MateriaSource.hpp"
#include <iomanip>

int main()
{
	{
		Character boby("boby");
		Character ze("ze");
		AMateria *ice =  new Ice();
		boby.equip(ice);
		boby.use(0,ze);
	}
	std::cout << std::endl;
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		std::cout << std::endl;
		delete bob;
		delete me;
		delete src;
	}
		std::cout << std::endl;
	{
		MateriaSource source;
		source.learnMateria(new Cure());
		source.learnMateria(new Ice());
		AMateria* m1 = source.createMateria("cure");
		AMateria* m2 = source.createMateria("ice");
		AMateria* m3 = source.createMateria("fire");
		std::cout << std::endl;
		if (m1) std::cout << "Created a materia of type: " << m1->getType() << std::endl;
		if (m2) std::cout << "Created a materia of type: " << m2->getType() << std::endl;
		if (m3 == NULL) std::cout << "Failed to create unknown materia type 'fire'." << std::endl;
		std::cout << std::endl;
		delete m1;
		delete m2;
		delete m3;
	}
}
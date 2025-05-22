/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 20:01:07 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/22 20:28:58 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain(){
	std::cout << "Brain constructor" << std::endl;
}

Brain::Brain(const Brain &other){
	for (size_t i = 0; i < 100; ++i)
        ideas[i] = other.ideas[i];
	std::cout << "Brain copy constructor" << std::endl;
}	

Brain& Brain::operator=(const Brain &other){
	if (this != &other)
		for (size_t i = 0; i < 100; ++i)
			ideas[i] = other.ideas[i];
    std::cout << "Brain copy assignment operator" << std::endl;
    return (*this);
}

Brain::~Brain(){
	std::cout << "Brain destructor" << std::endl;
}
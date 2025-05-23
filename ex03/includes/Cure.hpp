/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 09:50:29 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/23 10:23:05 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>
# include "ICharacter.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(const Cure& cure);
		Cure&  operator=(const Cure& cure);

		AMateria* clone() const;
		void use(ICharacter& target) const;
	
	private:
		ICharacter *iCharacter;
};
#endif
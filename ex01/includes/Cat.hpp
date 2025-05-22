/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 13:13:24 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/22 20:20:42 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
    public:
        Cat();
        Cat(const Cat &other);
        Cat& operator=(const Cat &other);
        ~Cat();

        void makeSound() const;
    
    private:
        Brain *brain;

};
#endif
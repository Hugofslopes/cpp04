/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfilipe- <hfilipe-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 20:01:23 by hfilipe-          #+#    #+#             */
/*   Updated: 2025/05/22 20:16:44 by hfilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain{
	public:
		Brain();
		Brain(const Brain &other);
		Brain& operator=(const Brain &other);
		~Brain();

	private:
		std::string ideas[100];
};
#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chukim <chukim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:51:21 by chukim            #+#    #+#             */
/*   Updated: 2022/10/26 14:40:09 by chukim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
		std::string	type;
		Brain		*brain;

	public:
		Cat();
		~Cat();
		Cat(Cat & ref);
		Cat & operator=(const Cat & rhs);
		void makeSound() const;
		std::string getType(void) const;
		Brain *getBrain(void) const;
};

#endif
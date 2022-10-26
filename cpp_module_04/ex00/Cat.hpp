/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chukim <chukim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:49:58 by chukim            #+#    #+#             */
/*   Updated: 2022/10/26 13:49:59 by chukim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
	private:
		std::string	type;

	public:
		Cat();
		~Cat();
		Cat(const Cat & ref);
		Cat & operator=(const Cat & rhs);
		void makeSound() const;
		std::string getType(void) const;
};

#endif
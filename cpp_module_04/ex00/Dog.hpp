/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chukim <chukim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:50:09 by chukim            #+#    #+#             */
/*   Updated: 2022/10/26 13:50:09 by chukim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
	private:
		std::string	type;

	public:
		Dog();
		~Dog();
		Dog(const Dog & ref);
		Dog & operator=(const Dog & rhs);
		void makeSound() const;
		std::string getType(void) const;
};

#endif
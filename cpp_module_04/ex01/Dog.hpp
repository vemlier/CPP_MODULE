/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chukim <chukim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:51:29 by chukim            #+#    #+#             */
/*   Updated: 2022/10/26 14:14:21 by chukim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	private:
		std::string	type;
		Brain		*brain;

	public:
		Dog();
		~Dog();
		Dog(Dog & ref);
		Dog & operator=(const Dog & rhs);
		void makeSound() const;
		std::string getType(void) const;
		Brain *getBrain(void) const;
		void compareTo(const Dog & other_dog) const;
};

#endif
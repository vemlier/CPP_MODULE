/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chukim <chukim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:52:34 by chukim            #+#    #+#             */
/*   Updated: 2022/10/26 14:26:09 by chukim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal
{
	private:
		std::string	type;
		Brain		*brain;

	public:
		Dog();
		~Dog();
		Dog(const Dog & ref);
		Dog & operator=(const Dog & rhs);
		void makeSound() const;
		std::string getType(void) const;
		Brain *getBrain(void) const;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chukim <chukim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:49:48 by chukim            #+#    #+#             */
/*   Updated: 2022/10/26 13:49:49 by chukim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	protected:
		std::string	type;

	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal & ref);
		Animal & operator=(const Animal & rhs);

		virtual std::string getType(void) const;
		virtual void makeSound() const;
};

#endif
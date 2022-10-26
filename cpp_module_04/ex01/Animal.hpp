/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chukim <chukim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:51:01 by chukim            #+#    #+#             */
/*   Updated: 2022/10/26 13:56:28 by chukim           ###   ########.fr       */
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
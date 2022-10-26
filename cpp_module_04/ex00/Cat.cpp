/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chukim <chukim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:49:53 by chukim            #+#    #+#             */
/*   Updated: 2022/10/26 13:49:54 by chukim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "A cat was constructed\n";
}

Cat::~Cat()
{
	std::cout << "A cat was destroyed\n";
}

Cat::Cat(const Cat & ref)
{
	this->type = ref.getType();
	std::cout << "A cat was constructed from copy\n";
}

Cat & Cat::operator=(Cat const & rhs)
{
	this->type = rhs.type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow meow\n";
}

std::string Cat::getType(void) const
{
	return (this->type);
}
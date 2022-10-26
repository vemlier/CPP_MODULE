/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chukim <chukim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:51:16 by chukim            #+#    #+#             */
/*   Updated: 2022/10/26 14:40:16 by chukim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain;
	std::cout << "A cat was constructed, with its new brain\n";
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "A cat was destroyed, his brain deleted\n";
}

Cat::Cat(Cat & ref)
{
	this->type = ref.getType();
	this->brain = new Brain(*(ref.getBrain()));
	std::cout << "A cat was constructed from copy, but has a brain on its own\n";
}

Cat & Cat::operator=(const Cat & rhs)
{
	this->type = rhs.type;
	if (this->brain)
		delete (this->brain);
	this->brain = new Brain(*(rhs.getBrain()));
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

Brain *Cat::getBrain(void) const
{
	return (this->brain);
}

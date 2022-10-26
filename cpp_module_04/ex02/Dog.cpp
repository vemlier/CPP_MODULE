/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chukim <chukim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:52:29 by chukim            #+#    #+#             */
/*   Updated: 2022/10/26 14:26:04 by chukim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain;
	std::cout << "A dog was constructed with its brain\n";
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "A dog was destroyed, its brain too\n";
}

Dog::Dog(const Dog & ref)
{
	std::cout << "Creating a copy dog brain\n";
	this->brain = new Brain(*(ref.getBrain()));
	this->type = ref.getType();
	std::cout << "A dog was constructed from a dog copy, but has a brain on its own\n";
}

Dog & Dog::operator=(const Dog & rhs)
{
	if (this->brain)
		delete (this->brain);
	this->brain = new Brain;
	this->type = rhs.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Wal Wal\n";
}

std::string Dog::getType(void) const
{
	return (this->type);
}

Brain *Dog::getBrain(void) const
{
	return (this->brain);
}

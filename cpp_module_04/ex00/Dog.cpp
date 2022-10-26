/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chukim <chukim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:50:04 by chukim            #+#    #+#             */
/*   Updated: 2022/10/26 13:50:05 by chukim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "A dog was constructed\n";
}

Dog::~Dog()
{
	std::cout << "A dog was destroyed\n";
}

Dog::Dog(const Dog & ref)
{
	this->type = ref.getType();
	std::cout << "A dog was constructed from copy\n";
}

Dog & Dog::operator=(Dog const & rhs)
{
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chukim <chukim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:51:35 by chukim            #+#    #+#             */
/*   Updated: 2022/10/26 13:51:35 by chukim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main( void )
{
	// Exercice example
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	std::cout << std::endl;

	delete dog;
	delete cat;
	std::cout << std::endl;

	// Array of animals
	const Animal	*(animal_array[4]);
	std::cout << std::endl;

	// Half filled with dogs
	for (int i = 0; i < 2; i++)
		animal_array[i] = new Dog();
	std::cout << std::endl;

	// Half filled with cats
	for (int i = 2; i < 4; i++)
		animal_array[i] = new Cat();
	std::cout << std::endl;

	// delete animals
	for (int i = 0; i < 4; i++)
		delete animal_array[i];
	std::cout << std::endl;

	system("leaks ex01");

	return 0;
}

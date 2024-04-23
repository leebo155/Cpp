/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bohlee <bohlee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 15:27:33 by bohlee            #+#    #+#             */
/*   Updated: 2023/12/24 11:41:08 by bohlee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "+ Cat default constructor called." << std::endl;	
	this->type = "Cat";
}

Cat::Cat(const Cat &target): Animal(target)
{
	std::cout << "+ Cat copy constructor called." << std::endl;	
	this->type = "Cat";
	*this = target;
}

Cat &Cat::operator= (const Cat &target)
{
	std::cout << "+ Cat copy assignment constructor called." << std::endl;	
	if(this != &target)
		this->type = target.getType();
	return *this;
}

Cat::~Cat(void)
{
	std::cout << "- Cat destructor called." << std::endl;	
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow~ meooow~ meeoow!" << std::endl;
}

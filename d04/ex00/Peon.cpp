/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 18:22:34 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/26 22:13:28 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void) {
    return ;
}

Peon::Peon(std::string name) : Victim(name) {
    std::cout << "Zog zog." << std::endl;
    return ;
}

Peon::Peon(Peon const &src) {
	*this = src;
	return;
}

Peon::~Peon(void) {
	std::cout << "Bleuark..." << std::endl;
	return ;
}

Peon &Peon::operator=(Peon const &rhs) {
	this->_name = rhs.getName();
	return *this;
}

void Peon::getPolymorphed(void) const {
	std::cout << this->_name << " has been turned into a pink pony !" << std::endl;
}
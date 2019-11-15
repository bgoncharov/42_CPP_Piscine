/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 17:34:20 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/25 18:32:10 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void) {
    return ;
}

Victim::Victim(std::string name) : _name(name) {
    std::cout << "Some random victim called " << name;
    std::cout << " just popped !" << std::endl;
    return ;
}

Victim::Victim(Victim const &src) {
    *this = src;
    return ;
}

Victim::~Victim(void) {
    std::cout << "Victim " << this->_name << " died for no apparent reason" << std::endl;
    return ;
}

Victim &Victim::operator=(Victim const &rhs) {
    this->_name = rhs.getName();
    return *this;
}

std::ostream &operator<<(std::ostream &o, Victim const &rhs) {
    o << "I'm " << rhs.getName() << " and I like otters !" << std::endl;
	return o;
}
    
std::string	Victim::getName(void) const {
	return this->_name;
}

void Victim::setName(std::string name) {
	this->_name = name;
}

void Victim::getPolymorphed(void) const {
	std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
}
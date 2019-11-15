/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 17:01:39 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/25 18:33:33 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void) {
    return ;
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title) {
    std::cout << name << ", " << title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &src) {
    *this = src;
    return ;
}

Sorcerer::~Sorcerer(void) {
    std::cout << this->_name << ", " << this->_title << ", is dead. ";
    std::cout << "Consequences will never be the same !" << std::endl;
    return ;
}

Sorcerer &Sorcerer::operator=(Sorcerer const &rhs) {
    this->_name = rhs.getName();
    this->_title = rhs.getTitle();
    return *this;
}

std::ostream &operator<<(std::ostream &o, Sorcerer const & rhs) {
    o << "I am " << rhs.getName() << ", " << rhs.getTitle();
    o << ", and I like ponies !" << std::endl;
    return o;
}

std::string	Sorcerer::getName(void) const {
	return this->_name;
}
void Sorcerer::setName(std::string name) {
	this->_name = name;
}

std::string	Sorcerer::getTitle(void) const {
	return this->_title;
}
void Sorcerer::setTitle(std::string title) {
	this->_title = title;
}

void Sorcerer ::polymorph(Victim const &victim) const {
    victim.getPolymorphed();
}
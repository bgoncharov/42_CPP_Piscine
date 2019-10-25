/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 11:11:18 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/24 19:51:14 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _val(0) {
	std::cout << "Default constructor called" << std::endl;
	return ; 
}

Fixed::Fixed(Fixed const &src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed::Fixed(const int val) {
	std::cout << "Int constructor called" << std::endl;
	this->_val = (val << this->_nFractionalBits);
	return ;
}

Fixed::Fixed(const float val) {
	std::cout << "Float constructor called" << std::endl;
	this->_val = (roundf(val * (1 << this->_nFractionalBits)));
	return ;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed &Fixed::operator=(Fixed const &rhs) {
	std::cout << "Assignation operator called" << std::endl;
	this->_val = rhs.getRawBits();
	return *this;
}

int Fixed::getRawBits(void) const {
	return this->_val;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_val = raw;
	return ;
}

float Fixed::toFloat(void) const {
	return ((float)this->_val / (1 << this->_nFractionalBits));
}

int Fixed::toInt(void) const {
	return (this->_val >> this->_nFractionalBits);
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs) {
	o << rhs.toFloat();
	return o;
}

const int Fixed::_nFractionalBits = 8;
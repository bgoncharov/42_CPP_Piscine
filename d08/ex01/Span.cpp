/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/01 11:48:35 by bogoncha          #+#    #+#             */
/*   Updated: 2019/11/01 11:48:36 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/* Constructors */
Span::Span(void) {
	return ;
}

Span::Span(unsigned int n) : _n(n) {
	return ;
}

Span::Span(Span const &src) {
	*this = src;
	return ;
}

/* Destructor */
Span::~Span(void) {
	return ;
}

/* Operator */
Span	&Span::operator=(Span const &rhs) {
	this->_n = rhs.getN();
	this->_arr = rhs.getArr();
	return *this;
}

/* other */
void	Span::addNumber(int val) {
	if (this->_arr.size() >= this->_n)
		throw Span::OffLimit();
	this->_arr.push_back(val);
}

int		Span::shortestSpan(void) {
	if (this->_arr.size() <= 1)
		throw Span::NotEnoughEntries();
	std::sort(this->_arr.begin(), this->_arr.end());
	return (this->_arr[1] - this->_arr[0]);
}

int		Span::longestSpan(void) {
	if (this->_arr.size() <= 1)
		throw Span::NotEnoughEntries();
	std::sort(this->_arr.begin(), this->_arr.end());
	return (this->_arr[this->_arr.size() - 1] - this->_arr[0]);
}

/* Getters and Setters */
std::vector<int>	Span::getArr(void) const {
	return this->_arr;
}
void	Span::setArr(std::vector<int> arr) {
	this->_arr = arr;
}
unsigned int	Span::getN(void) const {
	return this->_n;
}
void	Span::setN(unsigned int n) {
	this->_n = n;
}

/* Exceptions */
/* Constructors */
Span::OffLimit::OffLimit(void) {
	return ;
}
Span::OffLimit::OffLimit(Span::OffLimit const &) {
return ;
}
/* Destructor */
Span::OffLimit::~OffLimit(void) throw() {
	return ;
}
/* Operator */
Span::OffLimit	&Span::OffLimit::operator=(Span::OffLimit const &) {
	return *this;
}
/* What override function */
const char *Span::OffLimit::what(void) const throw() {
	return "You are trying more numbers than allowed.";
}

/* Constructors */
Span::NotEnoughEntries::NotEnoughEntries(void) {
	return ;
}
Span::NotEnoughEntries::NotEnoughEntries(Span::NotEnoughEntries const &) {
return ;
}
/* Destructor */
Span::NotEnoughEntries::~NotEnoughEntries(void) throw() {
	return ;
}
/* Operator */
Span::NotEnoughEntries	&Span::NotEnoughEntries::operator=(Span::NotEnoughEntries const &) {
	return *this;
}
/* What override function */
const char *Span::NotEnoughEntries::what(void) const throw() {
	return "There are not enough entries to find a span";
}
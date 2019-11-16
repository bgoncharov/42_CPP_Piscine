/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 14:37:16 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/30 16:38:59 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Converter::Converter(void) {
	return ;
}

Converter::Converter(std::string str) : _str(str) {
	return ;
}

Converter::Converter(Converter const &src) {
	*this = src;
	return ;
}

Converter::~Converter(void) {
	return ;
}

Converter &Converter::operator=(Converter const &rhs) {
	this->_str = rhs.getStr();
	return *this;
}

std::string	Converter::getStr(void) const {
	return this->_str;
}

void Converter::printConversions(void) const {
	int intVal = -1;
	float floatVal;
	double doubleVal;
	bool intPosible = true;
	bool doublePosible = true;

	try {
		doubleVal = std::stod(this->_str);
	} catch (std::exception &) {
		doublePosible = false;
	}
	if (doublePosible) {
		if (doubleVal >= -2147483648 && doubleVal <= 2147483647) {
			intVal = static_cast<int>(doubleVal);
			if (intVal >= 32 && intVal <= 126) {
				std::cout << "char: " << (static_cast<char>(intVal)) << std::endl;
			} else {
				std::cout << "char: Non displayable" << std::endl;
			}
		} else {
			std::cout << "char: impossible" << std::endl;
			intPosible = false;
		}
		if (intPosible) {
			std::cout << "int: " << intVal << std::endl;
		} else {
			std::cout << "int: imposible" << std::endl;
		}
		floatVal = static_cast<float>(doubleVal);
		if (intPosible) {
			if (intVal == floatVal) {
				std::cout << "float: " << floatVal << ".0f" << std::endl;
			} else {
				std::cout << "float: " << floatVal << "f" << std::endl;
			}
		} else {
			std::cout << "float: " << floatVal << "f" << std::endl;
		}
		try {
			if (intPosible) {
				if (doubleVal == intVal) {
					std::cout << "double: " << doubleVal << ".0" << std::endl;
				} else {
					std::cout << "double: " << doubleVal << std::endl;
				}
			} else {
				std::cout << "double: " << doubleVal << std::endl;
			}
		} catch (std::exception &) {
			std::cout << "double: impossible" << std::endl;
		}
	} else {
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
}
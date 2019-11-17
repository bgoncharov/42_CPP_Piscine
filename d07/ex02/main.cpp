/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 18:47:50 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/31 18:50:03 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main(void) {
	Array<int> intArr = Array<int>(10);
	Array<int> emptyArr = Array<int>();
	Array<float> floatArr = Array<float>(5);

	for (unsigned int i = 0; i < intArr.size(); i++) {
		intArr[i] = i;
	}
	float val = 1.1f;
	for (unsigned int i = 0; i < floatArr.size(); i++) {
		floatArr[i] = val;
		val += 1.1;
	}
	
	std::cout << "Trying to get something from the empty arr:" << std::endl;
	try {
		emptyArr[9] = 2;
	} catch (std::exception &e) {
		std::cout << "Trying to access something on empty arr throwed an error" << std::endl;
	}

	std::cout << "Printing integer arr:" << std::endl;
	std::cout << intArr[0];
	for (unsigned int i = 1; i < intArr.size(); i++)
		std::cout << " " << intArr[i];
	std::cout << std::endl;
	std::cout << "Printing float arr:" << std::endl;
	std::cout << floatArr[0];
	for (unsigned int i = 1; i < floatArr.size(); i++)
		std::cout << " " <<  floatArr[i];
	std::cout << std::endl;

}
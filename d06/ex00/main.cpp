/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 14:37:25 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/30 16:38:53 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

int main(int ac, char **av) {
	if (ac == 2) {
		Converter *con = new Converter(av[1]);
		con->printConversions();
		delete con;
	} else {
		std::cout << std::endl;
	}
	return (0);
}
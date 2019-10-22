/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 15:20:38 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/21 15:22:30 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	memoryLeak( void )
{
	std::string*		panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;

	delete panthere;
}

int main(void)
{
    memoryLeak();

    system("leaks -q a.out");
    return (0);
}
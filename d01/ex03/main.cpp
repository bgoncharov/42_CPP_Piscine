/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 17:54:09 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/22 13:53:57 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main(void)
{
    ZombieHorde *zh = new ZombieHorde(7);
    zh->announce();
    delete zh;
    
    //system("leaks -q zombie");
    return (0);
}
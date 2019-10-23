/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 15:03:57 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/23 16:01:21 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheHeap(void)
{
    std::cout << "Pony at the Heap" << std::endl;
    Pony *heapPony = new Pony("Amigo", "black");
    delete heapPony;
}

void ponyOnTheStack(void)
{
    std::cout << "Pony at the Stack" << std::endl;
    Pony stackPony = Pony("Friend", "white");
    return ;
}

int main(void)
{
    ponyOnTheHeap();
    ponyOnTheStack();

    //system("leaks -q pony");
    return (0);
}
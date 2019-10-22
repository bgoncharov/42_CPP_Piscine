/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 16:59:55 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/21 09:01:34 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ph_book.hpp"

int main(void) {
    std::string inp;
    Phonebook pb;

    std::cout << "PHONEBOOK" << std::endl;
    while (1)
    {
        std::cout << "Please insert your command (ADD, SEARCH, EXIT): ";
        std::cin >> inp;
        if(!(inp.compare("SEARCH")))
            pb.search_contact();
        else if (!(inp.compare("ADD")))
            pb.add_contact();
        else if (!(inp.compare("EXIT")))
            break ;
        else
            std::cout << "Put a valid command..." << std::endl;
    }
}
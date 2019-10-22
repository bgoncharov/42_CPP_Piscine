/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 18:34:03 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/21 18:13:05 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ph_book.hpp"

Phonebook::Phonebook(void) {
    this->_nb_contcts = 0;
    return ;
}

Phonebook::~Phonebook(void) {
    return ;
}

void Phonebook::add_contact(void) {
    Contact new_contact;

    if (this->_nb_contcts >= 8)
    {
        std::cout << "List is full :(" << std::endl;
        return ;
    }
    std::cout << "Fill follow fields" << std::endl;
    new_contact.set_first_name();
    new_contact.set_last_name();
    new_contact.set_nickname();
    new_contact.set_login();
    new_contact.set_postal_address();
    new_contact.set_email_address();
    new_contact.set_phone_number();
    new_contact.set_birthday_date();
    new_contact.set_favorite_meal();
    new_contact.set_underwear_color();
    new_contact.set_darkest_secret();
    this->_contacts[this->_nb_contcts] = new_contact;
    this->_nb_contcts += 1;
    std::cout << "Done!" << std::endl;
}

void Phonebook::search_contact(void) const{
    int i;
    std::string inp;

    if (this->_nb_contcts <= 0)
    {
        std::cout << "No cantacts:( Add some!" << std::endl;
        return ;
    }
    std::cout << "List of contatts:" << std::endl;
    i = -1;
    while (++i < this->_nb_contcts)
        this->_contacts[i].print_preview(i);
    std::cout << std::endl << "Put the index: ";
    std::getline(std::cin, inp);
    try {
        
        i = std::stoi(inp);
    } catch (...) {
        std::cout << "Error" << std::endl;
        return ;
    }
    if (i < 0 || i > 7)
        std::cout << "Bad input" << std::endl;
    else
    {
        if (i >= this->_nb_contcts)
        {
            std::cout << "Contact you chose is not added yet, going back to menu" << std::endl;
			return ;
        }
        this->_contacts[i].print_contact();
        std::cout << "Done" << std::endl;
    }
}
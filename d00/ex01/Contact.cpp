/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 17:33:30 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/22 13:15:02 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ph_book.hpp"

Contact::Contact(void) : _first_name(""),
    _last_name(""),
    _nickname(""),
    _login(""),
    _postal_address(""),
    _email_address(""),
    _phone_number(""),
    _birthday_date(""),
    _favorite_meal(""),
    _underwear_color(""),
    _darkest_secret("") {
        return ;
    };

Contact::~Contact(void) {
    return ;
}

std::string Contact::format(std::string str) const{
    size_t len;

    len = str.length();
    if (len >= 10)
        return (str.substr(0, 9) + ".");
    else
    {
        while (len++ < 10)
        {
            str = " " + str;
        }
    }
    return (str);
}

void Contact::print_preview(int index) const{
    std::cout << ":" << this->format(std::to_string(index)) << ":";
    std::cout << ":" << this->format(this->_first_name) << ":";
    std::cout << this->format(this->_last_name) << ":";
	std::cout << this->format(this->_nickname) << ":" << std::endl;
}

void Contact::print_contact(void) const {
    std::cout << "Full contact information" << std::endl;
    std::cout << "First name: " << this->_first_name << std::endl;
    std::cout << "Last name: " << this->_last_name << std::endl;
    std::cout << "Nickname: " << this->_nickname << std::endl;
    std::cout << "Login " << this->_login << std::endl;
    std::cout << "Postall address: " << this->_postal_address << std::endl;
    std::cout << "Email address: " << this->_email_address << std::endl;
    std::cout << "Phone number: " << this->_phone_number << std::endl;
    std::cout << "Birthday date: " << this->_birthday_date << std::endl;
    std::cout << "Favorite meal: " << this->_favorite_meal << std::endl;
    std::cout << "Underwear color: " << this->_underwear_color << std::endl;
    std::cout << "Darkest secret: " << this->_darkest_secret << std::endl;
}

void Contact::set_first_name(void) {
    std::string inp;
    std::cout << "Please insert first name: " << std::endl;
    std::cin >> inp;
    this->_first_name = inp;
}

void Contact::set_last_name(void) {
    std::string inp;
    std::cout << "Please insert last name: " << std::endl;
    std::cin >> inp;
    this->_last_name = inp;
}

void Contact::set_nickname(void) {
    std::string inp;
    std::cout << "Please insert nickname: " << std::endl;
    std::cin >> inp;
    this->_nickname = inp;
}

void Contact::set_login(void) {
    std::string inp;
    std::cout << "Please insert login: " << std::endl;
    std::cin >> inp;
    this->_login = inp;
}

void Contact::set_postal_address(void) {
    std::string inp;
    std::cout << "Please postal address: " << std::endl;
    std::cin >> inp;
    this->_postal_address = inp;
}

void Contact::set_email_address(void) {
    std::string inp;
    std::cout << "Please email address: " << std::endl;
    std::cin >> inp;
    this->_email_address = inp;
}

void Contact::set_phone_number(void) {
    std::string inp;
    std::cout << "Please phone number: " << std::endl;
   std::cin >> inp;
    this->_phone_number = inp;
}

void Contact::set_birthday_date(void) {
    std::string inp;
    std::cout << "Please birthday date: " << std::endl;
    std::cin >> inp;
    this->_birthday_date = inp;
}

void Contact::set_favorite_meal(void) {
    std::string inp;
    std::cout << "Please favorite meal: " << std::endl;
    std::cin >> inp;
    this->_favorite_meal = inp;
}

void Contact::set_underwear_color(void) {
    std::string inp;
    std::cout << "Please underwear color: " << std::endl;
    std::cin >> inp;
    this->_underwear_color = inp;
}

void Contact::set_darkest_secret(void) {
    std::string inp;
    std::cout << "Please darkest secret: " << std::endl;
    std::cin >> inp;
    this->_darkest_secret = inp;
}
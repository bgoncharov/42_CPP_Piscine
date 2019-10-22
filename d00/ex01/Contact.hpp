/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 17:12:48 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/20 17:59:50 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include "ph_book.hpp"

class Contact {

public:
    Contact(void);
    ~Contact(void);

    void print_contact(void) const;
    std::string format(std::string str) const;
    void print_preview(int index) const;

    void set_first_name(void);
    void set_last_name(void);
    void set_nickname(void);
    void set_login(void);
    void set_postal_address(void);
    void set_email_address(void);
    void set_phone_number(void);
    void set_birthday_date(void);
    void set_favorite_meal(void);
    void set_underwear_color(void);
    void set_darkest_secret(void);

private:
    std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _login;
    std::string _postal_address;
    std::string _email_address;
    std::string _phone_number;
    std::string _birthday_date;
    std::string _favorite_meal;
    std::string _underwear_color;
    std::string _darkest_secret;

};

#endif
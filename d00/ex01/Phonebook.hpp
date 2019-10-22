/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 17:09:56 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/20 18:57:21 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "ph_book.hpp"

class Phonebook {

public:
    Phonebook(void);
    ~Phonebook(void);

    void set_contact(Contact contact);
    Contact get_contacts(int n) const;

    void search_contact(void) const;
    void add_contact(void);

private:
    Contact _contacts[8];
    int _nb_contcts;

};

#endif
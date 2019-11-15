/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 16:38:29 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/25 17:54:56 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Sorcerer {

    public:
        Sorcerer(std::string name, std::string title);
        Sorcerer(Sorcerer const &src);
        ~Sorcerer(void);

        Sorcerer &operator=(Sorcerer const &rhs);

        std::string getName(void) const;
        void setName(std::string name);
        std::string getTitle(void) const;
        void setTitle(std::string title);

        void polymorph(Victim const &victim) const;

    protected:
        Sorcerer(void);
        std::string _name;
        std::string _title;
};

std::ostream &operator<<(std::ostream &o, Sorcerer const &rhs);

#endif
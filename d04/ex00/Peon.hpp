/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 17:56:57 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/25 18:12:23 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Peon : public Victim {

    public:
        Peon(std::string name);
        Peon(Peon const &src);
        ~Peon(void);

        Peon &operator=(Peon const &rhs);
        
        virtual void getPolymorphed(void) const;

    protected:
        Peon(void);
};

#endif
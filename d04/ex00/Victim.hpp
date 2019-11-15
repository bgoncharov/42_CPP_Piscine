/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 17:16:01 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/26 22:13:42 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

# include <iostream>
# include <string>

class Victim {

    public:
        Victim(Victim const &src);
        Victim(std::string name);

        virtual ~Victim(void);

        Victim &operator=(Victim const &rhs);

        std::string getName(void) const;
        void setName(std::string name);

        virtual void getPolymorphed(void) const;
    
    protected:
        Victim(void);
        std::string _name;

};

std::ostream &operator<<(std::ostream &o, Victim const &rhs);

#endif
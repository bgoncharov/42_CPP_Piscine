/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 09:09:33 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/25 11:22:39 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <string>
# include <iostream>
# include <ctime>
# include <cstdlib>

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

    public:
        //Constructors and Destructors
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const &src);
        ~ScavTrap(void);

        //Operators overload
        ScavTrap &operator=(ScavTrap const &rhs);

        void challengeNewcomer(void) const;
    
    private:
        ScavTrap(void);

        static std::string const _challenges[];
        static int const _nChallenges;
};

#endif
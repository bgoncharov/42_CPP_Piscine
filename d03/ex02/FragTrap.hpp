/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:44:59 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/25 11:32:34 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <string>
# include <iostream>
# include <ctime>
# include <cstdlib>

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

    public:
        //Constructors and Destructors
        FragTrap(std::string name);
        FragTrap(FragTrap const &src);
        ~FragTrap(void);

        //Operators overload
        FragTrap &operator=(FragTrap const &rhs);

        //Attacks
        void vaulhunter_dot_exe(std::string const &target);
    
    private:
        FragTrap(void);

        static int const _nAttacks;
};

#endif
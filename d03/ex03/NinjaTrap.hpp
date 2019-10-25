/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 11:34:25 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/25 11:56:06 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include <string>
# include <iostream>
# include <ctime>
# include <cstdlib>

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap {

    public:
        NinjaTrap(std::string name);
        NinjaTrap(NinjaTrap const & str);
        ~NinjaTrap(void);

        NinjaTrap &operator=(NinjaTrap const &rhs);

        void ninjaShoebox(FragTrap const &ct) const;
        void ninjaShoebox(NinjaTrap const &ct) const;
        void ninjaShoebox(ScavTrap const &ct) const;

    private:
        NinjaTrap(void);
};

#endif
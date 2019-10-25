/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 13:06:51 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/25 14:59:09 by bogoncha         ###   ########.fr       */
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

class NinjaTrap : public virtual ClapTrap {

public:
	NinjaTrap(std::string name);
	NinjaTrap(NinjaTrap const &src);
	virtual ~NinjaTrap(void);

	NinjaTrap		&operator=(NinjaTrap const &rhs);

	void ninjaShoebox(FragTrap const &ct) const;
	void ninjaShoebox(NinjaTrap const &ct) const;
	void ninjaShoebox(ScavTrap const &ct) const;
	

protected:
	NinjaTrap(void);
};

#endif
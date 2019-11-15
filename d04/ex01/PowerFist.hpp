/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 21:05:10 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/25 21:49:27 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PowerFist : public AWeapon {

    public:
        PowerFist(void);
        PowerFist(PowerFist const &src);

        virtual ~PowerFist(void);

        PowerFist &operator=(PowerFist const &rhs);
        
    protected:
        void attack(void) const;
};

#endif
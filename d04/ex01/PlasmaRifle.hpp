/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 20:59:28 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/25 21:48:37 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {

    public:
        PlasmaRifle(void);
        PlasmaRifle(PlasmaRifle const &src);

        virtual ~PlasmaRifle(void);

        PlasmaRifle &operator=(PlasmaRifle const &rhs);

        void attack(void) const;
};

#endif
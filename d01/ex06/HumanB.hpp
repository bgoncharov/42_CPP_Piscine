/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 13:58:37 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/23 14:42:41 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB {
    public:
        HumanB(std::string name);
        HumanB(std::string bane, Weapon weapon);
        ~HumanB(void);

        void attack(void);
        void setWeapon(Weapon & weapon);

    private:
        Weapon *_weapon;
        std::string _name;
};

#endif
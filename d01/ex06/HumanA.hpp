/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 16:25:11 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/23 14:42:09 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"
# include <string>

class HumanA {

    public:
        HumanA(std::string name, Weapon& type);
        ~HumanA(void);
        
        void attack(void);

    private:
        Weapon& _weapon;
        std::string _name;
};

#endif
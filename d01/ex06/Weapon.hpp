/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 15:54:58 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/23 14:39:55 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

class Weapon {

    public:
        Weapon(std::string type);
        ~Weapon(void);

        const std::string& getType();
        void setType(std::string);

    private:
        std::string _type;
};

#endif
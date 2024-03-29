/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 15:51:54 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/23 16:18:24 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

class ZombieEvent {
public:
    ZombieEvent(void);
    ~ZombieEvent(void);
    void    setZombieType(std::string type);
    Zombie*  newZombie(std::string name) const;
    void    randomChump(void) const;
private:
    std::string _zombieType;
    std::string _name_pool[10];
};
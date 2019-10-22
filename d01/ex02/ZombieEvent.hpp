/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 15:51:54 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/21 16:30:05 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

class ZombieEvent {

    public:
        ZombieEvent(void);
        Zombie* newZombie(std::string name) const;
        ~ZombieEvent(void);

        void setZombieType(std::string);
        void randomChump(void) const;

    private:
        std::string _zombieType;
        std::string _names_pool[10];
};
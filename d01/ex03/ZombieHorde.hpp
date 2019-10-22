/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 17:14:12 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/21 17:53:18 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
# include "Zombie.hpp"

class ZombieHorde {

    public:
        ZombieHorde(int N);
        ~ZombieHorde(void);
        void announce(void);
        Zombie* get_zombies(void) const;
        int get_nb_zombies(void) const;
        void set_zombies(Zombie* zombies);
        void set_nb_zombies(int n);

    private:
        Zombie *_zombies;
        int _nb_zombies;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 21:08:10 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/25 21:45:06 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy {

    public:
        Enemy(int hp, std::string const & type);
        Enemy(Enemy const &src);

        virtual ~Enemy(void);

        Enemy &operator=(Enemy const &rhs);

        std::string virtual getType(void) const;
        void setType(std::string type);
        int getHP(void) const;
        void setHP(int hp);

        virtual void takeDamage(int damage);
    
    protected:
        Enemy(void);
        int _hp;
        std::string _type;

};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 10:23:32 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/25 15:29:25 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <string>
# include <iostream>
# include <ctime>
# include <cstdlib>

class ClapTrap{

    public:
        //Constructors and Destructors
        ClapTrap(int hitPoints, int maxHitPoints,
            int energyPoints, int maxEnergyPoints,
            int level, std::string name, int meleeAttackDamage,
            int rangedAttackDamage, int fartAttackDamage,
            int danceAttackDamage, int peanutButterAttackDamage,
            int bubblesAttackDamage, int ticklesAttackDamage,
            int armorDamageReduction, std::string type);
        ClapTrap(ClapTrap const &src);
        virtual ~ClapTrap(void);

        //Operators overload
        ClapTrap &operator=(ClapTrap const &rhs);

        //Getter and setters
        int getHitPoints(void) const;
        int getMaxHitPoints(void) const;
        int getEnergyPoints(void) const;
        int getMaxEnergyPoints(void) const;
        int getLevel(void) const;
        int getMeleeAttackDamage(void) const;
        int getRangedAttackDamage(void) const;
        int getColtAttackDamage(void) const;
        int getRockAttackDamage(void) const;
        int getGunAttackDamage(void) const;
        int getBoboAttackDamage(void) const;
        int getTicklesAttackDamage(void) const;
        int getArmorDamageReduction(void) const;
        std::string getName(void) const;
        std::string getType(void) const;

        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        //Attacks
        void rangedAttack(std::string const &target) const;
        void meleeAttack(std::string const &target) const;
        void coltAttack(std::string const &target) const;
        void rockAttack(std::string const &target) const;
        void gunAttack(std::string const &target) const;
        void boboAttack(std::string const &target) const;
        void ticklesAttack(std::string const &target) const;

    
    protected:
        ClapTrap(void);
        
        int _hitPoints;
        int _maxHitPoints;
        int _energyPoints;
        int _maxEnergyPoints;
        int _level;
        std::string _name;
        int _meleeAttackDamage;
        int _rangedAttackDamage;
        int _coltAttackDamage;
        int _rockAttackDamage;
        int _gunAttackDamage;
        int _boboAttackDamage;
        int _ticklesAttackDamage;
        int _armorDamageReduction;
        std::string _type;
};

#endif
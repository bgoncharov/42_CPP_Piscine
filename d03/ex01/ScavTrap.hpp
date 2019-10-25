/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 09:09:33 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/25 10:56:48 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <string>
# include <iostream>
# include <ctime>
# include <cstdlib>

class ScavTrap{

    public:
        //Constructors and Destructors
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const &src);
        ~ScavTrap(void);

        //Operators overload
        ScavTrap &operator=(ScavTrap const &rhs);

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

        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        void challengeNewcomer(void) const;

        //Attacks
        void rangedAttack(std::string const &target) const;
        void meleeAttack(std::string const &target) const;
        void coltAttack(std::string const &target) const;
        void rockAttack(std::string const &target) const;
        void gunAttack(std::string const &target) const;
        void boboAttack(std::string const &target) const;
        void ticklesAttack(std::string const &target) const;

    
    private:
        ScavTrap(void);
        
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

        static std::string const _challenges[];
        static int const _nChallenges;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 16:44:59 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/24 19:30:59 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>

class FragTrap{

    public:
        //Constructors and Destructors
        FragTrap(std::string name);
        FragTrap(FragTrap const &src);
        ~FragTrap(void);

        //Operators overload
        FragTrap &operator=(FragTrap const &rhs);

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

        //Attacks
        void vaulhunter_dot_exe(std::string const &target);
        void rangedAttack(std::string const &target) const;
        void meleeAttack(std::string const &target) const;
        void coltAttack(std::string const &target) const;
        void rockAttack(std::string const &target) const;
        void gunAttack(std::string const &target) const;
        void boboAttack(std::string const &target) const;
        void ticklesAttack(std::string const &target) const;

    
    private:
        FragTrap(void);
        
        int _hitPoints;
        int _maxHitPoints;
        int _energyPoints;
        int _maxEnergyPoints;
        int _level;
        int _meleeAttackDamage;
        int _rangedAttackDamage;
        int _coltAttackDamage;
        int _rockAttackDamage;
        int _gunAttackDamage;
        int _boboAttackDamage;
        int _ticklesAttackDamage;
        int _armorDamageReduction;
        std::string _name;

        static int const _nAttacks;
};

#endif
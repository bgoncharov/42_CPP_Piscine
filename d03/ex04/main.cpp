/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/24 13:06:51 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/25 15:43:47 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main(void) {

	std::cout << "FragTrap tests: " << std::endl;

	FragTrap *boris = new FragTrap("Boris");

	for (int i = 0; i < 4; i++)
		boris->takeDamage(35);
	for (int i = 0; i < 3; i++)
		boris->beRepaired(50);
	boris->meleeAttack("Scoko");
	boris->rangedAttack("Alesha");
	for (int i = 0; i < 6; i++)
		boris->vaulthunter_dot_exe("Dima");

	std::cout << std::endl;
    std::cout << "========================" << std::endl;
    std::cout << std::endl;
	
	std::cout << std::endl << "Scavtrap tests: " << std::endl;

	ScavTrap *gustav = new ScavTrap("Gustav");

	for (int i = 0; i < 4; i++)
		gustav->takeDamage(35);
	for (int i = 0; i < 3; i++)
		gustav->beRepaired(50);
	gustav->meleeAttack("Loh");
	gustav->rangedAttack("Egor");
	gustav->coltAttack("Gosha");
	gustav->rockAttack("Jeka");
	gustav->gunAttack("Gogen");
	gustav->boboAttack("Jose");
	gustav->ticklesAttack("Yuh");
	for (int i = 0; i < 6; i++)
		gustav->challengeNewComer();

	std::cout << std::endl;
    std::cout << "========================" << std::endl;
    std::cout << std::endl;

	std::cout << std::endl << "NinjaTrap tests: " << std::endl;

	NinjaTrap *alegop = new NinjaTrap("Alegop");
	NinjaTrap *kuku = new NinjaTrap("Kuku");

	for (int i = 0; i < 4; i++)
		alegop->takeDamage(35);
	for (int i = 0; i < 3; i++)
		alegop->beRepaired(50);
	alegop->meleeAttack("Pepe");
	alegop->rangedAttack("Francisco");
	alegop->coltAttack("Ernesto");
	alegop->rockAttack("Flan");
	alegop->gunAttack("Daniel");
	alegop->boboAttack("Jose");
	alegop->ticklesAttack("Ramiro");
	alegop->ninjaShoebox(*boris);
	alegop->ninjaShoebox(*gustav);
	alegop->ninjaShoebox(*kuku);

	std::cout << std::endl;
    std::cout << "========================" << std::endl;
    std::cout << std::endl;

	std::cout << std::endl << "SuperTrap tests: " << std::endl;

	SuperTrap *bro = new SuperTrap("Rafa");
	
	for (int i = 0; i < 4; i++)
		bro->takeDamage(35);
	for (int i = 0; i < 3; i++)
		bro->beRepaired(50);
	bro->meleeAttack("Pepe");
	bro->rangedAttack("Francisco");
	bro->coltAttack("Ernesto");
	bro->rockAttack("Flan");
	bro->gunAttack("Daniel");
	bro->boboAttack("Jose");
	bro->ticklesAttack("Ramiro");
	bro->ninjaShoebox(*boris);
	bro->ninjaShoebox(*gustav);
	bro->ninjaShoebox(*kuku);
	for (int i = 0; i < 6; i++)
		bro->vaulthunter_dot_exe("Amos");

	delete boris;
	delete gustav;
	delete alegop;
	delete kuku;
	delete bro;

	return (0);
}
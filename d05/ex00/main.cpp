/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bogoncha <bogoncha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 12:47:59 by bogoncha          #+#    #+#             */
/*   Updated: 2019/10/28 16:30:59 by bogoncha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
    Bureaucrat *boris;
    try {
        boris = new Bureaucrat("Boris", 160);
    } catch (Bureaucrat::GradeTooLowException &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        boris = new Bureaucrat("Boris", 50);
        std::cout << *boris << std::endl;
    } catch (Bureaucrat::GradeTooLowException &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        boris->incrementGrade(49);
        std::cout << *boris << std::endl;
        boris->decrementGrade(149);
        std::cout << *boris << std::endl;
        boris->incrementGrade(150);
    } catch (Bureaucrat::GradeTooHighException &e) {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
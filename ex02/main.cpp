/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:50:37 by mpapin            #+#    #+#             */
/*   Updated: 2025/10/28 21:14:45 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    srand(time(NULL));
    
    std::cout << "\n=== TEST SHRUBBERY ===" << std::endl;
    try {
        Bureaucrat bob("Bob", 130);
        ShrubberyCreationForm shrub("home");
        
        bob.signForm(shrub);
        bob.executeForm(shrub);
    } catch (std::exception & e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    
    std::cout << "\n=== TEST ROBOTOMY ===" << std::endl;
    try {
        Bureaucrat alice("Alice", 40);
        RobotomyRequestForm robot("Bender");
        
        alice.signForm(robot);
        alice.executeForm(robot);
        alice.executeForm(robot);  // Test le random 2 fois
    } catch (std::exception & e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    
    std::cout << "\n=== TEST PRESIDENTIAL ===" << std::endl;
    try {
        Bureaucrat president("President", 1);
        PresidentialPardonForm pardon("Arthur");
        
        president.signForm(pardon);
        president.executeForm(pardon);
    } catch (std::exception & e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    
    std::cout << "\n=== TEST ERRORS ===" << std::endl;
    try {
        Bureaucrat intern("Intern", 150);
        ShrubberyCreationForm form("test");
        
        intern.signForm(form);  // Devrait fail
        intern.executeForm(form);
    } catch (std::exception & e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    
    try {
        Bureaucrat lowGrade("LowGrade", 140);
        ShrubberyCreationForm form2("garden");
        
        lowGrade.signForm(form2);  // OK
        lowGrade.executeForm(form2);  // Devrait fail
    } catch (std::exception & e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    
    try {
        Bureaucrat boss("Boss", 1);
        RobotomyRequestForm robot2("Marvin");
        
        boss.executeForm(robot2);  // Pas signé, devrait fail
    } catch (std::exception & e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
    
    return 0;
}
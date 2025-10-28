/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:50:37 by mpapin            #+#    #+#             */
/*   Updated: 2025/10/29 00:14:17 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
    srand(time(NULL));
    
    Bureaucrat bob("Bob", 1);
    
    ShrubberyCreationForm shrub("home");
    RobotomyRequestForm robot("Bender");
    PresidentialPardonForm pardon("Arthur");
    
    std::cout << "shrubbery test" << std::endl;
    bob.signForm(shrub);
    bob.executeForm(shrub);
    
    std::cout << std::endl << "robotomy test" << std::endl;
    bob.signForm(robot);
    bob.executeForm(robot);
    
    std::cout << std::endl << "presidential test" << std::endl;
    bob.signForm(pardon);
    bob.executeForm(pardon);
    
    return 0;
}

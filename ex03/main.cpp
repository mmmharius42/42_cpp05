/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:50:37 by mpapin            #+#    #+#             */
/*   Updated: 2025/10/29 01:11:00 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main() 
{
    srand(time(NULL));
    Intern someRandomIntern;
    AForm* rrf;
    
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    if (rrf) {
        Bureaucrat boss("Boss", 1);
        boss.signForm(*rrf);
        boss.executeForm(*rrf);
        delete rrf;
    }
    std::cout << std::endl;

    rrf = someRandomIntern.makeForm("shrubbery creation", "home");
    if (rrf) {
        Bureaucrat bob("Bob", 100);
        bob.signForm(*rrf);
        bob.executeForm(*rrf);
        delete rrf;
    }
    std::cout << std::endl;
    
    rrf = someRandomIntern.makeForm("presidential pardon", "Arthur");
    if (rrf) {
        Bureaucrat president("President", 1);
        president.signForm(*rrf);
        president.executeForm(*rrf);
        delete rrf;
    }
    rrf = someRandomIntern.makeForm("unknown form", "target");
    return 0;
}

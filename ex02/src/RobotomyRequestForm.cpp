/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 20:45:03 by mpapin            #+#    #+#             */
/*   Updated: 2025/10/29 00:07:35 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& other)
    : AForm(other), _target(other._target) {}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const& other) {
    if (this != &other) {
        AForm::operator=(other);
        _target = other._target;
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void    RobotomyRequestForm::executeActions() const {
    std::cout << "AHHHHHHHHHHHHHHHHH........WOUAAHHHHHAHAHAHAHAHAH" << std::endl;
    if (rand() % 2 == 0) {
        std::cout << this->_target << " has been robotomy successful!" << std::endl; }
    else
        std::cout << this->_target << " robotomy failed!" << std::endl;
}
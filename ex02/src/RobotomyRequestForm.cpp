/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 20:45:03 by mpapin            #+#    #+#             */
/*   Updated: 2025/10/28 20:55:39 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include "RobotomyRequestForm.hpp"

void    RobotomyRequestForm::executeActions() const {
    std::cout << "ashdakjdHADLJHDWUIDHDNBdGHSDYUQWDJASBDJHABXYUQWBD" << std::endl;
    if (rand() % 2 == 0) {
        std::cout << this->_target << "Robotomy successful!\n"; }
    else
        std::cout << this->_target << "Robotomy failed!\n";
}
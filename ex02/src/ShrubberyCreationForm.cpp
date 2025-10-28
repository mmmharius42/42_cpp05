/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 20:08:39 by mpapin            #+#    #+#             */
/*   Updated: 2025/10/28 20:43:46 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

void ShrubberyCreationForm::executeActions() const {
    std::ofstream file(this->_target + "_shrubbery");
    if (!file.is_open())
        throw std::runtime_error("Could not create file");
    file << "   *   ";
    file << "  ***  ";
    file << " ***** ";
    file << "*******";
    file << "   |   ";
    file << "   |   ";
    file << "   |   ";
    file << "   |   ";
    file << "   |   ";
    file << "   |   ";
    file << "   |   ";
    file << "   |   ";
    file << "   |   ";
    file << "   |   ";
    file << "   |   ";
    file << "   |   ";
    file << "   |   ";
    file << "   |   ";
    file << "   |   ";
    file << "   |   ";
    file << "   |   ";
    file << "   |   ";
    file << "   |   ";
    file << "   |   ";
    file << "   |   ";
    file << "   |   ";
    file << "   |   ";
    file << "   |   ";
    file << "   |   ";
    file << "   |   ";
    file << "   |   ";
    file << "   |   ";
    file << "   |   ";
    file << "   |   ";
    file << "   |   ";
    file << "   |   ";
    file << "   |   ";
    file << "   |   ";

    file.close();
}

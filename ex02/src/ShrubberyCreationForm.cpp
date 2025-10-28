/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 20:08:39 by mpapin            #+#    #+#             */
/*   Updated: 2025/10/29 00:10:39 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& other)
    : AForm(other), _target(other._target) {}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const& other) {
    if (this != &other) {
        AForm::operator=(other);
        _target = other._target;
    }
    return *this;
}

void ShrubberyCreationForm::executeActions() const {
    std::string filename = _target + "_shrubbery";
    std::ofstream file(filename.c_str());
    if (!file.is_open())
        throw std::runtime_error("Could not create file");
    file << "   *   \n";
    file << "  ***  \n";
    file << " ***** \n";
    file << "*******\n";
    file << "   |   \n";
    file << "   |   \n";
    file.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}
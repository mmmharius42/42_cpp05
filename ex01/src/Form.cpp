/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:49:13 by mpapin            #+#    #+#             */
/*   Updated: 2025/10/27 18:16:46 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const &name, const int gradeToSigned, const int gradeToExecute) : _name(name) _gradeToSigned(gradeToSigned), _gradeToExecute(gradeToExecute) {
    if (gradeToSigned < 1 || gradeToExecute < 1)
        throw Form::GradeTooHighException();
    if (gradeToSigned > 150 || gradeToExecute > 150)
        throw Form::GradeTooLowException();
}
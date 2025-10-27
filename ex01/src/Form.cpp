/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:49:13 by mpapin            #+#    #+#             */
/*   Updated: 2025/10/27 18:29:26 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const &name, int gradeToSigned, int gradeToExecute) 
    : _name(name), _isSigned(false), _gradeToSigned(gradeToSigned), _gradeToExecute(gradeToExecute) {
    if (gradeToSigned < 1 || gradeToExecute < 1)
        throw Form::GradeTooHighException();
    if (gradeToSigned > 150 || gradeToExecute > 150)
        throw Form::GradeTooLowException();
}

void Form::beSigned(Bureaucrat const &Bureaucrat) {
    if (Bureaucrat.GetGrade() > _gradeToSigned)
        throw Form::GradeTooLowException();
    _isSigned = true;
}

bool Form::getisSigned() const {
    return _isSigned;
}

int Form::getGradeToExecute() const {
    return _gradeToExecute;
}

int Form::getGradeToSigned() const {
    return _gradeToSigned;
}
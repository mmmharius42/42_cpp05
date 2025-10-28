/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:49:13 by mpapin            #+#    #+#             */
/*   Updated: 2025/10/28 19:03:16 by mpapin           ###   ########.fr       */
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

Form::Form(const Form& other) : _name(other._name), _isSigned(other._isSigned),
    _gradeToSigned(other._gradeToSigned), _gradeToExecute(other._gradeToExecute) {}

Form& Form::operator=(const Form& other) {
    if (this != &other) {
        this->_isSigned = other._isSigned;
    }
    return *this;
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

const std::string& Form::getName() const { 
    return _name; 
}

void Form::beSigned(Bureaucrat const &Bureaucrat) {
    if (Bureaucrat.GetGrade() > _gradeToSigned)
        throw Form::GradeTooLowException();
    _isSigned = true;
}

std::ostream& operator<<(std::ostream& os, const Form& form) {
    os << "Form : " << form.getName() << ", grade to sign :" 
    << form.getGradeToSigned() << ", grade to exec :" 
    << form.getGradeToExecute() << ", and is " 
    << (form.getisSigned() ? "signed" : "not signed");
    return os;
}

Form::~Form() {}
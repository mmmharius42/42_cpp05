/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:49:13 by mpapin            #+#    #+#             */
/*   Updated: 2025/10/29 00:07:32 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string const &name, int gradeToSigned, int gradeToExecute) 
    : _name(name), _isSigned(false), _gradeToSigned(gradeToSigned), _gradeToExecute(gradeToExecute) {
    if (gradeToSigned < 1 || gradeToExecute < 1)
        throw AForm::GradeTooHighException();
    if (gradeToSigned > 150 || gradeToExecute > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm& other) : _name(other._name), _isSigned(other._isSigned),
    _gradeToSigned(other._gradeToSigned), _gradeToExecute(other._gradeToExecute) {}

AForm& AForm::operator=(const AForm& other) {
    if (this != &other) {
        this->_isSigned = other._isSigned;
    }
    return *this;
}

void AForm::execute(Bureaucrat const & executor) const {
    if (!this->_isSigned)
        throw FormNotSignedException();
    
    if (executor.getGrade() > this->_gradeToExecute)
        throw GradeTooLowException();
    
    this->executeActions();
}

bool AForm::isSigned() const {
    return _isSigned;
}

int AForm::getGradeToExecute() const {
    return _gradeToExecute;
}

int AForm::getGradeToSigned() const {
    return _gradeToSigned;
}

const std::string& AForm::getName() const { 
    return _name; 
}

void AForm::beSigned(Bureaucrat const &Bureaucrat) {
    if (Bureaucrat.getGrade() > _gradeToSigned)
        throw AForm::GradeTooLowException();
    _isSigned = true;
}

std::ostream& operator<<(std::ostream& os, const AForm& form) {
    os << "Form : " << form.getName() << ", grade to sign :" 
    << form.getGradeToSigned() << ", grade to exec :" 
    << form.getGradeToExecute() << ", and is " 
    << (form.isSigned() ? "signed" : "not signed");
    return os;
}

AForm::~AForm() {}  
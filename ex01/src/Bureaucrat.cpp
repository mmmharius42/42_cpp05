/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:26:37 by mpapin            #+#    #+#             */
/*   Updated: 2025/10/23 15:50:31 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150) {}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name), _grade(grade) {
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
    _grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : _name(other._name), _grade(other._grade) {
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& other) {
    if (this != &other)
        _grade = other._grade;
    return *this; 
}

void Bureaucrat::incrementGrade() {
    if (_grade <= 1)
        throw GradeTooHighException();
    _grade--;
}

void Bureaucrat::decrementGrade() {
    if (_grade >= 150)
        throw GradeTooLowException();
    _grade++;
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "grade to Low";
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "grade to high";
}

Bureaucrat::~Bureaucrat() {
    std::cout << "deconstructeur called" << std::endl;
}

int Bureaucrat::GetGrade() const {
    return _grade;
}

const std::string& Bureaucrat::GetName() const {
    return _name;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& Bureaucrat) {
    os << Bureaucrat.GetName() << ", bureaucrat grade " << Bureaucrat.GetGrade() << ".";
    return os;
}
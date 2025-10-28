/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:26:36 by mpapin            #+#    #+#             */
/*   Updated: 2025/10/28 19:48:29 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Form;

class Bureaucrat {
    private :
        const std::string   _name;
        int                 _grade;
    public:
        Bureaucrat();
        Bureaucrat(const std::string& name, int grade);
        Bureaucrat(const Bureaucrat& other);
        Bureaucrat& operator=(const Bureaucrat& other);
        ~Bureaucrat();

        class GradeTooHighException : public std::exception {
            public :
                virtual const char* what() const throw() {
                    return "grade to high"; }
        };

        class GradeTooLowException : public std::exception {
            public :
                virtual const char* what() const throw() { 
                    return "grade to low"; }
        };

        const std::string& GetName() const;
        int GetGrade() const;
        void decrementGrade();
        void incrementGrade();

        void signForm(Form& form) const;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& Bureaucrat);

#endif
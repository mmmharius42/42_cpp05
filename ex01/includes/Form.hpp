/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:49:16 by mpapin            #+#    #+#             */
/*   Updated: 2025/10/29 15:49:45 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Form {
    private :
        const std::string   _name;
        bool                _isSigned;
        const int           _gradeToSigned;
        const int           _gradeToExecute;
        
    public :
        Form();
        Form(std::string const &name, int gradeToSigned, int gradeToExecute);
        Form(const Form& other);
        Form& operator=(const Form& other);
        ~Form();

        const std::string&  getName() const;
        bool                getisSigned() const;
        int                 getGradeToSigned() const;
        int                 getGradeToExecute() const;
        void                beSigned(Bureaucrat const &Bureaucrat);
        
        class GradeTooHighException : public std::exception {
            public :
                virtual const char* what() const throw() {
                    return "grade too high.";
                }
        };

        class GradeTooLowException : public std::exception {
            public :
                virtual const char* what() const throw() {
                    return "grade too low.";
                }
        };
};

std::ostream& operator<<(std::ostream& os, const Form& Form);

#endif

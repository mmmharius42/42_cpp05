/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:49:16 by mpapin            #+#    #+#             */
/*   Updated: 2025/10/28 20:07:19 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include "fstream"
#include "Bureaucrat.hpp"
class Bureaucrat;

class AForm {
    private :
        const std::string   _name;
        bool                _isSigned;
        const int           _gradeToSigned;
        const int           _gradeToExecute;
    
    protected :
        virtual void executeActions() const = 0;
    
    public :
        AForm(std::string const &name, int gradeToSigned, int gradeToExecute);
        AForm(const AForm& other);
        AForm& operator=(const AForm& other);
        virtual ~AForm();
        
        void                execute(Bureaucrat const & executor) const;
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

        class FormNotSigned : public std::exception {
            public :
                virtual const char* what() const throw() {
                    return "Form not signed yet.";
                }
        };
};

std::ostream& operator<<(std::ostream& os, const AForm& form);

#endif

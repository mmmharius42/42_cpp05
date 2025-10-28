/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:49:16 by mpapin            #+#    #+#             */
/*   Updated: 2025/10/28 19:40:34 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class AForm {
    private :
        const std::string   _name;
        bool                _isSigned;
        const int           _gradeToSigned;
        const int           _gradeToExecute;
    
    protected :
        virtual void execute() const = 0;
    
    public :
        AForm(std::string const &name, int gradeToSigned, int gradeToExecute);
        ~AForm();

        const std::string&  getName() const;
        bool                getisSigned() const;
        bool                isSigned() const;  
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

#endif

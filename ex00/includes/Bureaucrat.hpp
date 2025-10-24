/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 15:26:36 by mpapin            #+#    #+#             */
/*   Updated: 2025/10/23 15:56:37 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat {
    private :
        std::string _name;
        int         _grade;
    public:
        Bureaucrat();
        // Bureaucrat(const std::string& name, int grade);
        // Bureaucrat(const Bureaucrat& other);
        ~Bureaucrat();
    
        // const std::string GetName() const;
        // int GetGrade() const;
        void decrementGrade();
        void incrementGrade();
}

#endif
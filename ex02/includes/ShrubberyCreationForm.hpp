/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 19:36:58 by mpapin            #+#    #+#             */
/*   Updated: 2025/10/29 00:02:57 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
    private :
        std::string _target;
    
    protected:
        void executeActions() const;

    public :
        ShrubberyCreationForm(std::string const& target) : AForm("Shrubbery", 145, 137), _target(target) {}
        ShrubberyCreationForm(ShrubberyCreationForm const& other);
        ShrubberyCreationForm& operator=(ShrubberyCreationForm const& other);
        ~ShrubberyCreationForm();

};

#endif

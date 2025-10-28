/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 19:37:22 by mpapin            #+#    #+#             */
/*   Updated: 2025/10/29 00:06:49 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
    private :
        std::string _target;
    
    protected :
        void executeActions() const;
    
    public :
        PresidentialPardonForm(std::string target) : AForm("Presidential", 25, 5), _target(target) {}
        PresidentialPardonForm(PresidentialPardonForm const& other);
        PresidentialPardonForm& operator=(PresidentialPardonForm const& other);
        ~PresidentialPardonForm();
};

#endif

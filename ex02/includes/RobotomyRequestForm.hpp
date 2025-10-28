/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpapin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 19:37:23 by mpapin            #+#    #+#             */
/*   Updated: 2025/10/29 00:06:03 by mpapin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>

class RobotomyRequestForm : public AForm {
    private :
        std::string _target;
    
    protected :
        void executeActions() const;

    public :
        RobotomyRequestForm(std::string const& target) : AForm("Robotomy", 72, 45), _target(target) {}
        RobotomyRequestForm(RobotomyRequestForm const& other);
        RobotomyRequestForm& operator=(RobotomyRequestForm const& other);
        ~RobotomyRequestForm();
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 13:09:35 by ddyankov          #+#    #+#             */
/*   Updated: 2023/09/05 18:02:21 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    
}
Harl::~Harl()
{
    
}
void    Harl::debug()
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my burger!" << std::endl; 
}
void    Harl::info()
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money!" << std::endl; 
}
void    Harl::warning()
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free!" << std::endl; 
}
void    Harl::error()
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now!" << std::endl;
}
void    Harl::complain(std::string level)
{
    std::string complainStr[4] = {"debug", "info", "warning", "error"};
    
    void    (Harl::*debug)();
    void    (Harl::*info)();
    void    (Harl::*warning)();
    void    (Harl::*error)();
    
    debug = &Harl::debug;
    info = &Harl::info;
    warning = &Harl::warning;
    error = &Harl::error;
    
    typedef void (Harl::*funcs)();
    funcs complains[4] = {debug, info, warning, error};
    int i = 0;
    int flag = 0;
    
    while (i < 4)
    {
        if (complainStr[i] == level)
        {
            flag = 1;
            (this->*(complains[i]))();
                break ;
        }
        i++;
    }
    if (!flag)
        std::cout << "This is an unknown complain!" << std::endl;
}
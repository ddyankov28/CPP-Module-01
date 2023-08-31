/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 12:35:17 by ddyankov          #+#    #+#             */
/*   Updated: 2023/08/31 17:48:04 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name)
{
    _weapon = &weapon;
    std::cout << "\033[1;32mHumanA "<< _name <<  " constructor called\033[0m" << std::endl;
}
HumanA::~HumanA()
{
    std::cout << "\033[1;31mHumanA "<< _name <<  " destructor called\033[0m" << std::endl;
}
void    HumanA::attack()
{
    std::cout <<  _name << " attacks with " << _weapon->getType() << std::endl;
}
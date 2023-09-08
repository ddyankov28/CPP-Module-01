/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 13:28:30 by ddyankov          #+#    #+#             */
/*   Updated: 2023/08/31 17:17:53 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
    _weapon = NULL;
    std::cout << "\033[1;32mHumanB " << _name <<  " constructor called\033[0m" << std::endl;
}
HumanB::~HumanB()
{
    std::cout << "\033[1;31mHumanB " << _name << " destructor called\033[0m" << std::endl;
}
void    HumanB::attack()
{
    if (!_weapon)
    {
        std::cout << "There is no weapon assigned" << std::endl;
        return ;
    }
    std::cout << "🏏" << _name << " attacks with " << _weapon->getType() << "🏏" << std::endl;
}
void    HumanB::setWeapon(Weapon& weapon)
{
    _weapon = &weapon;
    _weapon->getType();
}

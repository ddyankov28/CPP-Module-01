/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 10:42:23 by ddyankov          #+#    #+#             */
/*   Updated: 2023/08/31 18:08:45 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
    if (type == "")
        _type = "default";
    std::cout << "\033[1;32mWeapon "<< _type <<  " constructor called\033[0m" << std::endl;
}
Weapon::~Weapon()
{
    std::cout << "\033[1;31mWeapon "<< _type <<  " destructor called\033[0m" << std::endl;
}
const std::string& Weapon::getType()
{
    std::string& typeRef = _type;
    return typeRef;
}
void    Weapon::setType(std::string newType)
{
    _type = newType;
    return ;
}
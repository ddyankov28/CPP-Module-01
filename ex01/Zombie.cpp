/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:50:18 by ddyankov          #+#    #+#             */
/*   Updated: 2023/08/31 18:08:06 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::setName(std::string name)
{
    _name = name;
}

Zombie::Zombie()
{
    _name = "default";
    std::cout << "\033[1;32mZombie "<< _name <<  " constructor called\033[0m" << std::endl;
}
Zombie::~Zombie()
{
    std::cout << "\033[1;31mZombie " << _name << " destructor called\033[0m" << std::endl;
}
void    Zombie::announce()
{
    std::cout << _name << ": BraiiiiiiinnzzzZ..." << std::endl;
}
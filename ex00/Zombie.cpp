/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 17:04:43 by ddyankov          #+#    #+#             */
/*   Updated: 2023/08/31 18:07:50 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
     if (_name.empty())
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

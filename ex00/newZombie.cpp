/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:30:07 by ddyankov          #+#    #+#             */
/*   Updated: 2023/08/30 13:26:47 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *newZombie(std:: string name)
{
    Zombie  *newZombie;
    try
    {
        newZombie = new Zombie(name);
    }
    catch(std::bad_alloc& ba)
    {
        std::cerr << ba.what() << std::endl;
        std::cerr << "❗️❗️❗️Memory Allocation failed❗️❗️❗️" << std::endl;
        return NULL;
    }
    return newZombie;
}
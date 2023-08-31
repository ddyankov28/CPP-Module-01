/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:50:00 by ddyankov          #+#    #+#             */
/*   Updated: 2023/08/30 13:53:43 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
    Zombie  *horde;
    
    try
    {
        horde = new Zombie[N];
    }
    catch(std::exception& ba)
    {
        std::cerr << ba.what() << std::endl;
        std::cerr << "❗️❗️❗️Memory Allocation failed❗️❗️❗️" << std::endl;
        return NULL;
    }
    for (int i = 0; i < N; i++)
        horde[i].setName(name);
    return horde;
}

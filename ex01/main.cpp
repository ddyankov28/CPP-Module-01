/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:50:54 by ddyankov          #+#    #+#             */
/*   Updated: 2023/08/30 17:18:25 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    std::string number;
    std::string name;
    int n = 0;
    int i = 0;
    
    std::cout << "🧟Enter a number of zombies🧟" << std::endl;
    if (!std::getline(std::cin, number))
    {
        if (std::cin.eof())
        exit(0);
    }
    std::cout << "🧟Enter a name for the zombies🧟" << std::endl;
    if (!std::getline(std::cin, name))
    {
        if (std::cin.eof())
        exit(0);
    }
    n = std::atoi(number.c_str());
    if (n <= 0) 
    {
        std::cerr << "❗️❗️❗️Please enter a positive number❗️❗️❗️\nGoodBye" << std::endl;
        return 1;
    }
    if (n > 10000000)
    {
        std::cerr << "❗️❗️❗️Come on, we don't need so many of them❗️❗️❗️\nGoodBye" << std::endl;
        return 1;
    }
    Zombie  *horde_of_zombies = zombieHorde(n, name);
    if (!horde_of_zombies)
        return 1;
    while (i < n)
        horde_of_zombies[i++].announce();
    delete [] horde_of_zombies;
    return 0;
}
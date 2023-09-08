/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:25:27 by ddyankov          #+#    #+#             */
/*   Updated: 2023/09/03 17:15:22 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac , char **av)
{
    Harl harl;
    
    if (ac != 2)
    {
        std::cout << "Error: Usage: ./harlFilter < complain level >" << std::endl;
        return 1;
    }
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    int level = 4;
    while (i < 4)
    {
        if (av[1] == levels[i])
        {
            level = i;
            break ;
        }
        i++;
    }
    switch (level)
    {
        case 0: harl.complain("debug");
        case 1: harl.complain("info");
        case 2: harl.complain("warning");
        case 3: harl.complain("error");
            break ;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break ;
    }
    return 0;
}
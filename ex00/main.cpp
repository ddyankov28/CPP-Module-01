/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:29:20 by ddyankov          #+#    #+#             */
/*   Updated: 2023/08/30 13:28:04 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie  zombie("");
    
    zombie.announce();
    randomChump("random");  //the random zombie will die here
    Zombie *zombie3 = newZombie("marks");
    if (!zombie3)
        return 1;
    zombie3->announce();
    delete zombie3;   //the heap allocated Zombie will die here
    return 0;   //the stack allocated Zombie will die here
}

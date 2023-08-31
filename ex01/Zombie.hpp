/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 10:46:40 by ddyankov          #+#    #+#             */
/*   Updated: 2023/08/30 14:48:59 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <cstdlib>

class Zombie
{
    private:
        std::string _name;
    public:
        Zombie();
        ~Zombie();

        void    announce();
        void    setName(std::string name);
        
};

Zombie  *zombieHorde(int N, std::string name);

# endif
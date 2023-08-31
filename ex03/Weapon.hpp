/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 10:38:41 by ddyankov          #+#    #+#             */
/*   Updated: 2023/08/31 16:49:13 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <cstdlib>

class Weapon
{
    private:
        std::string _type;
    public:
        Weapon(std::string type);
        ~Weapon();

        const std::string&  getType();
        void                setType(std::string);
};

# endif
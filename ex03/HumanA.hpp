/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 12:28:53 by ddyankov          #+#    #+#             */
/*   Updated: 2023/08/31 17:48:28 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
        std::string _name;
        Weapon      *_weapon;
    public:
        HumanA(std::string name, Weapon& weapon);
        ~HumanA();

        void    attack();
};

# endif
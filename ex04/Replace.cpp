/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:59:24 by ddyankov          #+#    #+#             */
/*   Updated: 2023/08/31 18:14:03 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace()
{
    
}
Replace::~Replace()
{
    
}
int Replace::checkArgs(int ac)
{
    if (ac != 4)
    {
        std::cout << "Usage: ./a.out <filename> s1 s2 " << std::endl;
        return 0;
    }
    return 1;
}
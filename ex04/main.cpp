/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:24:29 by ddyankov          #+#    #+#             */
/*   Updated: 2023/08/31 18:14:28 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int ac, char **av)
{
    (void)av;
    Replace replace;
    
    replace.checkArgs(ac);
    return 0;
}
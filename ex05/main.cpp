/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 13:09:15 by ddyankov          #+#    #+#             */
/*   Updated: 2023/09/03 15:12:41 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl harl;
    
    harl.complain("debug");
    harl.complain("info");
    harl.complain("warning");
    harl.complain("error");
    harl.complain("");
    harl.complain("unknown");
    return 0;
}
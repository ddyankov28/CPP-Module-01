/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:43:20 by ddyankov          #+#    #+#             */
/*   Updated: 2023/08/30 17:54:12 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "The memory addres of the string:     " << &string << std::endl;
    std::cout << "The memory addres held by stringPTR: " << stringPTR << std::endl;
    std::cout << "The memory addres held by stringREF: " << &stringREF << std::endl;

    std::cout << "The value of string:                 " << string << std::endl;
    std::cout << "The value pointed to by stringPTR:   " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF:   " << stringREF << std::endl;
    return 0;
}
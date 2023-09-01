/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:59:24 by ddyankov          #+#    #+#             */
/*   Updated: 2023/09/01 17:36:23 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(int ac) : _ac(ac)
{
    
}
Replace::~Replace()
{
    
}
int Replace::checkArgs()
{
    if (_ac != 4)
    {
        std::cout << "Usage: ./a.out <filename> s1 s2 " << std::endl;
        return 0;
    }
    return 1;
}
void    Replace::setArgs(char **av)
{
    _filename = av[1];
    _s1 = av[2];
    _s2 = av[3];
}

std::string Replace::getFileName()
{
    return _filename;
}
std::string Replace::getFirstString()
{
    return _s1;
}
std::string Replace::getSecondString()
{
    return _s2;
}
int Replace::openFile()
{
    std::ifstream inp(_filename);
    if (inp.fail())
    {
        std::cerr << "Error while opening the file" << std::endl;
        return 0;
    }
    while (std::getline(inp, _temp))
    {
        _content += _temp;
         if (!inp.eof()) 
         _content += "\n";
    }
    _temp = "";
    if (inp.is_open())
        inp.close();
    //outfile << _content;
    return 1;
}

bool    Replace::replaceString()
{
    size_t pos = 0;
    size_t start = 0;
    
    if(_s1.empty())
    {
        std::cout << "Error: You can't replace an empty string" << std::endl;
        return false;
    }
    else if (_s1 == _s2)  //just wann save some time : )
        return true;
    while (1)
    {
        pos = _content.find(_s1, start);
        if (pos != std::string::npos)
        {
            _temp += _content.substr(start, pos);
            start = pos + _s1.length();
            _temp += _s2; 
        }
        else 
            break ;
    }
    std::cout << _temp;
    return true;        
}

int Replace::startReplace(char **av)
{
    if (!checkArgs())
        return 0;
    setArgs(av);
    if (!openFile())
        return 0;
    if (!replaceString())
        return 0;
    return 1;
}
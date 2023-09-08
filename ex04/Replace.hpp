/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:59:29 by ddyankov          #+#    #+#             */
/*   Updated: 2023/09/03 13:03:35 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef REPLACE_HPP
# define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <cstdlib>

class Replace
{
    private:
    
        int _ac;
        const char *_filename;
        std::string _s1;
        std::string _s2;
        std::string _temp;
        std::string _content;
        int         checkArgs();
        void        setArgs(char **av);
        std::string getFileName();
        std::string getFirstString();
        std::string getSecondString();
        int         openFile();
        bool        replaceString();
        bool        createNewFile();
    public:
        Replace(int ac);
        ~Replace();

        int         startReplace(char **av);
};





# endif
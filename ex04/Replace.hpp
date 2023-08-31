/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 17:59:29 by ddyankov          #+#    #+#             */
/*   Updated: 2023/08/31 18:12:25 by ddyankov         ###   ########.fr       */
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
        
    public:
        Replace();
        ~Replace();

        int checkArgs(int ac);
};

# endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 13:09:28 by ddyankov          #+#    #+#             */
/*   Updated: 2023/09/03 13:32:12 by ddyankov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
    private:
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);
    public:
        Harl();
        ~Harl();

        void    complain(std::string level);
};


# endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddyankov <ddyankov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:28:19 by ddyankov          #+#    #+#             */
/*   Updated: 2023/09/03 17:03:37 by ddyankov         ###   ########.fr       */
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
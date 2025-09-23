/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymane <aymane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 20:08:21 by aymane            #+#    #+#             */
/*   Updated: 2025/09/23 21:02:01 by aymane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <algorithm>
#include <vector>


class Span 
{
    private :
        unsigned int n;    
        std::vector<int> span;

        
    public :
        Span(unsigned int N);
    // mm fct
        void addNumber(int number);
        unsigned int shortestSpan(void);
        unsigned int longestSpan(void);    
    // exepetion class    
    class FullSpan : public std::exception
    {
        public :
            const char* what(void) const throw();
    };
    class SmallSpan : public std::exception
    {
        public :
            const char* what(void) const throw();
    };

    
};







#endif
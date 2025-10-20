/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymane <aymane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 20:08:21 by aymane            #+#    #+#             */
/*   Updated: 2025/10/20 18:17:32 by aymane           ###   ########.fr       */
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
        unsigned int        n;    
        std::vector<int> span;

        
    public :
    // C.O.F
        Span(unsigned int N);
        Span(const Span& original);
        Span& operator=(const Span& original);
        ~Span();
    // mm fct
        void addNumber(int number);
        unsigned int shortestSpan(void);
        unsigned int longestSpan(void);
    // template fct
        template <typename INPUT>
        void    add_by_range(INPUT start, INPUT end)
        {
            if (span.size() + std::distance(start, end) > n)
                throw FullSpan();
            span.insert(span.end(), start, end);
        };
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
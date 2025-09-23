/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymane <aymane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 20:21:35 by aymane            #+#    #+#             */
/*   Updated: 2025/09/23 22:49:30 by aymane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"


Span::Span(unsigned int N) : n(N)
{
    span.reserve(N);
    std::cout << "Span constructor is called \n";
}

Span::~Span()
{
    std::cout << "Span destructor is called\n";
}

const char* Span::FullSpan::what(void) const throw()
{
    return "the Span is already full !\n";
};

const char* Span::SmallSpan::what(void) const throw()
{
    return "the Span is small !\n";
};



void Span::addNumber(int number)
{
    if (span.size() >= n)
        throw FullSpan();
    span.push_back(number);
}

unsigned int Span::shortestSpan(void)
{
    if (span.size() < 2)
        throw SmallSpan();

    std::vector<int> sorted_span = span;
    std::sort(sorted_span.begin(), sorted_span.end()); 
    
    unsigned int min_span = sorted_span[1] - sorted_span[0];
    for (size_t i = 1; i < sorted_span.size() - 1; ++i)
    {
        unsigned int diff = sorted_span[i + 1] - sorted_span[i];
        if (diff < min_span)
            min_span = diff;
    }
    return min_span;
}

unsigned int Span::longestSpan(void)
{
    if (span.size() < 2)
        throw SmallSpan();

    std::vector<int> sorted_span = span;
    std::sort(sorted_span.begin(), sorted_span.end()); 

    return sorted_span.back() - sorted_span.front();
}


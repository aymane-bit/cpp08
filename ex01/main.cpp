/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymane <aymane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 21:15:12 by aymane            #+#    #+#             */
/*   Updated: 2025/10/20 19:20:52 by aymane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try
    {
        std::cout << "=== Test 1: addNumber ===" << std::endl;
        Span sp(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;

        std::cout << "\n=== Test 2: add_by_range ===" << std::endl;
        std::vector<int> nums;
        nums.push_back(100);
        nums.push_back(200);
        nums.push_back(300);

        Span sp2(3);
        sp2.add_by_range(nums.begin(), nums.end());
        std::cout << "Shortest span: " << sp2.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp2.longestSpan() << std::endl;

        std::cout << "\n=== Test 3: Exception (FullSpan) ===" << std::endl;
        Span sp3(2);
        sp3.addNumber(1);
        sp3.addNumber(2);
        sp3.addNumber(3);
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    try
    {
        std::cout << "\n=== Test 4: Exception (SmallSpan) ===" << std::endl;
        Span sp4(5);
        sp4.addNumber(42);
        std::cout << sp4.shortestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
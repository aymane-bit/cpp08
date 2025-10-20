/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymane <aymane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 19:58:30 by aymane            #+#    #+#             */
/*   Updated: 2025/10/20 17:57:10 by aymane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "easyfind.hpp"

int main()
{
    std::vector<int> numbers;
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);

    try 
    {
        // Try to find 20
        std::vector<int>::iterator it = easyfind(numbers, 20);
        std::cout << "Found: " << *it << std::endl;

        // Try to find 40 (not in vector)
        it = easyfind(numbers, 40);
        std::cout << "Found: " << *it << std::endl;
    }
    catch (const NotFound &e)
    {
        std::cout << e.what();
    }

    return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymane <aymane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 19:01:50 by aymane            #+#    #+#             */
/*   Updated: 2025/09/30 19:07:45 by aymane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>

int main()
{
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << "Top element: " << mstack.top() << std::endl;

    mstack.pop();
    std::cout << "Size after pop: " << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    std::cout << "Iterating through stack elements:" << std::endl;

    // Iterate with iterators (begin → end)
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    // Test copy constructor
    MutantStack<int> copy(mstack);
    std::cout << "Copy stack size: " << copy.size() << std::endl;

    // Test assignment operator
    MutantStack<int> assign;
    assign = mstack;
    std::cout << "Assigned stack size: " << assign.size() << std::endl;

    return 0;
}

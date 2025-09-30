/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymane <aymane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 18:24:51 by aymane            #+#    #+#             */
/*   Updated: 2025/09/30 19:06:53 by aymane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

// C.O.F

template <typename T>
MutantStack<T>::MutantStack(): std::stack<T>()
{
    std::cout << "MutantStack consructor is called\n";
}

template <typename T>
MutantStack<T>::~MutantStack()
{
    std::cout << "MutantStack destructor is called\n";
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& original) : std::stack<T>(original)
{
    std::cout << "MutantStack copy constructor is called\n";
}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack<T>& original)
{
    std::cout << "MutantStack assignment operator called\n";
    if (this != &original)
    {
        this->c = original.c;
    }
    return *this;
}

// mm fct iterator

template <typename T>
typename    MutantStack<T>::iterator MutantStack<T>::begin()
{
    return this->c.begin();
}

template <typename T>
typename    MutantStack<T>::iterator MutantStack<T>::end()
{
    return this->c.end();
}

template <typename T>
typename    MutantStack<T>::const_iterator MutantStack<T>::begin() const
{
    return this->c.begin();
}

template <typename T>
typename    MutantStack<T>::const_iterator MutantStack<T>::end() const
{
    return this->c.end();
}

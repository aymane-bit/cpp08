/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymane <aymane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 17:19:51 by aymane            #+#    #+#             */
/*   Updated: 2025/10/20 19:22:14 by aymane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

# include <iostream>
# include <algorithm>
# include <stack>


template <typename T>
class MutantStack : public std::stack<T>
{
    public :
    // some typedef
        typedef typename std::stack<T>::container_type      container_type;
        typedef typename container_type::iterator           iterator;
        typedef typename container_type::const_iterator     const_iterator;
    // C.O.F
        MutantStack();
        ~MutantStack();
        MutantStack(const MutantStack& original);
        MutantStack<T>& operator=(const MutantStack<T>& original);
    // mm fct : iterators
        iterator    begin();
        iterator    end();

        const_iterator    begin() const;
        const_iterator    end() const;

};

# include "MutantStack.tpp"


#endif
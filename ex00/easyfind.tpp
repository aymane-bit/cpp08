/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymane <aymane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 19:50:12 by aymane            #+#    #+#             */
/*   Updated: 2025/10/20 17:49:59 by aymane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"


const char* NotFound::what(void) const throw()
{
    return "occurrency not found!\n";
}

template <typename T>
typename T::iterator easyfind(T &haystack, int needle)
{
    typename T::iterator it = std::find(haystack.begin(), haystack.end(), needle);
    if (it == haystack.end())
        throw NotFound();
    return it;
}


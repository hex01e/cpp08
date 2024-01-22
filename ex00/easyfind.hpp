/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houmanso <houmanso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 21:48:59 by houmanso          #+#    #+#             */
/*   Updated: 2024/01/21 16:04:49 by houmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename T>
int	easyfind(T &t, int n)
{
	typename T::iterator	found;

	found = find(t.begin(), t.end(), n);
	if (found == t.end())
		throw (n);
	return (*found);
}

#endif
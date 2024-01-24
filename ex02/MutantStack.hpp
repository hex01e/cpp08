/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houmanso <houmanso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:18:29 by houmanso          #+#    #+#             */
/*   Updated: 2024/01/24 18:18:12 by houmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>
#include <algorithm>

template <typename _Type, typename _Container = std::deque<_Type> >
class MutantStack: public std::stack<_Type, _Container>
{
	public:
		MutantStack(void): std::stack<_Type, _Container>()
		{
			// nothing
		}

		MutantStack(const _Container& ctnr): std::stack<_Type, _Container>(ctnr)
		{
			// nothing
		}

		MutantStack(const MutantStack& cpy): std::stack<_Type, _Container>(cpy)
		{
			*this = cpy;
		}

		MutantStack&	operator=(const MutantStack& cpy)
		{
			if (this != &cpy)
				std::stack<_Type, _Container>::operator=(cpy);
			return (*this);
		}

		typedef	typename _Container::iterator	iterator;

		iterator	begin(void)
		{
			return (std::stack<_Type, _Container>::c.begin());
		}
		
		iterator	end(void)
		{
			return (std::stack<_Type, _Container>::c.end());
		}

		~MutantStack(void)
		{
			// nothing for now
		}
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houmanso <houmanso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 21:33:39 by houmanso          #+#    #+#             */
/*   Updated: 2024/01/24 12:49:41 by houmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <cmath>
#include <vector>
#include <iostream>
#include <algorithm>

class Span
{
	private:
		unsigned int		max;
		std::vector<int>	arr;

	public:
		Span(void);
		Span(unsigned int N);
		Span(const Span& cpy);

		Span&	operator=(const Span& cpy);

		void			addNumber(int n);
		void			addNumbers(unsigned int n);
		unsigned int	longestSpan(void);
		unsigned int	shortestSpan(void);

		class SpanIsFull: public std::exception
		{
			public:
				SpanIsFull(void);
				SpanIsFull(const SpanIsFull& cpy);
		
				SpanIsFull&	operator=(const SpanIsFull& cpy);

				const char*	what(void) const throw();

				~SpanIsFull(void) throw();
		};

		class NoSpanFound: public std::exception
		{
			public:
				NoSpanFound(void);
				NoSpanFound(const NoSpanFound& cpy);

				NoSpanFound&	operator=(const NoSpanFound& cpy);

				const char*	what(void) const throw();
		
				~NoSpanFound(void) throw();
		};

		~Span(void);
};

#endif

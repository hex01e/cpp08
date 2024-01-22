/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houmanso <houmanso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 21:33:39 by houmanso          #+#    #+#             */
/*   Updated: 2024/01/21 21:41:18 by houmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>

class Span
{
	private:
		unsigned int	max;
		unsigned int	size;

	public:
		Span(void);
		Span(unsigned int N);
		Span(const Span& cpy);

		Span&	operator=(const Span& cpy);

		void	addNumber(int n);

		class SpanIsFull: public std::exception
		{
			public:
				SpanIsFull(void);
				SpanIsFull(const SpanIsFull& cpy);
		
				SpanIsFull&	operator=(const SpanIsFull& cpy);

				const char*	what(void) const throw();
		
				~SpanIsFull(void);
		};

		~Span(void);
};

#endif

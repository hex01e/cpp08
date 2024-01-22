/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houmanso <houmanso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 21:33:58 by houmanso          #+#    #+#             */
/*   Updated: 2024/01/22 12:28:56 by houmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void)
{
}

Span::Span(unsigned int N)
{
}

Span::Span(const Span& cpy)
{
}

Span	&Span::operator=(const Span &cpy)
{
	// TODO: insert return statement here
}

void	Span::addNumber(int n)
{
}

Span::~Span(void)
{
}

Span::SpanIsFull::SpanIsFull(void)
{
	// nothing
}

Span::SpanIsFull::SpanIsFull(const SpanIsFull &cpy)
{
	*this = cpy;
	// nothing
}

Span::SpanIsFull &Span::SpanIsFull::operator=(const SpanIsFull &cpy)
{
	if (this != &cpy)
		return (*this);
	return (*this);
}

const char	*Span::SpanIsFull::what(void) const throw()
{
	return ("Can't add this number: Span is full");
}

Span::SpanIsFull::~SpanIsFull(void)
{
	// nothing
}

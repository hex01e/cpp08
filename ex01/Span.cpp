/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houmanso <houmanso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 21:33:58 by houmanso          #+#    #+#             */
/*   Updated: 2024/01/24 12:51:37 by houmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void)
{
	max = 0;
}

Span::Span(unsigned int N)
{
	max = N;
}

Span::Span(const Span& cpy)
{
	*this = cpy;
}

Span	&Span::operator=(const Span &cpy)
{
	if (this != &cpy)
	{
		max = cpy.max;
		arr = cpy.arr;
	}
	return (*this);
}

void	Span::addNumber(int n)
{
	if (arr.size() == max)
		throw SpanIsFull();
	arr.push_back(n);
}

void	Span::addNumbers(unsigned int n)
{
	std::srand(std::time(0));
	for (size_t i = 0; i < max && i < n; i++)
		addNumber(std::rand());
}

unsigned int Span::longestSpan(void)
{
	std::vector<int>::iterator	lowest, largest;

	if (arr.size() < 2)
		throw NoSpanFound();
	lowest = std::min_element(arr.begin(), arr.end());
	largest = std::max_element(arr.begin(), arr.end());
	return (*largest - *lowest);
}

unsigned int	Span::shortestSpan(void)
{
	std::vector<int>::iterator	it;
	int	min;

	if (arr.size() < 2)
		throw NoSpanFound();
	std::sort(arr.begin(), arr.end());
	it = arr.begin();
	min = max;
	while (it + 1 != arr.end())
	{
		int tmp = std::fabs(*(it + 1) - *it);
		if (tmp < min)
			min = tmp;
		it++;
	}
	return (min);
}

Span::~Span(void)
{
	// nothing
}

Span::SpanIsFull::SpanIsFull(void)
{
	// nothing
}

Span::SpanIsFull::SpanIsFull(const SpanIsFull &cpy)
{
	*this = cpy;
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

Span::SpanIsFull::~SpanIsFull(void) throw()
{
	// nothing
}

Span::NoSpanFound::NoSpanFound(void)
{
	// nothing
}

Span::NoSpanFound::NoSpanFound(const NoSpanFound &cpy)
{
	*this = cpy;
}

Span::NoSpanFound	&Span::NoSpanFound::operator=(const NoSpanFound &cpy)
{
	if (this != &cpy)
		return (*this);
	return (*this);
}

const char	*Span::NoSpanFound::what(void) const throw()
{
	return ("no span found size is lower than 2 items");
}

Span::NoSpanFound::~NoSpanFound(void) throw()
{
	// nothing
}

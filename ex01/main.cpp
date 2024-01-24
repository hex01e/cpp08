/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houmanso <houmanso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 19:07:48 by houmanso          #+#    #+#             */
/*   Updated: 2024/01/24 19:02:06 by houmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

#define NN 10001

int	main(void)
{
	Span s(NN);
	Span s2;

	try
	{
		s.generate(NN);
		std::cout << "Longest span is : " << s.longestSpan() << std::endl;
		std::cout << "Shortgest span is : " << s.shortestSpan() << std::endl;
	}
	catch (Span::NoSpanFound& e)
	{	
		std::cout << "Fail get longest or shortest: " << e.what() << std::endl;
	}
	catch (Span::SpanIsFull& e)
	{
		std::cout << "Fail to add: " << e.what() << std::endl;
	}
	// failing tests: adding a number
	std::cout <<  "--------------------------------------------------" << std::endl;
	try
	{
		s.addNumber(std::rand());
	}
	catch (Span::SpanIsFull& e)
	{
		std::cout << "Fail to add: " << e.what() << std::endl;
	}

	// failing tests: get longets span
	std::cout <<  "--------------------------------------------------" << std::endl;
	try
	{
		std::cout << "Longest span is : " << s2.longestSpan() << std::endl;
	}
	catch (Span::NoSpanFound& e)
	{	
		std::cout << "Fail get longest or shortest: " << e.what() << std::endl;
	}

	// failing tests: get shortest span
	std::cout <<  "--------------------------------------------------" << std::endl;

	try
	{
		std::cout << "Shortgest span is : " << s2.shortestSpan() << std::endl;
	}
	catch (Span::NoSpanFound& e)
	{	
		std::cout << "Fail get longest or shortest: " << e.what() << std::endl;
	}
	return (0);
}

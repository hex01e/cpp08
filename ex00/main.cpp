/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houmanso <houmanso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 11:34:07 by houmanso          #+#    #+#             */
/*   Updated: 2024/01/24 10:24:27 by houmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int	main(void)
{
	std::vector<int>	arr;
	for (int i = 0; i < 4; i++)
		arr.push_back(i);
	try
	{
		std::cout << easyfind(arr, 2) << std::endl;
		std::cout << easyfind(arr, 4) << std::endl;
	}
	catch (int n)
	{
		std::cout << n << " not found!" << std::endl;
	}
	return (0);
}

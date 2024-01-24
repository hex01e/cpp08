/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: houmanso <houmanso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:37:42 by houmanso          #+#    #+#             */
/*   Updated: 2024/01/24 18:14:45 by houmanso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <queue>
#include <queue>

class Base {
	protected: 
		int a;
};

class Child : public Base {
	public : 
		int  test() {
			return a;
		}

		
};

int	main(void)
{
	Child c;
	c.test();
		
	// MutantStack<int> s;

	// s.push(4);
	// s.push(8);
	// s.push(44);
	// MutantStack<int>::iterator a = s.begin();
	// (void)a;
	return 0;
}

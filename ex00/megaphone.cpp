/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehdimirzaie <mehdimirzaie@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 23:21:10 by mehdimirzai       #+#    #+#             */
/*   Updated: 2023/06/30 09:50:21 by mehdimirzai      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <cstring>

int main(int ac, char **av) 
{
	int i = 1;
	int len;
	while (ac > i)
	{
		len = strlen(av[i]);
		for (int k = 0; k < len; k++)
			putchar(toupper(av[i][k]));
		std::cout << ' ';
		i++;
	}
	std::cout << '\n';
	return 0;
}

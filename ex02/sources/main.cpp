/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:47:13 by pineau            #+#    #+#             */
/*   Updated: 2024/01/18 16:14:53 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	std::string sentence = "HI THIS IS BRAIN";
	std::string *stringPTR = &sentence;
	std::string &stringREF = sentence;
	
	std::cout << "adresse sentence: " << &sentence << std::endl;
	std::cout << "adresse ptr: " << stringPTR << std::endl;
	std::cout << "adresse &ref: " << &stringREF << std::endl;

	std::cout << "valeur string: " << sentence << std::endl;
	std::cout << "valeur pointee par STR: " << *stringPTR << std::endl;
	std::cout << "valeur pointee par REF: " << stringREF << std::endl;
	
	return (0);
}
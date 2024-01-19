/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 20:12:20 by pineau            #+#    #+#             */
/*   Updated: 2024/01/19 16:10:32 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

//--track-fds=yes

void	replace_strings(std::strinf s1, std::string s2, std::ifstream infile, std::ofstream &outfile)
{
	//s1 = to find
	//s2 = to replace
	
}

int main(int argc, char **argv)
{
	if (argc != 4)
		return (std::cerr << "Wrong nomber of arguments" << std::endl, 0);
	
	std::ifstream infile;
	std::ofstream outfile;
	std::string nameinfile;
	std::string nameoutfile;
	
	nameinfile = argv[1];
	nameoutfile = nameinfile + ".replace";
	
	infile.open(nameinfile.c_str(), std::fstream::in);
	outfile.open(nameoutfile.c_str(), std::fstream::out);
	if (!infile || !outfile)
	{
		infile.close();
		outfile.close();

		return (std::cerr << "Failed to open files" << std::endl, 0);
	}

	// replace_strings(argv[2], argv[3], infile, outfile);
	
	outfile.close();
	infile.close();

	return (0);
}

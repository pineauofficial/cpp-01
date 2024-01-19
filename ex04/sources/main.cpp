/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 20:12:20 by pineau            #+#    #+#             */
/*   Updated: 2024/01/19 19:14:55 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

//--track-fds=yes

std::string	fill_text(std::ifstream &infile)
{
	std::string	str;
	std::string	tmp;
	
	while (getline(infile, tmp))
	{
		str = str + tmp;
		if (!infile.eof())
            str = str + "\n";
	}
	return str;
}

int main(int argc, char **argv)
{
	if (argc != 4)
		return (std::cerr << "Wrong nomber of arguments" << std::endl, 0);
	
	std::ifstream infile;
	std::ofstream outfile;
	std::string nameinfile;
	std::string nameoutfile;
	std::string infile_text;
	
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

	infile_text = fill_text(infile);
	
	std::cout << infile_text << std::endl;
	
	outfile.close();
	infile.close();

	return (0);
}

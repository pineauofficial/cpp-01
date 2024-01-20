/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 20:12:20 by pineau            #+#    #+#             */
/*   Updated: 2024/01/20 14:31:57 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

std::string	fill_text(std::ifstream &infile) {
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

void replace(std::string& str, const std::string& s1, const std::string& s2) {
    size_t pos = 0;
    size_t len = s1.length();

    while ((pos = str.find(s1, pos)) != std::string::npos) {
        std::string before = str.substr(0, pos);
        std::string after = str.substr(pos + len);
        str = before + s2 + after;
        pos += s2.length();
    }
}

bool isFile(char* path) {
    struct stat info;
    if (stat(path, &info) != 0)
        return false;
    return S_ISREG(info.st_mode);
}

int main(int argc, char **argv) {
	if (argc != 4)
		return (std::cerr << "Wrong nomber of arguments" << std::endl, 0);
	
	std::ifstream infile;
	std::ofstream outfile;
	std::string nameinfile;
	std::string nameoutfile;
	std::string infile_text;
	
	nameinfile = argv[1];
	nameoutfile = nameinfile + ".replace";
	if (!isFile(argv[1]))
		return (std::cerr << "File not found" << std::endl, 0);
	infile.open(nameinfile.c_str(), std::fstream::in);
	outfile.open(nameoutfile.c_str(), std::fstream::out);
	if (!infile || !outfile)
	{
		infile.close();
		outfile.close();

		return (std::cerr << "Failed to open file" << std::endl, 0);
	}

	infile_text = fill_text(infile);
	replace(infile_text, argv[2], argv[3]);

	outfile << infile_text;
	
	outfile.close();
	infile.close();

	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 15:15:10 by pineau            #+#    #+#             */
/*   Updated: 2024/01/18 15:39:11 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
	public:
		Zombie(void);
		~Zombie(void);
		void	announce(void);
		void	name(std::string name);

	private:
		std::string _name;		
};

Zombie* zombieHorde(int N, std::string name);

#endif
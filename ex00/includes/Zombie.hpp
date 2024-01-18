/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:28:54 by pineau            #+#    #+#             */
/*   Updated: 2024/01/18 15:05:11 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Zombie {
	public:
		Zombie(std::string name);
		~Zombie(void);

		void	announce(void);
	private:
		std::string _name;		
};

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);
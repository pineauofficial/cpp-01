/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 13:59:42 by pineau            #+#    #+#             */
/*   Updated: 2024/01/18 15:11:49 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int argc, char **argv) {
	if (argc != 2)
		return (0);
	Zombie zombie(argv[1]);
	zombie.announce();
	randomChump("Zombie2");
	Zombie	*zombie2 = newZombie("Zombie3");
		if (!zombie2)
			return (0);
	zombie2->announce();
	delete zombie2;
	return 0;
}

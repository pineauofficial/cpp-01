/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 16:19:34 by pineau            #+#    #+#             */
/*   Updated: 2024/01/18 16:51:43 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

class Weapon {
	public:
		Weapon(void);
		~Weapon(void);

		std::string	getType(void) const;
		void	setType(std::string type);
	private:
		std::string	_type;
};

#endif
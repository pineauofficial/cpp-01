/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 14:39:39 by pineau            #+#    #+#             */
/*   Updated: 2024/01/20 15:14:39 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

# define DEBUG "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !"
# define INFO "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!"
# define WARNING "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month."
# define ERROR "This is unacceptable, I want to speak to the manager now."

class Harl
{
	public:
		Harl(void);
		~Harl(void);
		void	complain(std::string level);

	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
};

#endif
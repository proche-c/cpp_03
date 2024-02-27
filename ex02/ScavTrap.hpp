/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:04:07 by proche-c          #+#    #+#             */
/*   Updated: 2022/01/25 12:11:31 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(std::string name, int hitPoints, int energyPoints, int attackDamage);
		ScavTrap(ScavTrap const &src);
		~ScavTrap(void);

		ScavTrap & operator= (ScavTrap const &src);

		void attack(const std::string &target);
		void guardGate(void);
		bool getIsGuarding(void);

	private:
		bool	_isGuarding;		
};

std::ostream & operator<<(std::ostream &o, ScavTrap &c);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:04:07 by proche-c          #+#    #+#             */
/*   Updated: 2022/01/25 12:11:31 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <string>
#include <iostream>

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage);
		ClapTrap(ClapTrap const &src);
		~ClapTrap(void);

		ClapTrap & operator=(ClapTrap const &src);

		std::string	getName(void) const;
		void	setName(std::string name);
		int	getHitPoints(void) const;
		void	setHitPoints(int hitPoints);
		int	getEnergyPoints(void) const;
		void	setEnergyPoints(int energyPoints);
		int	getAttackDamage(void) const;
		void	setAttackDamage(int attackDamage);

		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	protected:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
		

};

std::ostream & operator<<(std::ostream &o, ClapTrap const &c);

#endif
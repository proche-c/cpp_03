/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:04:07 by proche-c          #+#    #+#             */
/*   Updated: 2022/01/25 12:11:31 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void):ClapTrap(""), ScavTrap(""), FragTrap(""), _name("")
{
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap constructor called for " << this->getName() << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap constructor called for " << this->getName() << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src)
{
	std::cout << "DiamondTrap copy constructor called for" << this->_name << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout <<"DiamondTrap destructor called for " << this->getName() << std::endl;
	return ;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const &src)
{
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->_name = src.getName();
		this->_hitPoints = src.getHitPoints();
		this->_energyPoints = src.getEnergyPoints();
		this->_attackDamage = src.getAttackDamage();
	}
	return *this;
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
	return ;
}

std::ostream & operator<<(std::ostream &o, DiamondTrap &c)
{
	o << "DiamondTrap " << c.getName() << " has " << c.getHitPoints() << " hit points, " << c.getEnergyPoints() << " energy points and " << c.getAttackDamage() << " attack damage."<< std::endl;
	return o;
}

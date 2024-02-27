/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:04:07 by proche-c          #+#    #+#             */
/*   Updated: 2022/01/25 12:11:31 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void):ClapTrap("", 100, 50, 20)
{
	this->_isGuarding = false;
	std::cout << "ScavTrap constructor called for " << this->getName() << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name, 100, 50, 20)
{
	this->_isGuarding = false;
	std::cout << "ScavTrap constructor called for " << this->getName() << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name, int hitPoints, int energyPoints, int attackDamage):ClapTrap(name, hitPoints, energyPoints, attackDamage)
{
	this->_isGuarding = false;
	std::cout << "ScavTrap constructor called for " << this->getName() << std::endl;
	return ;	
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	std::cout << "ScavTrap copy constructor called for" << this->_name << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap(void)
{
	std::cout <<"ScavTrap destructor called for " << this->getName() << std::endl;
	return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const &src)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->_name = src.getName();
		this->_hitPoints = src.getHitPoints();
		this->_energyPoints = src.getEnergyPoints();
		this->_attackDamage = src.getAttackDamage();
		this->_isGuarding = src._isGuarding;
	}
	return *this;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std:: cout << "ScavTrap " << this->getName() << " attacks " << target << " causing " << this->getAttackDamage() << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	else
	{
		std::cout << "ScavTrap " << this->getName() << " can't attack because he has " << this->getHitPoints() << " and " << this->getEnergyPoints() << " energy points." << std::endl;
	}
	return ;
}

void ScavTrap::guardGate(void)
{
	this->_isGuarding = true;
	std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode." << std::endl;
}

bool ScavTrap::getIsGuarding(void)
{
	return this->_isGuarding;
}

std::ostream & operator<<(std::ostream &o, ScavTrap &c)
{
	if (c.getIsGuarding())
		o << "ScavTrap " << c.getName() << " has " << c.getHitPoints() << " hit points, " << c.getEnergyPoints() << " energy points, " << c.getAttackDamage() << " attack damage and it's in gate keeper mode." << std::endl;
	else
		o << "ScavTrap " << c.getName() << " has " << c.getHitPoints() << " hit points, " << c.getEnergyPoints() << " energy points, " << c.getAttackDamage() << " attack damage and it's NOT in gate keeper mode." << std::endl;
	return o;
}

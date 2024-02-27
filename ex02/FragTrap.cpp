/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:04:07 by proche-c          #+#    #+#             */
/*   Updated: 2022/01/25 12:11:31 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void):ClapTrap("", 100, 100, 30)
{
	std::cout << "FragTrap constructor called for " << this->getName() << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name):ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap constructor called for " << this->getName() << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name, int hitPoints, int energyPoints, int attackDamage):ClapTrap(name, hitPoints, energyPoints, attackDamage)
{
	std::cout << "FragTrap constructor called for " << this->getName() << std::endl;
	return ;	
}

FragTrap::FragTrap(FragTrap const &src)
{
	std::cout << "FragTrap copy constructor called for" << this->_name << std::endl;
	*this = src;
}

FragTrap::~FragTrap(void)
{
	std::cout <<"FragTrap destructor called for " << this->getName() << std::endl;
	return ;
}

FragTrap & FragTrap::operator=(FragTrap const &src)
{
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	if (this != &src)
	{
		this->_name = src.getName();
		this->_hitPoints = src.getHitPoints();
		this->_energyPoints = src.getEnergyPoints();
		this->_attackDamage = src.getAttackDamage();
	}
	return *this;
}

void FragTrap::attack(const std::string &target)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std:: cout << "FragTrap " << this->getName() << " attacks " << target << " causing " << this->getAttackDamage() << " points of damage!" << std::endl;
		this->_energyPoints--;
	}
	else
	{
		std::cout << "FragTrap " << this->getName() << " can't attack because he has " << this->getHitPoints() << " and " << this->getEnergyPoints() << " energy points." << std::endl;
	}
	return ;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << this->getName() << " says: High Fives!!!!" << std::endl;
	return ;
}

std::ostream & operator<<(std::ostream &o, FragTrap &c)
{
	o << "FragTrap " << c.getName() << " has " << c.getHitPoints() << " hit points, " << c.getEnergyPoints() << " energy points and " << c.getAttackDamage() << " attack damage."<< std::endl;
	return o;
}

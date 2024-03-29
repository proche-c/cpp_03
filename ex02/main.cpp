/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proche-c <proche-c@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:04:07 by proche-c          #+#    #+#             */
/*   Updated: 2022/01/25 12:11:31 by proche-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{
  ScavTrap  robot("Terminator");
  ClapTrap  hero("Sarah Connor");
  FragTrap  robot2("Terminator2");

  std::cout << robot;
  std::cout << hero;

  hero.setHitPoints(150);
  hero.setAttackDamage(40);
  robot.attack("Sarah Connor");
  hero.takeDamage(20);
  hero.attack("Terminator");
  robot.takeDamage(40);

  std::cout << robot;
  std::cout << hero;

  hero.beRepaired(2);
  hero.attack("Terminator");
  robot.takeDamage(40);
  hero.attack("Terminator");
  robot.takeDamage(40);
  robot.attack("Sarah Connor");

  std::cout << robot;
  std::cout << hero;

  robot2.attack("Sarah Connor");
  hero.takeDamage(30);
  robot2.highFivesGuys();

  std::cout << robot2;

  return 0;
}
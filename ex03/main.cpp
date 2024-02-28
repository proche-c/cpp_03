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
#include "DiamondTrap.hpp"

int main( void )
{
  DiamondTrap  hero("Sarah Connor");

  std::cout << hero;
  std::cout << std::endl;

  hero.setHitPoints(1000);
  hero.setAttackDamage(400);
  hero.setEnergyPoints(200);
  hero.attack("Terminator");

  std::cout << hero;
  std::cout << std::endl;

  hero.beRepaired(2);

  std::cout << hero;
  std::cout << std::endl;

  hero.guardGate();
  hero.highFivesGuys();

  std::cout << hero;
  std::cout << std::endl;

  return 0;
}
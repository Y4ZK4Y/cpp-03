/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasamankarimi <yasamankarimi@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 22:05:28 by yasamankari       #+#    #+#             */
/*   Updated: 2025/06/10 14:44:59 by yasamankari      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.h"
#include "ClapTrap.h"
#include <iostream>

// Default constructor
ScavTrap::ScavTrap() {
    setName("Anon");
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap default constructor called for: " << getName() << std::endl;
}

// param constructor
ScavTrap::ScavTrap(const std::string& Name): ClapTrap(Name) {
    //setName(Name);
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
     std::cout << "ScavTrap constructor called for: " << getName() << std::endl;
}

// copy constructor
ScavTrap::ScavTrap(const ScavTrap& copy): ClapTrap(copy)  {
    *this = copy;
     std::cout << "ScavTrap copy constructor called for: " << getName() << std::endl;
}

// Copy assignment operator
ScavTrap& ScavTrap::operator=(const ScavTrap& copy) {
    if (this != &copy) {
        ClapTrap::operator=(copy); // use base class assignment
    }
    std::cout << "Assignment operator called for: " << getName() << std::endl;
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap default destructor called for: " << getName() << std::endl;
}


void ScavTrap::attack(const std::string& target) {
    if (hitPoints <= 0 || energyPoints <= 0) {
        std::cout << "ScavTrap " << getName() << " can't attack. Too tired." << std::endl;
        return ;
    }
    energyPoints--;
    std::cout << "ScavTrap " << getName() << " attacks " << target << ", causing " 
            << attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << getName() << "is now in gate keeper mode." << std::endl;
}

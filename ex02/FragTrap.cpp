/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasamankarimi <yasamankarimi@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 16:16:05 by yasamankari       #+#    #+#             */
/*   Updated: 2025/06/10 16:33:52 by yasamankari      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.h"
#include <iostream>

FragTrap::FragTrap(): ClapTrap() {
    setName("Anon");
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    std::cout << "ScavTrap default constructor called for: " << getName() << std::endl;
}

// FragTrap::FragTrap() : ClapTrap("anon") {
//     std::cout << "Default constructor called for: " << getName() << std::endl;
//     hitPoints = 100;
//     energyPoints = 100;
//     attackDamage = 30;
// }

FragTrap::FragTrap() : ClapTrap(Name) {
    std::cout << "Default constructor called for: " << getName() << std::endl;
    Name = Name;
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
}

FragTrap::FragTrap(const std::string& Name) : ClapTrap(Name) {
    std::cout << "Default constructor called for: " << getName() << std::endl;
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap& copy): FragTrap(copy)  {
    *this = copy;
     std::cout << "FragTrap copy constructor called for: " << getName() << std::endl;
}

// Copy assignment operator
FragTrap& FragTrap::operator=(const FragTrap& copy) {
    if (this != &copy) {
        ClapTrap::operator=(copy); // use base class assignment
    }
    std::cout << "FragTrap assignment operator called for: " << getName() << std::endl;
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap default destructor called for: " << getName() << std::endl;
}


// void FragTrap::attack(const std::string& target) {
//     if (hitPoints <= 0 || energyPoints <= 0) {
//         std::cout << "FragTrap " << getName() << " can't attack. Too tired." << std::endl;
//         return ;
//     }
//     energyPoints--;
//     std::cout << "FragTrap " << getName() << " attacks " << target << ", causing " 
//             << attackDamage << " points of damage!" << std::endl;
// }

void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << getName() << " requests a high five!" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: ykarimi <ykarimi@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/07 19:14:12 by ykarimi       #+#    #+#                 */
/*   Updated: 2025/06/09 11:54:32 by ykarimi       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"
#include <iostream>

ClapTrap::ClapTrap(): Name("anon"), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "Default Constructor called for: " << Name << std::endl;
}

ClapTrap::ClapTrap(std::string Name): Name(Name) {
    std::cout << "Constructor called for: " << Name << std::endl;
    this->hitPoints = 0;
    this->energyPoints = 10;
    this->attackDamage = 10;
}

ClapTrap::ClapTrap(const ClapTrap& copy): Name(copy.Name) {
    std::cout << "Copy constructor called for: " << Name << std::endl;
    this->Name = copy.Name;
    this->hitPoints = copy.hitPoints;
    this->energyPoints = copy.energyPoints;
    this->attackDamage = copy.attackDamage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy) {
    // to prevent a = a
    if (this != &copy) {
        std::cout << "Assignment operator called for: " << Name << std::endl;
        this->Name = copy.Name;
        this->hitPoints = copy.hitPoints;
        this->energyPoints = copy.energyPoints;
        this->attackDamage = copy.attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "Default Destructor called for: " << Name <<  std::endl;
}

// Getters
std::string ClapTrap::getName() const {
    return this->Name;
}

int ClapTrap::getHitPoints() const {
    return this->hitPoints;
}

int ClapTrap::getEnergyPoints() const {
    return this->energyPoints;
}

int ClapTrap::getAttackDamage() const {
    return this->attackDamage;
}

// Setters
void ClapTrap::setName(const std::string& newName) {
    Name = newName;
}

void ClapTrap::setHitPoints(int amount) {
    this->hitPoints = amount;
}

void ClapTrap::setEnergyPoints(int amount) {
    this->energyPoints = amount;
}

void ClapTrap::setAttackDamage(int amount) {
    this->attackDamage = amount;
}

void ClapTrap::attack(const std::string& target) {
    if (hitPoints <= 0 || energyPoints <= 0) {
        std::cout << "ClapTrap " << Name << " can't attack. Too tired." << std::endl;
        return ;
    }
    energyPoints--;
    std::cout << "ClapTrap " << Name << "attacks " << target << ", causing " 
            << attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (hitPoints <= 0) {
        std::cout << "ClapTrap " << Name << " is already dead!" << std::endl;
        return;
    }
    if (amount >= hitPoints) {
        hitPoints = 0;
    } else {
    hitPoints -= amount;
    }
    std::cout << "ClapTrap " << Name << " takes " << amount << " damage. hit points now: " << hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (hitPoints <= 0 || energyPoints <= 0) {
        std::cout << "ClapTrap " << Name << " can't repair." << std::endl;
        return ;
    }
    hitPoints += amount;
    energyPoints--;
    std::cout << "ClapTrap " << Name << " repairs itself for " << amount << " hit points. Hit points now: " << hitPoints << std::endl;
}


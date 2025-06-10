#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "ClapTrap.h"

// ScavTrap is a child class that inherits publicly from the parent class ClapTrap
// base class (CLapTrav) and derived class(ScavTrap)
// the public keyword is the inheritance type, controils access to base members
// 
class ScavTrap : public ClapTrap {
public:
    ScavTrap();
    ScavTrap(const std::string& Name); 
    ScavTrap(const ScavTrap& copy);
    ScavTrap& operator=(const ScavTrap& copy);
    ~ScavTrap();

    void attack(const std::string& target); // Override
    void guardGate(); // Special ability
};

#endif

/*
*Inheritance*
Concepts:
    - Derived classes
    - protected vs. private access
    - overriding behavior
    - constructor chaining
    - base class initialization
*/

/* when do we need setters and getters in this case?
    - when attributes are private (not accessible from derived class)
    - when you wanna enforce validation(not letting HP go negative)
    - to follow encapsulation principles
*/

/* 
constructor chaining: one class constructor calls another - when a derived class is created,
its base class must be constructed first.
*/

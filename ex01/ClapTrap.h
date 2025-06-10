/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: yasamankarimi <yasamankarimi@student.42      +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/04/07 19:14:06 by ykarimi       #+#    #+#                 */
/*   Updated: 2025/06/09 11:49:08 by ykarimi       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <string>

class ClapTrap {

protected: // private to protected - allows ScavTrap to access
    std::string Name;
    unsigned int hitPoints; // starts at 10
    unsigned int energyPoints; // starts at 10
    unsigned int attackDamage; // starts at 0



public:
    ClapTrap(); // Default Constructor
    ClapTrap(std::string Name); // Param Constructor
    ClapTrap(const ClapTrap& copy); // Copy Constructor
    ClapTrap& operator=(const ClapTrap& copy);// Assignment operator 
    ~ClapTrap(); // Destructor

    // Getters
    std::string getName() const;
    int getHitPoints() const;
    int getAttackDamage() const;
    int getEnergyPoints() const;

    // Setters
    void setName(const std::string& newName);
    void setHitPoints(int amount);
    void setEnergyPoints(int amount);
    void setAttackDamage(int amount);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif

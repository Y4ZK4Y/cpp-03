/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasamankarimi <yasamankarimi@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 19:14:01 by ykarimi           #+#    #+#             */
/*   Updated: 2025/06/10 14:32:32 by yasamankari      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"
#include "ScavTrap.h"
#include <iostream>

int main() {
    std::cout << "=== Creating ClapTrap ===" << std::endl;
    ClapTrap bob("Bob");

    std::cout << "\n=== Creating ScavTrap ===" << std::endl;
    ScavTrap steve("Steve");

    std::cout << "\n=== ClapTrap Bob Actions ===" << std::endl;
    bob.attack("target dummy");
    bob.takeDamage(5);
    bob.beRepaired(3);

    std::cout << "\n=== ScavTrap Steve Actions ===" << std::endl;
    steve.attack("enemy drone");
    steve.takeDamage(30);
    steve.beRepaired(20);
    steve.guardGate();

    std::cout << "\n=== Edge Case: Steve has no energy ===" << std::endl;
    for (int i = 0; i < 51; ++i) {
        steve.attack("Exhaust Dummy");
    }

    std::cout << "\n=== End of Program ===" << std::endl;
    return 0;
}

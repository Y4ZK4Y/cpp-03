/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasamankarimi <yasamankarimi@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 19:14:01 by ykarimi           #+#    #+#             */
/*   Updated: 2025/06/10 16:24:21 by yasamankari      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"
#include "ScavTrap.h"
#include "FragTrap.h"
#include <iostream>

int main() {
    std::cout << "=== Creating FragTrap ===" << std::endl;
    FragTrap joy("Joy");

    std::cout << "\n=== FragTrap Joy Actions ===" << std::endl;
    joy.attack("angry toaster");
    joy.highFivesGuys();

    std::cout << "\n=== FragTrap Edge Case ===" << std::endl;
    for (int i = 0; i < 101; i++) {
        joy.attack("energy sponge");
    }

    std::cout << "\n=== End of FragTrap Test ===" << std::endl;
    return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasamankarimi <yasamankarimi@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/07 19:14:01 by ykarimi           #+#    #+#             */
/*   Updated: 2025/06/09 21:51:03 by yasamankari      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.h"

int main() {
    ClapTrap bob("Bob");
    bob.attack("target dummy");
    bob.takeDamage(3);
    bob.beRepaired(5);
    bob.attack("target dummy");
    bob.takeDamage(12);  // Should kill Bob
    bob.attack("target dummy"); // Should fail (dead)
    bob.beRepaired(3);   // Should fail (dead)
    return 0;
}

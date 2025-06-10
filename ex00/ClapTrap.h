#include <string>

class ClapTrap {
private:
    std::string Name;
    int hitPoints;
    int energyPoints;
    int attackPoints;

public:
    ClapTrap();
    ~ClapTrap();
    


    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
}

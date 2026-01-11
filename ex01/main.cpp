#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
    ClapTrap ct1("SALAH");
    ScavTrap st1("SCAVVTRAP");
    std::cout << "-------------------" << std::endl;    
    // st1.guardGate();
    // ct1.attack("ENEMY1");
    // ct1.takeDamage(5);
    // st1.attack("ENEMY2");
    ScavTrap st2(st1);
    ct1.beRepaired(3);
    st1.takeDamage(9);
    
    st1.beRepaired(1);
    return 0;
}
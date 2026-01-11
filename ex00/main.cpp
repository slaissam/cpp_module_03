#include "ClapTrap.hpp"

int main() {
    ClapTrap ct1("SALAH");

    ct1.attack("Target-A");
    ct1.takeDamage(5);
    ct1.beRepaired(3);
    return 0;
}
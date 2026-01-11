#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
    hit_Point = 100;
    energy_Point = 100;
    attack_Damage = 30;
    std::cout << "Parameterized constructor called for " << name << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
    std::cout << "Copy constructor called for " << name << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
    if (this != &other)
        ClapTrap::operator=(other);
    std::cout << "Assignment operator called for " << this->name << std::endl;
    return *this;
}
FragTrap::~FragTrap() {
    std::cout << "Destructor called for " << name << std::endl;
}
void FragTrap::highFivesGuys() {
    std::cout << "FragTrap " << name << " is requesting a high five!" << std::endl;
}

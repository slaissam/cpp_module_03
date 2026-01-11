#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
        hit_Point = 100;
        energy_Point = 50;
        attack_Damage = 20;
    std::cout << "Parameterized constructor called for " << name << std::endl;
};

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
    std::cout << "Copy constructor called for " << name << std::endl;
}
ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    if (this != &other) 
    {
        this->name = other.name;
        hit_Point = other.hit_Point;
        energy_Point = other.energy_Point;
        attack_Damage = other.attack_Damage;
    }
    std::cout << "Assignment operator called for " << name << std::endl;
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "Destructor called for " << name << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << name << " is now in Gate Keeper mode." << std::endl;
}

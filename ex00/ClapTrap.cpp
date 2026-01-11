#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name), hit_Point(10), energy_Point(10), attack_Damage(0) {
    std::cout << "Parameterized constructor called for " << name << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap& other) : name(other.name), hit_Point(other.hit_Point), energy_Point(other.energy_Point), attack_Damage(other.attack_Damage) {
    std::cout << "Copy constructor called for " << name << std::endl;
}


ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    if (this != &other) {
        name = other.name;
        hit_Point = other.hit_Point;
        energy_Point = other.energy_Point;
        attack_Damage = other.attack_Damage;
    }
    std::cout << "Assignment operator called for " << name << std::endl;
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor called for " << name << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (energy_Point > 0 && hit_Point > 0) {
        energy_Point--;
        std::cout << "ClapTrap " << name << " attacks " << target  << ", causing " << attack_Damage << " points of damage!"  << std::endl;
    } else {
        std::cout << "ClapTrap " << name << " has insufficient energy or hit points to attack." << std::endl;
    }
}
void ClapTrap::takeDamage(unsigned int amount) {
    hit_Point -= amount;
    if (hit_Point < 0) hit_Point = 0;
    std::cout << "ClapTrap " << name << " takes " << amount
              << " points of damage! (Hit points left: " << hit_Point << ")" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount) {
    if (energy_Point > 0 && hit_Point > 0) {
        hit_Point += amount;
        energy_Point--;
        std::cout << "ClapTrap " << name << " is repaired by " << amount
                  << " points! (Hit points: " << hit_Point
                  << ", Energy left: " << energy_Point << ")" << std::endl;
    } else {
        std::cout << "ClapTrap " << name << " has insufficient energy or hit points to be repaired." << std::endl;
    }
}


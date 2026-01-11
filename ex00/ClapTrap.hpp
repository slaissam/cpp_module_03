# ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
private:
    std::string name;
    int hit_Point;
    int energy_Point;
    int attack_Damage;
public:
    ClapTrap(const ClapTrap& other);
    ClapTrap(std::string name);
    ClapTrap& operator=(const ClapTrap& other);
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

};

#endif
# ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
protected:
    std::string name;
    int hit_Point;
    int energy_Point;
    int attack_Damage;
public:
    ClapTrap(std::string name= "Default");
    ClapTrap& operator=(const ClapTrap& other);
    ~ClapTrap();
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

};

#endif
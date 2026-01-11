# ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include <iostream>

class FragTrap
{
protected:
    std::string name;
    int hit_Point;
    int energy_Point;
    int attack_Damage;
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap& operator=(const FragTrap& other);
    ~ClapTrap();

};

#endif
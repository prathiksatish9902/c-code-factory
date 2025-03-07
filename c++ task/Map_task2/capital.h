#ifndef CAPITAL_H
#define CAPITAL_H
#include <string>
#include <iostream>

class Capital
{
    std::string m_name;
public:
    Capital();
    Capital(std::string name);
    ~Capital();

    friend std::ostream& operator<<(std::ostream& os, Capital capital);
};

#endif // CAPITAL_H

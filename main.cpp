#include <iostream>

template<typename T>

int somme (T a, T& b, T& c)
{
    return a+b+c;
}

template<>
int somme<std::string>(std::string a, std::string &b, std::string &c)
{
    return ((a.size+b.size+c.size));
}

int main
{
    std::cout<< somme(12,25,34)<<std::endl;

    return 0;
}


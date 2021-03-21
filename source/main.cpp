#include <iostream>
#include "comb.h"
#include "arra.h"

long long setComb()
{
    int m, n;

    std::cout << "set n = ";
    std::cin >> n;

    std::cout << "set m = ";
    std::cin >> m;

    return comb(m, n);
}

long long setArra()
{
    int m, n;

    std::cout << "set n = ";
    std::cin >> n;

    std::cout << "set m = ";
    std::cin >> m;

    return arra(m, n);
}

void setValueToResult(long long &save, long long &value)
{
    int roadCode;
    std::cout << "+ or * ? (0,1)";
    std::cin >> roadCode;

    if(roadCode == 0)
    {
        save += value;
    }

    else
    {
        if(save == 0)
            save = 1;
        save *= value;
    }
}

int main()
{
    long long result{0};
    int m, n, roadCode;

    while(true)
    {
        std::cout << "A or C (0,1)";
        std::cin >> roadCode;
        switch (roadCode)
        {
        case 0: // A
            
            break;
        
        case 1: // C
            break;
        default:
            break;
        }
    }

    
}
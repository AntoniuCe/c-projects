#include <iostream>
#define LOG(x) std::cout << x << std::endl;
#include "functions.h"
#include <windows.h>

int main()
{
    LOG("My first calculator in C++");
    const char plus = '+';
    const char minus = '-';
    const char multiply = '*';
    const char divider = '/';
    const char equal = '=';
    char sign;
    float a, b , c;
    bool out = true;
    double result = 0;
    do 
    {
        LOG("Introdu un numar");
        std::cin >> a;
        LOG("Introdu un semn");
        std::cin >> sign;
        LOG("Introdu un numar");
        std::cin >> b;
        if (sign == plus)
        {
            result =+ Plus(a, b);
            LOG(result);
        }
        else if (sign == minus)
        {
            result =+ Minus(a, b);
            LOG(result);
        }
        else if (sign == multiply)
        {
            result =+ Power(a, b);
            LOG(result);
        }
        else if (sign == divider)
        {
            result =+ Divide(a, b);
            LOG(result);
        }
        for(int i = 0; out; i++)
        {
                LOG("Introdu un semn");
                std::cin >> sign;
                if (sign == plus || sign == minus || sign == multiply || sign == divider)
                {
                    LOG("Introdu un numar");
                    std::cin >> c;
                    if (sign == plus)
                    {
                        result = +Plus(double(result), c);
                        LOG("Rezultatul este: ");
                        LOG(result);
                    }
                    else if (sign == minus)
                    {
                        result = +Minus(double(result), c);
                        LOG("Rezultatul este: ");
                        LOG(result);
                    }
                    else if (sign == multiply)
                    {
                        result = +Power(double(result), c);
                        LOG("Rezultatul este: ");
                        LOG(result);
                    }
                    else if (sign == divider)
                    {
                        result = +Divide(double(result), c);
                        LOG("Rezultatul este: ");
                        LOG(result);
                    }
                }
                else if (sign == equal)
                {
                    LOG(result);
                    Sleep(1500);
                    out = false;
                }
    
        }
    } 
    while (out);
}
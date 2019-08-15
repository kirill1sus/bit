#include "bit.h"
#include <iostream>
#include <cmath>
using namespace std;

uint8_t transform(uint8_t x)
{
    uint8_t fin = 0;
    for (int i = 0 ; i < sizeof(x)*8  ; ++i )
    {
        if (x & (1 << i)) { fin |= 1 << (7-i); }
    }
    return fin;
}
void bit_format(uint8_t x)
{
    for (int i = sizeof(x)*8 - 1 ; i >= 0   ; --i )
    {
        if (x & (1 << i)) { cout << "1"; } else {cout << "0";}

        if ((i % 4)  == 0  and i!= 0 )
        {
            cout << " ";
        }
    }
}
void palindrome(uint8_t x)
{
    if (x == transform(x))
    {
        cout << "-palindrome" << endl;
    } else
    {
        cout << "-not palindrome" << endl;
    }
}

uint16_t transform(uint16_t x)
{
    uint16_t fin = 0;
    for (int i = 0 ; i < sizeof(x)*8  ; ++i )
    {
        if (x & (1 << i)) { fin |= 1 << (sizeof(x)*8 -1 -i); }
    }
    return fin;
}
void bit_format(uint16_t x)
{
    for (int i = sizeof(x)*8 - 1 ; i >= 0   ; --i )
    {
        if (x & (1 << i)) { cout << "1"; } else {cout << "0";}

        if ((i % 4)  == 0  and i!= 0 )
        {
            cout << " ";
        }
    }
}
void palindrome(uint16_t x)
{
    if (x == transform(x))
    {
        cout << (int) x << " <> ";
        bit_format(x);
        cout << "-palindrome" << endl;
    } else
    {
        cout << (int) x << " <> ";
        bit_format(x);
        cout << "-not palindrome" << endl;
    }
}

uint32_t transform(uint32_t x)
{
    uint32_t fin = 0;
    for (int i = 0 ; i < sizeof(x)*8  ; ++i )
    {
        if (x & (1 << i)) { fin |= 1 << (sizeof(x)*8 -1 -i); }
    }
    return fin;
}
void bit_format(uint32_t x)
{
    for (int i = sizeof(x)*8 - 1 ; i >= 0   ; --i )
    {
        if (x & (1 << i)) { cout << "1"; } else {cout << "0";}

        if ((i % 4)  == 0  and i!= 0 )
        {
            cout << " ";
        }
    }
}




void palindrome(uint32_t x)
{
    if (x == transform(x))
    {
        cout << (int) x << " <> ";
        bit_format(x);
        cout << "-palindrome" << endl;
    } else
    {
        cout << (int) x << " <> ";
        bit_format(x);
        cout << "-not palindrome" << endl;
    }
}

uint64_t transform(uint64_t x)
{
    uint64_t fin = 0;
    for (int i = 0 ; i < sizeof(x)*8  ; ++i )
    {
        if (x & (1 << i)) { fin |= 1 << (sizeof(x)*8 -1 -i); }
    }
    return fin;
}
void bit_format(uint64_t x)
{
    for (int i = sizeof(x)*8 - 1 ; i >= 0   ; --i )
    {
        if (x & (1 << i)) { cout << "1"; } else {cout << "0";}

        if ((i % 4)  == 0  and i!= 0 )
        {
            cout << " ";
        }
    }
}
void palindrome(uint64_t x)
{
    if (x == transform(x))
    {
        cout << (int) x << " <> ";
        bit_format(x);
        cout << "-palindrome" << endl;
    } else
    {
        cout << (int) x << " <> ";
        bit_format(x);
        cout << "-not palindrome" << endl;
    }
}

void hard_input(string str, uint8_t &fin)
{
    if (str.length() != sizeof(uint8_t) * 8)
    {
        fin = 0;
        return;
    }
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '1')
        {
            fin |= 1 << (sizeof(uint8_t) * 8 - 1 - i);
        } else if (str[i] == '0')
        {
            fin |= 0 << (sizeof(uint8_t) * 8 - 1 - i);
        } else
        {
            fin = 0;
            return;
        }
    }
}
void hard_input(string str, uint16_t &fin)
{
    if (str.length() != sizeof(uint16_t) * 8)
    {
        fin = 0;
        return;
    }
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '1')
        {
            fin |= 1 << (sizeof(uint16_t) * 8 - 1 - i);
        } else if (str[i] == '0')
        {
            fin |= 0 << (sizeof(uint16_t) * 8 - 1 - i);
        } else
        {
            fin = 0;
            return;
        }
    }
}
void hard_input(string str, uint32_t &fin)
{
    if (str.length() != sizeof(uint32_t) * 8)
    {
        fin = 0;
        return;
    }
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '1')
        {
            fin |= 1 << (sizeof(uint32_t) * 8 - 1 - i);
        } else if (str[i] == '0')
        {
            fin |= 0 << (sizeof(uint32_t) * 8 - 1 - i);
        } else
        {
            fin = 0;
            return;
        }
    }
}
void hard_input(string str, uint64_t &fin)
{
    if (str.length() != sizeof(uint64_t) * 8)
    {
        fin = 0;
        return;
    }
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '1')
        {
            fin |= 1 << (sizeof(uint64_t) * 8 - 1 - i);
        } else if (str[i] == '0')
        {
            fin |= 0 << (sizeof(uint64_t) * 8 - 1 - i);
        } else
        {
            fin = 0;
            return;
        }
    }
}


/*
uint8_t transform(uint8_t x)
{
    uint8_t fin = 0;
    uint8_t temp = 0;
    uint8_t Null = pow(2, sizeof(x) * 8) / 2;;

    for (int i = 0; i <= sizeof(x)*8 - 1 ; ++i)
    {
        temp = x << (sizeof(x)*8 - 1 - i);
        temp &= Null;
        temp >>= (0 + i);
        fin |= temp;
    }
    return fin;
}

 uint8_t transformHard(uint8_t x)
{
    uint8_t fin = 0;
    ////0000 000x   x000 0000
    if (x & (1 << 0)) { fin |= 1 << 7; }///x |= (1 << n);
    if (x & (1 << 1)) { fin |= 1 << 6; }
    if (x & (1 << 2)) { fin |= 1 << 5; }
    if (x & (1 << 3)) { fin |= 1 << 4; }
    if (x & (1 << 4)) { fin |= 1 << 3; }
    if (x & (1 << 5)) { fin |= 1 << 2; }
    if (x & (1 << 6)) { fin |= 1 << 1; }
    if (x & (1 << 7)) { fin |= 1 << 0; }
    return fin;
}

 void bit_format(uint8_t x)
{
    uint8_t mask = pow(2, sizeof(x) * 8) / 2;
    uint8_t temp = 0;
    for (int i = 0; i < sizeof(x) * 8; ++i)
    {
        temp = x;
        if ((i % 4)  == 0  and i!= 0 )
        {
            cout << " ";
        }
        if ((temp &= mask) == 0)
        {
            cout << "0";
        } else
        {
            cout << "1";
        }
        mask >>= 1;
    }
}


 */
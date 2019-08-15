#include <iostream>
#include <string>

using namespace std;

uint8_t transform(uint8_t x);

uint16_t transform(uint16_t x);

uint32_t transform(uint32_t x);

uint64_t transform(uint64_t x);

void bit_format(uint8_t x);

void bit_format(uint16_t x);

void bit_format(uint32_t x);

void bit_format(uint64_t x);

void palindrome(uint8_t x);

void palindrome(uint16_t x);

void palindrome(uint32_t x);

void palindrome(uint64_t x);

void hard_input(std::string str, uint8_t &fin);

void hard_input(std::string str, uint16_t &fin);

void hard_input(std::string str, uint32_t &fin);

void hard_input(std::string str, uint64_t &fin);

template<typename T>
T trans(T x)
{
    T fin = 0;
    for (int i = 0; i < sizeof(x) * 8; ++i)
    {
        if (x & (1 << i))
        { fin |= 1 << (7 - i); }
    }
    return fin;
}


template<typename T>
void palin(T x)
{
    if (x == trans(x))
    {
        cout << "-palindrome" << endl;
    } else
    {
        cout << "-not palindrome" << endl;
    }
}


template<typename T>
void format_bit(T x)
{
    for (int i = sizeof(x) * 8 - 1; i >= 0; --i)
    {
        if (x & (1 << i))
        { cout << "1"; }
        else
        { cout << "0"; }

        if ((i % 4) == 0 and i != 0)
        {
            cout << " ";
        }
    }
}

template <typename T>
void input (string str, T &fin)
{
    if (str.length() != sizeof(T) * 8)
    {
        fin = 0;
        return;
    }
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '1')
        {
            fin |= 1 << (sizeof(T) * 8 - 1 - i);
        } else if (str[i] == '0')
        {
            fin |= 0 << (sizeof(T) * 8 - 1 - i);
        } else
        {
            fin = 0;
            return;
        }
    }
}

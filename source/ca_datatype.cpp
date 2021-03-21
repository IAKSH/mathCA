#include "ca_datatype.hpp"
#include <climits>

ca::datatype::BigNum::BigNum()
{

}

ca::datatype::BigNum::~BigNum()
{

}

unsigned int ca::datatype::BigNum::getFullValueCount()
{
    if(values[values.size() - 1] != ULLONG_MAX)
    {
        return static_cast<unsigned int>(values.size() - 1);
    }

    return static_cast<unsigned int>(values.size());
}

const unsigned long long& ca::datatype::BigNum::accessLastBuffer()
{
    if(values.size() == getFullValueCount())
    {
        values.push_back(0);
    }

    return values[values.size() - 1];
}

ca::datatype::BigNum ca::datatype::BigNum::operator+(const BigNum& b)
{
    // TODO: BigNum::operator+
}

ca::datatype::BigNum ca::datatype::BigNum::operator-(const BigNum& b)
{
    // TODO: BigNum::operator-
}

ca::datatype::BigNum ca::datatype::BigNum::operator*(const BigNum& b)
{
    // TODO: BigNum::operator*
}

ca::datatype::BigNum ca::datatype::BigNum::operator/(const BigNum& b)
{
    // TODO: BigNum::operator/
}

void ca::datatype::BigNum::operator=(const BigNum& b)
{
    // TODO: BigNum::operator=
}

void ca::datatype::BigNum::operator+=(const BigNum& b)
{
    // TODO: BigNum::operator+=
}

void ca::datatype::BigNum::operator-=(const BigNum& b)
{
    // TODO: BigNum::operator-=
}

void ca::datatype::BigNum::operator*=(const BigNum& b)
{
    // TODO: BigNum::operator*=
}

void ca::datatype::BigNum::operator/=(const BigNum& b)
{
    // TODO: BigNum::operator/=
}

bool ca::datatype::BigNum::operator==(const BigNum& b)
{
    // TODO: BigNum::operator==
}

bool ca::datatype::BigNum::operator>(const BigNum& b)
{
    // TODO: BigNum::operator>
}

bool ca::datatype::BigNum::operator<(const BigNum& b)
{
    // TODO: BigNum::operator<
}

bool ca::datatype::BigNum::operator>=(const BigNum& b)
{
    // TODO: BigNum::operator>=
}

bool ca::datatype::BigNum::operator<=(const BigNum& b)
{
    // TODO: BigNum::operator<=
}

void ca::datatype::BigNum::operator++()
{
    // TODO: BigNum::operator++
}

void ca::datatype::BigNum::operator--()
{
    // TODO: BigNum::operator--
}
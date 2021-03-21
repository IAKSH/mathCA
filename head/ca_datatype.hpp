#pragma once

#include <vector>

namespace ca::datatype
{
    class BigNum
    {
    private:
        std::vector<unsigned long long> values;

    public:
        BigNum();
        ~BigNum();

        // 获取已满的缓冲区数目
        unsigned int getFullValueCount();
        // 访问最后一个缓冲区
        const unsigned long long& accessLastBuffer();

        BigNum operator+(const BigNum&);
        BigNum operator-(const BigNum&);
        BigNum operator*(const BigNum&);
        BigNum operator/(const BigNum&);

        void operator=(const BigNum&);
        void operator+=(const BigNum&);
        void operator-=(const BigNum&);
        void operator*=(const BigNum&);
        void operator/=(const BigNum&);

        bool operator==(const BigNum&);
        bool operator>(const BigNum&);
        bool operator<(const BigNum&);
        bool operator>=(const BigNum&);
        bool operator<=(const BigNum&);

        void operator++();
        void operator--();
    };
}

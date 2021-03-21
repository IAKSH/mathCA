#include "ca_math.hpp"
#include <stdexcept>

long long ca::math::factorial(long long num)
{
    if(num == 0)
        return 1;

    long long res{ 1 };
	while (num > 0)
	{
		res *= num;
		--num;
	}
	return res;
}

long long ca::math::arra(int m, int n) noexcept(false)
{
	if (m <= 0 || n <= 0)
	{
		throw std::invalid_argument("n or m is zero.");
	}

	if (m > n)
	{
		throw std::invalid_argument("m > n");
	}

	return factorial(n) / factorial(n - m);
}

long long ca::math::comb(int m, int n) noexcept(false)
{
	if (m <= 0 || n <= 0)
	{
		throw std::invalid_argument("n or m is zero.");
	}

	if (m > n)
	{
		throw std::invalid_argument("m > n");
	}

	return (factorial(n) / (factorial(m) * factorial(n - m)));
}
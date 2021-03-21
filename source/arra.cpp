#include "arra.h"
#include "mathext.h"
#include <stdexcept>
using std::out_of_range;

long long arra(int m, int n) noexcept(false)
{
	if (m <= 0 || n <= 0)
	{
		throw out_of_range("n or m is zero.");
	}

	return fact(n) / fact(n - m);
}
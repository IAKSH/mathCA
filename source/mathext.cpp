#include "mathext.h"

long long fact(long long num)
{
    if(num == 0)
        return 1;

    long long res{ 1 };
	while (num --> 0)
	{
		res *= num;
	}
	return res;
}
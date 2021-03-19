#include <iostream>


// 阶乘函数
float fact(float input)
{
	float res{ 1 };
	while (input --> 0)
	{
		res *= input;
	}
	return res;
}

// 组合数
float comb(int m, int n) throw(const char*)
{
	if (m <= 0 || n <= 0)
	{
		throw "n , m can't be zero!";
	}

	return (fact(n) / (fact(m) * fact(n - m)));
}
// 排列数
float arra(int m, int n) throw(const char*)
{
	if (m <= 0 || n <= 0)
	{
		throw "n , m can't be zero!";
	}

	return fact(n) / fact(n - m);
}

int main()
{
	int n, m;
	float res{ 0 };
	int roadCode;
	int opr;

	while (true)
	{
		std::cout << "Select +/-/* (1,2,3)\n";
		std::cin >> opr;
		std::cout << "Select road (0 = end , 1 = A , 2 = C)\n";
		std::cin >> roadCode;

		switch (roadCode)
		{
		case 0:
			std::cout << "result:\t" << res << std::endl;
			return 0;

		case 1:
			std::cin >> m;
			std::cin >> n;

			switch (opr)
			{
			case 1:
				res += roadCode == 1 ? arra(m, n) : comb(m, n);
				break;

			case 2:
				res -= roadCode == 1 ? arra(m, n) : comb(m, n);
				break;

			case 3:
				res *= roadCode == 1 ? arra(m, n) : comb(m, n);
				break;
			default:
				break;
			}

			system("cls");
			break;

		case 2:
			std::cin >> m;
			std::cin >> n;
			switch (opr)
			{
			case 1:
				res += roadCode == 1 ? arra(m, n) : comb(m, n);
				break;

			case 2:
				res -= roadCode == 1 ? arra(m, n) : comb(m, n);
				break;

			case 3:
				res *= roadCode == 1 ? arra(m, n) : comb(m, n);
				break;
			default:
				break;
			}
			system("cls");
			break;

		default:
			break;
		}
	}
}
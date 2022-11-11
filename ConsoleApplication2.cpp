#include <cmath>
#include <vector>
#include <iostream>

auto MakeSin(const double upLimit)
{
	constexpr double leftLimit = -4;
	constexpr double rightLimit = 4;
	std::vector<std::pair<double, double>> table;
	for (double x = leftLimit; x <= rightLimit; x++)
	{
		table.emplace_back(x, upLimit * sin(x));
		std::cout << x << ' ' << upLimit * sin(x) << '\n';
	}
	return table;
}

int main()
{
	MakeSin( 10);
}

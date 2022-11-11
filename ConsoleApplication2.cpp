#include <cmath>
#include <vector>
#include <iostream>

auto MakeSin(const double downLimit, const double upLimit, const double countOfDots)
{
	constexpr double leftLimit = -4;
	constexpr double rightLimit = 4;
	const double allSteps = abs(leftLimit) + abs(rightLimit) + 1;
	const double step = allSteps / countOfDots;
	std::vector<std::pair<double, double>> table;
	for (double x = leftLimit; x <= rightLimit; x += step)
	{
		table.emplace_back(x, upLimit * sin(x));
		std::cout << x << ' ' << upLimit * sin(x) << '\n';
	}
	return table;
}

int main()
{
	MakeSin(-10, 10, 9);
}

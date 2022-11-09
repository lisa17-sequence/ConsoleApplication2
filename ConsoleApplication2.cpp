#include <SFML/Graphics.hpp>
#include <cmath>
#include <iostream>
#include <set>
#include <string>
void MakeSin(int limit) {
	std::set < std::pair<double, double>> a;
	sf::RenderWindow window(sf::VideoMode(500, 500), "window");
	sf::CircleShape point(10.f);
	point.setFillColor(sf::Color::Red);
	int countOfDots = 361;

	while (window.isOpen()) {
		int x0 = 0;
		int y0 = 0;
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		for (double i = 0; i <= countOfDots; i = i + 30) {
			float x = i;
			float y = limit * sin(i * (6.284 / 360.0));

			float x1 = x0 + x;
			float y1 = y0 + y;

			a.insert({ x1, y1 });
			point.setPosition(x1, y1);
			window.draw(point);
		}
		window.display();
	}


	for (auto i : a) {
		std::cout << i.first << ' ' << i.second << '\n';
	}
}
int main() {
	
	MakeSin(10);
}



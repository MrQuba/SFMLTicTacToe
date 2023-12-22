#include <SFML/Graphics.hpp>
#include <iostream>
class Window {
public:
	Window(int sizeX, int sizeY, std::string title) {
		window.create(sf::VideoMode(sizeX, sizeY), title);
		window.setFramerateLimit(60);
	}
	~Window() {
		std::cout << "Destructed Window class object" << std::endl;
	}
	sf::Event event;
	sf::RenderWindow window;
};
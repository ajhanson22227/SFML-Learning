#pragma once

#include <SFML/Graphics.hpp>


class Game {
private:
	sf::RenderWindow *window;
	sf::Event event;

	sf::RectangleShape rect;


	void initWindow();
	void initShape();

public:

	Game();
	virtual ~Game();

	void updateSFMLEvents();
	void update();
	void render();
	void run();	
};
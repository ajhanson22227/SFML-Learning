#pragma once

#include <SFML/Graphics.hpp>
#include "Snake.h"


class Game {
private:
	sf::RenderWindow *window;
	sf::Event event;

	Snake snake;

	void initWindow();

public:

	Game();
	virtual ~Game();


	void updateSFMLEvents();
	void update();
	void render();
	void run();	
};
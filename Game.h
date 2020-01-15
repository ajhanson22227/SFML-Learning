#pragma once

#include <SFML/Graphics.hpp>
#include "Player.h"


class Game {
private:
	sf::RenderWindow *window;
	sf::Event event;

	Player player;

	void initWindow();

public:

	Game();
	virtual ~Game();


	void updateSFMLEvents();
	void update();
	void render();
	void run();	
};
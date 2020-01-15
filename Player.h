#pragma once
#include "Game.h"

class Player {
private:
	sf::RectangleShape playerBody;
	int height = 600;
	int width = 800;
	int moveDirection;

public:

	Player();
	~Player();

	void initPlayer();
	void movePlayer(int direction);
	void drawPlayer(sf::RenderTarget *target = nullptr);
};


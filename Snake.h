#pragma once
#include "Game.h"

class Snake {
private:
	sf::RectangleShape snakeBody;
	int height = 600;
	int width = 800;

public:

	Snake();
	~Snake();

	void initSnake();
	void moveSnake(int);
	void drawSnake(sf::RenderTarget *target);
	
};
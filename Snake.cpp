#include "Game.h"
#include "Snake.h"


Snake::Snake(){
	this->initSnake();
}

Snake::~Snake(){

}

void Snake::initSnake() 
{
	
	this->snakeBody.setSize(sf::Vector2f(15,15));
    this->snakeBody.setFillColor(sf::Color::White);

    sf::FloatRect textRect = this->snakeBody.getLocalBounds();
    this->snakeBody.setOrigin(textRect.left + textRect.width / 2.0f,
                    textRect.top + textRect.height / 2.0f);
    this->snakeBody.setPosition(sf::Vector2f(this->width/2.0f, this->height/2.0f));
}

void Snake::moveSnake(int direction) 
{
	//moves the snake body either left(-1) right(1) up(2) or down(-2)
	switch (direction){
		case -1:
			this->snakeBody.move(-15,0);
			break;
		case -2:
			this->snakeBody.move(0,15);
			break;
		case 1:
			this->snakeBody.move(15,0);
			break;
		case 2:
			this->snakeBody.move(0,-15);
			break;
	}
	
}



void Snake::drawSnake(sf::RenderTarget *target) 
{
	target->draw(snakeBody);
}
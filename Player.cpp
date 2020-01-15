#include "Game.h"

Player::Player(){
	this->initPlayer();
}

Player::~Player(){

}

void Player::initPlayer() 
{
	this->playerBody.setSize(sf::Vector2f(15,15));
    this->playerBody.setFillColor(sf::Color::White);

    sf::FloatRect textRect = this->playerBody.getLocalBounds();
    this->playerBody.setOrigin(textRect.left + textRect.width / 2.0f,
                    textRect.top + textRect.height / 2.0f);
    this->playerBody.setPosition(sf::Vector2f(this->width/2.0f, this->height/2.0f));
}

void Player::movePlayer(int direction) 
{
	/*
		1 W
		2 A
		3 S
		4 D
	*/
	switch(direction){
		case 1:
			if (this->playerBody.getPosition().y > 15)
				this->playerBody.move(0,-15);
			break;
		case 2:
			if (this->playerBody.getPosition().x >= 15)
				this->playerBody.move(-15,0);
			break;
		case 3:
			if (this->playerBody.getPosition().y < this->height - 15 )
				this->playerBody.move(0,15);
			break;
		case 4:
			if (this->playerBody.getPosition().x < this->width - 15)
				this->playerBody.move(15,0);
			break;
		default:
			break;

	}
}

void Player::drawPlayer(sf::RenderTarget *target) 
{
	target->draw(playerBody);
}
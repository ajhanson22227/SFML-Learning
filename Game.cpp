#include "Game.h"

void Game::initWindow() 
{
	this->window = new sf::RenderWindow(sf::VideoMode(800,600), "A Window Appears!", sf::Style::Close);
	this->window->setFramerateLimit(60);

}


Game::Game(){
	this->initWindow();
	this->player = Player();
}

Game::~Game(){
	delete this->window;
}

void Game::update() 
{
	this->updateSFMLEvents();
}

void Game::updateSFMLEvents() 
{
	while (this->window->pollEvent(this->event)){
		switch(this->event.type){
			case sf::Event::Closed:
				this->window->close();
				break;
			case sf::Event::KeyPressed:
				if (this->event.key.code == sf::Keyboard::Escape)
					this->window->close();
				if (this->event.key.code == sf::Keyboard::W)
					this->player.movePlayer(1);
				if (this->event.key.code == sf::Keyboard::A)
					this->player.movePlayer(2);
				if (this->event.key.code == sf::Keyboard::S)
					this->player.movePlayer(3);
				if (this->event.key.code == sf::Keyboard::D)
					this->player.movePlayer(4);
		}
	}
}

void Game::render() 
{
	this->window->clear(sf::Color::Black);
	this->player.drawPlayer(this->window);
	this->window->display();
}

void Game::run() 
{
	while (this->window->isOpen()){
		this->update();
		this->render();
	}
}
#include "Game.h"

void Game::initWindow() 
{
	this->window = new sf::RenderWindow(sf::VideoMode(800,600), "A Window Appears!", sf::Style::Close);
	this->window->setFramerateLimit(60);

}


Game::Game(){
	this->initWindow();
	this->snake = Snake();
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
					this->snake.moveSnake(2);
				if (this->event.key.code == sf::Keyboard::A)
					this->snake.moveSnake(-1);
				if (this->event.key.code == sf::Keyboard::S)
					this->snake.moveSnake(-2);
				if (this->event.key.code == sf::Keyboard::D)
					this->snake.moveSnake(1);				
				break;
		}
	}
}

void Game::render() 
{
	this->window->clear(sf::Color::Black);
	this->snake.drawSnake(this->window);
	this->window->display();
}

void Game::run() 
{
	while (this->window->isOpen()){
		this->update();
		this->render();
	}
}
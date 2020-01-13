#include "Game.h"

void Game::initWindow() 
{
	this->window = new sf::RenderWindow(sf::VideoMode(800,600), "A Window Appears!");
	this->window->setFramerateLimit(60);
}

void Game::initShape() 
{
	int width = 800;
	int height = 600;
	this->rect.setSize(sf::Vector2f(15,15));
    this->rect.setFillColor(sf::Color::White);

    sf::FloatRect textRect = rect.getLocalBounds();
    this->rect.setOrigin(textRect.left + textRect.width / 2.0f,
                    textRect.top + textRect.height / 2.0f);
    this->rect.setPosition(sf::Vector2f(width/2.0f, height/2.0f));
}

Game::Game(){
	this->initWindow();
	this->initShape();
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
				break;
		}
	}
}

void Game::render() 
{
	this->window->clear(sf::Color::Black);
	this->window->draw(this->rect);

	this->window->display();
}

void Game::run() 
{
	while (this->window->isOpen()){
		this->update();
		this->render();
	}
}
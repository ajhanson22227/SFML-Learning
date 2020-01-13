#include "Game.h"

int main()
{
	// int width = 800;
	// int height = 600;
 //    sf::RenderWindow window(sf::VideoMode(width, height), "SFML works!");
 //    window.setFramerateLimit(30);

    
 //    sf::RectangleShape rect;
 //    rect.setSize(sf::Vector2f(15,15));
 //    rect.setFillColor(sf::Color::White);

 //    sf::FloatRect textRect = rect.getLocalBounds();
 //    rect.setOrigin(textRect.left + textRect.width / 2.0f,
 //                    textRect.top + textRect.height / 2.0f);
 //    rect.setPosition(sf::Vector2f(width/2.0f, height/2.0f));

 //    while (window.isOpen())
 //    {
 //        sf::Event event;
 //        while (window.pollEvent(event))
 //        {
 //            switch(event.type){
 //            	case sf::Event::Closed:
 //            		window.close();
 //            		break;
 //            	case sf::Event::KeyPressed:
 //            		if (event.key.code == sf::Keyboard::Escape)
 //            			window.close();
 //                    if (event.key.code == sf::Keyboard::W){
 //                        rect.move(0,-15);
 //                    }
 //                    if (event.key.code == sf::Keyboard::S){
 //                        rect.move(0,15);
 //                    }
 //                    if (event.key.code == sf::Keyboard::A){
 //                        rect.move(-15,0);
 //                    }
 //                    if (event.key.code == sf::Keyboard::D){
 //                        rect.move(15,0);
 //                    }
 //            		break;
 //            }
 //        }

 //        window.clear(sf::Color::Black);
 //        window.draw(rect);
 //        window.display();
 //    }
    Game game;
    game.run();

    return 0;
}
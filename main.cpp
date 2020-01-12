#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");



    sf::Font font;
    font.loadFromFile("fonts/old_school_united_regular.ttf");

    sf::Text text;
    text.setFont(font);
    text.setString("HELLO WORLD");
    text.setCharacterSize(24);
    text.setFillColor(sf::Color::Red);

    sf::FloatRect textRect = text.getLocalBounds();
    text.setOrigin(textRect.left + textRect.width / 2.0f,
    				textRect.top + textRect.height / 2.0f);
    text.setPosition(sf::Vector2f(200/2.0f, 200/2.0f));

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            switch(event.type){
            	case sf::Event::Closed:
            		window.close();
            		break;
            	case sf::Event::KeyPressed:
            		if (event.key.code == sf::Keyboard::Escape)
            			window.close();
            		break;

            }
        }

        window.clear(sf::Color::Cyan);
        window.draw(text);
        window.display();
    }

    return 0;
}
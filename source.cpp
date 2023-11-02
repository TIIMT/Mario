#include "stdafx.h"

void initMusicStart()
{
    sf::Music music;

    if (!music.openFromFile("sounds/music/level1.ogg"))
    {

        throw std::logic_error{"music doesn't connecting level1.ogg"};
    }

    music.play();
}

void analyzeThrow()
{
    try {
        throw;
    }
    catch (const std::exception& exception) {
        std::cerr << "Error " << exception.what() << std::endl;
    }
}

int main()
{
    try {
        initMusicStart();
    }
    catch (const std::exception&) {
        analyzeThrow();
    }

    Mario mario;

    sf::RenderWindow window(sf::VideoMode(800, 800), "SFML works!");

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed) { window.close(); }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) { mario.setFreeFall(-5.f); }

        if ((sf::Keyboard::isKeyPressed(sf::Keyboard::A) || sf::Keyboard::isKeyPressed(sf::Keyboard::Left)))  { mario.sprite().move(-0.1, 0); }
        if ((sf::Keyboard::isKeyPressed(sf::Keyboard::D) || sf::Keyboard::isKeyPressed(sf::Keyboard::Right))) { mario.sprite().move(0.1, 0);  }

        window.clear(sf::Color(78, 173, 245));

        window.draw(mario.sprite());

        window.display();

        sf::sleep(sf::microseconds(10));
    }

    return 0;
}

/*
void gravityMario(Mario& mario, const sf::RenderWindow& window)
{
    while (window.isOpen()) {
        std::cout << mario.FreeFall() << std::endl;

        mario.getSprite().move(0, mario.FreeFall());

        if ((mario.getSprite().getPosition().y + mario.getSprite().getLocalBounds().height) < 800) {
            if (mario.FreeFall() < maxGravity) {
                mario.FreeFall() += 0.1;
            }
        }
        else if ((mario.getSprite().getPosition().y + mario.getSprite().getLocalBounds().height) > 800 && mario.FreeFall() != 0) {
            mario.FreeFall() = 0;
        }

        sf::sleep(sf::milliseconds(10));
    }
}
*/
#include "Game.h"
#include <SFML\Graphics.hpp>

using namespace sf;

Game::Game()
{
}

void Game::Start()
{
	
	Window.create(sf::VideoMode(800, 600), "And yet people bought BRINK");

	//window.setVerticalSyncEnabled(true); // v-sync, call it once, after creating the window
	Window.setFramerateLimit(60); 

	while (Window.isOpen())
    {
        Event event;
        while (Window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                Window.close();

        }

		
		Update (GameClock.restart().asSeconds());
        Window.clear();
		Draw ();
        Window.display();
    }
}

void Game::Update (float dt)
{
	Absol.Update(dt);
	Bullet1.Update(dt);
	Bullet1.Graphic.setFillColor(sf::Color::Magenta);
}

void Game::Draw ()
{
	Absol.Draw(Window);
	Bullet1.Draw(Window);
}
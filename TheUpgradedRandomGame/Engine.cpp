#include "stdafx.h"
#include "Engine.h"

Engine::Engine()
{

}

void Engine::Initialize()
{
	sf::ContextSettings settings;
	settings.antialiasingLevel = 8;
	m_xWindow = new sf::RenderWindow(sf::VideoMode(1920, 1080), "Upgrade Game", sf::Style::Default, settings);
	m_xWindow->setFramerateLimit(60);
	m_xWindow->setVerticalSyncEnabled(true);
}

bool Engine::Run()
{
	std::cout << "RUNNING" << std::endl;

	while (m_xWindow->isOpen())
	{

		sf::Event event;

		while (m_xWindow->pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				m_xWindow->close();
			}

			if (event.key.code == sf::Keyboard::Escape)
			{
				m_xWindow->close();
			}

		}

		m_xWindow->clear();

		m_xWindow->display();
	}

	return true;
}

void Engine::Cleanup()
{

}

/*
*
*  Get methods
*/
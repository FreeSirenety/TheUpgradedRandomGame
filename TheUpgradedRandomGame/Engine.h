#pragma once

#include "stdafx.h"

class Engine
{
public:
	Engine();

	void Initialize();

	bool Run();

	void Cleanup();

	sf::RenderWindow *GetWindow();

private:
	sf::RenderWindow *m_xWindow;

};
// TheUpgradedRandomGame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Engine.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Engine *engine = new Engine();

	engine->Initialize();

	while (engine->Run())
	{

	}

	engine->Cleanup();

	return 0;
}


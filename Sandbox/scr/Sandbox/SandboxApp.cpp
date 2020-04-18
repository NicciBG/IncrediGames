#include "IncrediGames.h"

class Sandbox : public nIncrediEngine::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

nIncrediEngine::Application* nIncrediEngine::CreateApplication()
{
	return new Sandbox();
}
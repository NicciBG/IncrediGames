#include "IncrediGames.h"

class Sandbox : public Tometo::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Tometo::Application* Tometo::CreateApplication()
{
	return new Sandbox();
}
#pragma once
#include "Core.h"

namespace nIncrediEngine
{
	class T_API Application
	{
	public:
		Application();
		virtual ~Application();
		int Run();
	};

	//To be defined in Client
	Application* CreateApplication();
}
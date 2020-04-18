#pragma once

#ifdef IG_PLATFORM_WINDOWS

extern nIncrediEngine::Application* nIncrediEngine::CreateApplication();

int main(int argc, char** argv)
{
	auto app = nIncrediEngine::CreateApplication();
	app->Run();
	delete app;
}
#endif

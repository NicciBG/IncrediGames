#pragma once

#ifdef IG_PLATFORM_WINDOWS

extern Tometo::Application* Tometo::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Tometo::CreateApplication();
	app->Run();
	delete app;
}
#endif

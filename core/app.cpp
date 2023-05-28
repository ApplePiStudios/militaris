#include <militaris/app.hpp>
#include <iostream>

#define SDL_ASSERT "always_ignore"
App::App(std::string name) : wnd{ Vec2{ 800, 580 }, name, ColorData{255, 100, 100, 255} } {}

void App::run()
{
	while (true)
	{
		if (!wnd.update())
		{
			break;
		}
	}
	wnd.kill();
}
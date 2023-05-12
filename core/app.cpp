#include <militaris/app.hpp>

#define SDL_ASSERT "always_ignore"
App::App(std::string name) : wnd{ Vec2{ 800, 580 }, name, ColorData{} } {}

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
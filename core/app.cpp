#include <militaris/app.hpp>

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
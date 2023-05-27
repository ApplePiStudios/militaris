#include "include/militaris/core/input.hpp"

bool keydown(WindowClass x, SDL_Keycode y)
{
	if (x.m_event.key.keysym.sym == y && x.m_event.type == SDL_EVENT_KEY_DOWN)
	{
		return true;
	}
	else
	{
		return false;
	}
}
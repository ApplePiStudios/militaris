#include "include/militaris/core/input.hpp"

bool keydown(WindowClass x, SDL_Keycode y)
{
	if (x.m_keys[y] == 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
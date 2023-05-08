#pragma once
#include <SDL3/SDL.h>
#include <string>
#include <militiaris/types.hpp>

class WindowClass
{
private:
	void init();
	bool m_fullscreen = false;
	Vec2 m_size;
	std::string m_title;
	SDL_Window* m_window = nullptr;
	SDL_Renderer* m_renderer = nullptr;
	SDL_Event m_event;
	ColorData m_color;
	SDL_Keycode m_key = SDLK_UNKNOWN;
public:
	WindowClass(Vec2 size, std::string title, ColorData color);
	~WindowClass();
	SDL_Renderer* getRenderer();
	SDL_Keycode key();
	bool update();
	void kill();
};
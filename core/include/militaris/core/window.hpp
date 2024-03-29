#pragma once
#include <SDL3/SDL.h>
#include <string>
#include <militaris/types.hpp>

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
	const Uint8* m_keys;
	Uint64 m_lFrame = 0, m_cFrame = 0, m_delta = 0;
	friend bool keydown(WindowClass, SDL_Keycode);
public:
	WindowClass(Vec2 size, std::string title, ColorData color);
	~WindowClass();
	SDL_Renderer* getRenderer();
	bool update();
	void kill();
};
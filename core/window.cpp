#include <militaris/core/window.hpp>
#include <iostream>

WindowClass::WindowClass(Vec2 size, std::string title, ColorData color) : m_size{ size }, m_title{ title }, m_color{ color }
{
	init();
}

void WindowClass::init()
{
	SDL_Init(SDL_INIT_EVERYTHING);
	m_window = SDL_CreateWindow(m_title.c_str(), m_size.x, m_size.y, SDL_WINDOW_RESIZABLE | SDL_WINDOW_OPENGL);
	m_renderer = SDL_CreateRenderer(m_window, NULL, SDL_RENDERER_PRESENTVSYNC | SDL_RENDERER_ACCELERATED);
	m_keys = SDL_GetKeyboardState(NULL);
}

bool WindowClass::update()
{
	m_lFrame = SDL_GetTicks();
	SDL_SetWindowTitle(m_window, m_title.c_str());
	SDL_GetWindowSize(m_window, &m_size.x, &m_size.y);
	if (SDL_PollEvent(&m_event))
	{
		switch (m_event.type)
		{
		case SDL_EVENT_QUIT:
			return false;
			break;
		}
	}
	SDL_RenderClear(m_renderer);
	SDL_SetRenderDrawColor(m_renderer, m_color.r, m_color.g, m_color.b, m_color.a);
	SDL_RenderPresent(m_renderer);
	m_cFrame = SDL_GetTicks();
	m_delta = m_cFrame - m_lFrame;
	std::cout << "fps: " << 1000 % m_delta << "\n";
	return true;
}

WindowClass::~WindowClass()
{
	SDL_DestroyRenderer(m_renderer);
	SDL_DestroyWindow(m_window);
	SDL_Quit();
}

SDL_Renderer* WindowClass::getRenderer()
{
	return m_renderer;
}

void WindowClass::kill()
{
	delete this;
}
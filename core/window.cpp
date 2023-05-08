#include <militiaris/core/window.hpp>

WindowClass::WindowClass(Vec2 size, std::string title, ColorData color) : m_size{ size }, m_title{ title }, m_color{ color }
{
	init();
}

void WindowClass::init()
{
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_CreateWindowAndRenderer(m_size.x, m_size.y, SDL_WINDOW_RESIZABLE, &m_window, &m_renderer);
}

void WindowClass::update()
{
	SDL_SetWindowTitle(m_window, m_title.c_str());
	SDL_GetWindowSize(m_window, &m_size.x, &m_size.y);
	if (SDL_PollEvent(&m_event))
	{
		switch (m_event.type)
		{
		case SDL_EVENT_KEY_DOWN:
			m_key = m_event.key.keysym.sym;
			break;
		case SDL_EVENT_QUIT:
			delete this;
			break;
		}
	}
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

SDL_Keycode WindowClass::key()
{
	return m_key;
}
#pragma once
#include <militiaris/core/window.hpp>

class App
{
	WindowClass wnd;
public:
	App(std::string name);
	void run();
	std::string title;
};
#include <militaris/app.hpp>

class myApp : public App
{
public:
	myApp(std::string name) : App(name) {}
};

myApp app("hello");

int main()
{
	app.run();
	return 0;
}
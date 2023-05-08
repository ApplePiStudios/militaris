#include <militiaris/types.hpp>

Vec2 Vec2::operator-(Vec2 arg)
{
	return Vec2{ x - arg.x, y - arg.y };
}
Vec2 Vec2::operator+(Vec2 arg)
{
	return Vec2{ x + arg.x, y + arg.y };
}
Vec2 Vec2::operator/(Vec2 arg)
{
	return Vec2{ x / arg.x, y / arg.y };
}
Vec2 Vec2::operator*(Vec2 arg)
{
	return Vec2{ x * arg.x, y * arg.y };
}
void Vec2::operator+=(Vec2 arg)
{
	*this = Vec2{ this->x + arg.x, this->y + arg.y };
}
void Vec2::operator-=(Vec2 arg)
{
	*this = Vec2{ this->x - arg.x, this->y - arg.y };
}
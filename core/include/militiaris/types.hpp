#pragma once

typedef struct Vec2
{
	int x, y;
	Vec2 operator-(Vec2 arg);
	Vec2 operator+(Vec2 arg);
	Vec2 operator/(Vec2 arg);
	Vec2 operator*(Vec2 arg);
	void operator+=(Vec2 arg);
	void operator-=(Vec2 arg);
} Vec2;

class ScriptObj
{
public:
	virtual void update(float delta){}
	virtual void init(){}
};

class GameObj
{
public:
	Vec2 pos{ 0, 0 };
};

class ObjTemplate
{
public:
	Vec2 size{ 20, 20 };
	Vec2 offset{ 0, 0 };
	ObjTemplate(Vec2 arg_size, Vec2 arg_offset) : size{ arg_size }, offset{ arg_offset } {}
	ObjTemplate(){}
};

class StaticRigidBody : ObjTemplate
{
public:
	bool
		collision = true,
		immobile = false,
		gravity = true;
};

class BoxColliderRect : ObjTemplate
{
public:
	bool enabled = true;
};

struct ColorData
{
	unsigned char r = 255, g = 255, b = 255, a = 255;
};
#pragma once
#include <iostream>
#include <GLFW/glfw3.h>
#include <cmath>
#include <Vector.h>
class Ray {
public:
	Vector2 Origin;
	Vector2 Direction;
	double length;

	Ray(Vector2& t_origin, Vector2& direction);

	Vector2 Cast()
	{
		Vector2 dirnormal = Direction.Normalized();

	}
};
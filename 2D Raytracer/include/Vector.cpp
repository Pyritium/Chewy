#include "Vector.h"

Vector3::Vector3()
{
	X = 0.0f;
	Y = 0.0f;
	Z = 0.0f;
}

Vector3::Vector3(float t_X, float t_Y, float t_Z)
{
	X = t_X;
	Y = t_Y;
	Z = t_Z;
}

Vector2::Vector2()
{
	X = 0.0f;
	Y = 0.0f;
}

Vector2::Vector2(float t_X, float t_Y)
{
	X = t_X;
	Y = t_Y;
}

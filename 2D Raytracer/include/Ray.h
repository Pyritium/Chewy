#pragma once
#include <iostream>
#include <GLFW/glfw3.h>
#include <cmath>
#include <Vector.h>
class Ray {
public:
	Vector3 origin;
	Vector3 direction;

	
	Ray(Vector3& t_origin, Vector3& direction);
	
	void Cast()
	{

	}
};
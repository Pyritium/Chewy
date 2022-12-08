#pragma once
#include <iostream>
#include <GLFW/glfw3.h>
#include <Vector.h>
class Player {
public:
	Vector3 Position;
	Vector3 Orientation;

	Player() {
		glColor3f(1, 0, 0);
		glPointSize(10);
		glBegin(GL_POINTS);
		glVertex2f(Position.X, Position.Y);
		glEnd();
		glFlush();
	}


private:
	const int Acceleration = 1;


	void Move()
	{

	}

};
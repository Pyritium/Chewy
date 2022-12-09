#pragma once
#include <iostream>
#include <GLFW/glfw3.h>
#include <Vector.h>
class Player {
public:
	Vector2 Position;
	Vector2 Orientation;

	Player() {
		std::cout << "Created player: " << this << std::endl;
	}

	void Update(GLFWwindow* window)
	{
		glColor3f(0, 0, 1);
		glPointSize(10);
		glBegin(GL_POINTS);
		glVertex2f(Position.X, Position.Y);
		glEnd();
		glFlush();

		double CurrentTime = glfwGetTime();
		double DeltaTime = CurrentTime - PreviousTime;

		if (GLFW_PRESS)
		{
			if (glfwGetKey(window, GLFW_KEY_W))
			{
				Position.Y += AccelerationRate * (float)DeltaTime;
			}
			else if (glfwGetKey(window, GLFW_KEY_S))
			{
				Position.Y -= AccelerationRate * (float)DeltaTime;
			}

			if (glfwGetKey(window, GLFW_KEY_A))
			{
				Position.X -= AccelerationRate * (float)DeltaTime;
			}
			else if (glfwGetKey(window, GLFW_KEY_D))
			{
				Position.X += AccelerationRate * (float)DeltaTime;
			}
		}

		PreviousTime = CurrentTime;
	}
private:
	const float AccelerationRate = 1.0f;
	float Acceleration = 0.0f;

	double PreviousTime = 0.0;
};
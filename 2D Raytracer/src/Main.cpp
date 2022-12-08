#include <GLFW/glfw3.h>
#include <iostream>


void KeyDown(unsigned char key, int x, int y) {
    // This function is called whenever a key is pressed

    if (key == 'a') {
        // The 'a' key was pressed
        // Do something...
    }
};


int main()
{
    GLFWwindow* window;

    if (!glfwInit())
        return -1;

    window = glfwCreateWindow(640, 480, "Chewy", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    glfwMakeContextCurrent(window);



    while (!glfwWindowShouldClose(window))
    {
        glClear(GL_COLOR_BUFFER_BIT);
        
        glBegin(GL_POINTS);
        glVertex2f(-0.5, -0.5);
        glVertex2f(0.5, -0.5);
        glVertex2f(0, 0.5);
        glEnd();

        int state = glfwGetKey(window, GLFW_KEY_E);
        if (state == GLFW_PRESS)
        {
            std::cout << "Hello" << std::endl;
        }


        glFlush();

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}
#include <GLFW/glfw3.h>
#include <iostream>
#include <Player.h>

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
    //glfwSwapInterval(10);
    Player plr;

    while (!glfwWindowShouldClose(window))
    {
        
        glClear(GL_COLOR_BUFFER_BIT);
        glFlush();
       
        plr.Update(window);

        glfwSwapBuffers(window);
        glfwPollEvents();
    }

    glfwTerminate();
    return 0;
}
#include <iostream>

#include <glad/glad.h>
#include <GLFW/glfw3.h>


const unsigned int glWindowWidth = 800;
const unsigned int glWindowHeight = 600;


int main(int argc, char* argv[])
{
    // Initialize the GLFW
    if (!glfwInit())
    {
        std::cout << "Failed GLFW initialize!" << std::endl;
        return -1;
    }
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);


    // Create an OpenGL window
    GLFWwindow* pWindow = glfwCreateWindow(glWindowWidth, glWindowHeight, "OpenGL_Practic", NULL, NULL);
    if (!pWindow)
    {
        std::cout << "Failed to create OpenGL window!" << std::endl;
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(pWindow); // Make the window's context current


    // Load Glad
    if (!gladLoadGL())
    {
        std::cout << "Can't load Glad!" << std::endl;
        return -1;


    // Rendering cycle
    while (!glfwWindowShouldClose(pWindow))
    {
        // Rendering
        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);


        // Swap front and back buffers
        glfwSwapBuffers(pWindow);

        // Poll for and process events
        glfwPollEvents();
    }


    glfwTerminate();

    return 0;
}
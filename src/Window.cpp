#include "Window.hpp"
#include <GLFW/glfw3.h>
#include <stdexcept>

namespace Voyager
{

    Window::Window()
    {
        if (!glfwInit())
        {
            throw std::runtime_error("GLFW initialization failed");
        }

        m_window = glfwCreateWindow(640, 480, "VoyagerEngine", nullptr, nullptr);
        if (m_window == nullptr)
        {
            glfwTerminate();
            throw std::runtime_error("Window creation failed");
        }

        glfwMakeContextCurrent(m_window);
    }

    Window::~Window()
    {
        glfwDestroyWindow(m_window);
        glfwTerminate();
    }

    bool Window::windowIsOpen() const
    {
        return !glfwWindowShouldClose(m_window);
    }

    void Window::pollEvents()
    {
        glfwPollEvents();
    }

} // namespace Voyager
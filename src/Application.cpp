#include "Application.hpp"

#include <iostream>

namespace Voyager
{
    Application::Application() = default;
    Application::~Application() = default;

    void Application::run()
    {
        std::cout << "Welcome to VoyagerEngine!" << std::endl;

        while (m_window.windowIsOpen())
        {
            m_window.pollEvents();
        }
    }
} // namespace Voyager
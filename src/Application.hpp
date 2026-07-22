#pragma once

#include "Window.hpp"
namespace Voyager
{
    class Application
    {
      public:
        Application();
        ~Application();

        void run();

      private:
        Window m_window;
    };
} // namespace Voyager
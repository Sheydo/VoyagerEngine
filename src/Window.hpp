#pragma once

struct GLFWwindow;

namespace Voyager
{
    class Window
    {
      public:
        Window();
        ~Window();

        bool windowIsOpen() const;
        void pollEvents();

      private:
        GLFWwindow *m_window = nullptr;
    };
} // namespace Voyager
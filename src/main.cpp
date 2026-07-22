#include "Application.hpp"
#include <iostream>
#include <stdexcept>

int main()
{

    try
    {
        Voyager::Application app;
        app.run();
    }
    catch (const std::runtime_error &e)
    {

        std::cout << e.what() << '\n';
        return EXIT_FAILURE;
    }

    return 0;
}
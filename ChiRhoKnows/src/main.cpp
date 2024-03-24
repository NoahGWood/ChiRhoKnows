#include "ChiRhoKnows.h"

int main(int argc, char** argv)
{
    ChiRho::Logger::Init();
    ChiRho::Application* app = new ChiRho::Application();
    app->Run();
    delete app;
    return 0;
}
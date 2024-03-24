#include "pch.h"
#include "Application.h"

namespace ChiRho
{
    Application* Application::s_Instance=nullptr;
    ImGuiImpl* Application::s_ImGuiImplInstance=nullptr;

    Application::Application()
    {
        s_Instance = this;
        // log
        CR_CORE_TRACE("TEST INSTANCE");
        // Set up ImGui
        s_ImGuiImplInstance = new ImGuiImpl();
    }

    Application::~Application()
    {
        CR_CORE_TRACE("TEST INSTANCE");
        s_ImGuiImplInstance->Shutdown();
        delete s_ImGuiImplInstance;
    }

    void Application::Run()
    {
        CR_CORE_TRACE("TEST INSTANCE");
        s_ImGuiImplInstance->Render();
    }

}
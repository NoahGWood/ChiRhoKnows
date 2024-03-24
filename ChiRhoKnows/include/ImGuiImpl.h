#pragma once
#include <GLFW/glfw3.h>

namespace ChiRho
{
    class ImGuiImpl
    {
        private:
            GLFWwindow* m_Window;
        public:
            ImGuiImpl() { Init(); }
            ~ImGuiImpl() { Shutdown(); }
            void Init();
            void Shutdown();
            void Render();
    };
    static void glfw_error_callback(int error, const char* description);
}
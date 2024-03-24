#pragma once
#include "Base.h"
#include "ImGuiImpl.h"
namespace ChiRho
{
    class Application
    {
        public:
            Application();
            virtual ~Application();
            void Run();

            inline static Application& Get() { return *s_Instance; }
        private:
            static Application* s_Instance;
            static ImGuiImpl* s_ImGuiImplInstance;
    };

}
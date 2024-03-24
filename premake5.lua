workspace "ChiRhoKnows"
    architecture "x64"
    configurations
    {
        "Debug",
        "Release",
        "Dist"
    }

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

group "Dependencies"
    include "depends"
    include "Vendor/imgui"
    include "Vendor/tokenizers-cpp"

group ""

include "ChiRhoKnows"
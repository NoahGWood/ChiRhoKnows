project "TokenizersCPP"
    kind "StaticLib"
    language "C++"
    cppdialect "C++17"

    targetdir ("%{wks.location}/bin/" .. outputdir .. "/%{prj.name}")
	objdir ("%{wks.location}/build/" .. outputdir .. "/%{prj.name}")

    files
	{
		"tokenizers-cpp/include/tokenizers_c.h",
        "tokenizers-cpp/include/tokenizers_cpp.h",
		"tokenizers-cpp/src/*.h",
		"tokenizers-cpp/src/*.cc",
        "tokenizers-cpp/sentencepice/src/*.h",
        "tokenizers-cpp/sentencepice/src/*.cc"
	}

	includedirs
	{
		"tokenizers-cpp/",
		"tokenizers-cpp/include/",
		"tokenizers-cpp/msgpack/include/",
		"tokenizers-cpp/sentencepiece/src/",
	}
	filter "system:windows"
		systemversion "latest"
		cppdialect "C++17"
		staticruntime "On"

	filter "system:linux"
		pic "On"
		systemversion "latest"
		cppdialect "C++17"
		--staticruntime "On"

	filter "configurations:Debug"
		runtime "Debug"
		symbols "on"

	filter "configurations:Release"
		runtime "Release"
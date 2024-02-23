workspace "Prosenttilaskuri"
   configurations { "Debug", "Release" }

project "laskuri"
   kind "ConsoleApp"
   language "C++"
   files { "**.h", "**.cpp" }

   filter { "configurations:Debug" }
      defines { "DEBUG" }
      symbols "On"
      buildoptions { "-pedantic-errors", "-Wall", "-Weffc++", "-Wextra", "-Wconversion", "-Wsign-conversion" }

   filter { "configurations:Release" }
      defines { "NDEBUG" }
      optimize "On"
      buildoptions { "-pedantic-errors", "-Wall", "-Weffc++", "-Wextra", "-Wconversion", "-Wsign-conversion" }
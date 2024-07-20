//
// Created by happymonkey1 on 7/18/24.
//

// define `KB_CPP_BUILD_IMPLEMENTATION` in a single translation unit
#define KB_CPP_BUILD_IMPLEMENTATION
#include "kb_cpp_build.h"

auto main(int argc, char** argv) -> int {
    // Macro which lets subsequent builds detect if the build file has changed.
    // If detected, `kb-cppbuild` rebuilds itself before re-compiling the project
    KB_GO_REBUILD_URSELF(argc, argv);

    // Define constants such as the toolchain and platform
    kb::cppbuild::cppbuild_specification spec{
        .m_tool_chain = kb::cppbuild::tool_chain_t::gcc,
        .m_target_platform = kb::cppbuild::target_platform_t::linux,
        .m_build_directory = ".kb_cppbuild"
    };

    // Initialize `kb-cppbuild` based on the specification above
    kb::cppbuild::init(spec);

    // Define an executable specification, including the header and source files that should be included
    const kb::cppbuild::executable_specification demo_calc_executable_spec{
        .m_name = "demo-calc",
        .m_project_root = "examples/demo-calc/",
        // include directories are relative to the project root (specified above)
        .m_include_dirs = {
            "include/"
        },
        .m_search_lib_dirs = {},
        // include files are relative to any include directory
        .m_header_files = {
            "calculator.h"
        },
        .m_source_files = {
            "src/calculator.cpp",
            "src/entrypoint.cpp"
        },
        .m_static_libs = {},
    };

    // Create an executable file
    const auto result = kb::cppbuild::create_executable(demo_calc_executable_spec);

    // `kb-cppbuild` may return an error
    if (!result) {
        std::cerr << "Something went wrong!\n";
    }
}

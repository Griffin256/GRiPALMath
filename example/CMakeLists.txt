# Build the example executable
add_executable(MathApp main.cpp)
target_link_libraries(MathApp PRIVATE SimpleMath)

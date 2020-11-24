project(mul)

# Create a shared library
file(GLOB CPP_SOURCES src/*.cpp)
add_library(${PROJECT_NAME} SHARED ${CPP_SOURCES})

# Ensure clients can find the includes
target_include_directories(${PROJECT_NAME} PUBLIC include)

# What to install
install(TARGETS ${PROJECT_NAME}
  RUNTIME DESTINATION bin
  LIBRARY DESTINATION bin
  ARCHIVE DESTINATION bin
)
install(
  DIRECTORY include/${PROJECT_NAME} DESTINATION include
)

# Maybe build tests
if(BUILD_TESTING)
  add_subdirectory(tests)
endif()

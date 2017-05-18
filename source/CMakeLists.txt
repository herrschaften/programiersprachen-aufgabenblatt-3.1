# Build example
add_executable(example
  window.cpp
  glew.c
  example.cpp
  vec2.cpp
  mat2.cpp
  color.cpp
  box.cpp
  circle.cpp)
target_link_libraries(example
  glfw
  ${GLFW_LIBRARIES}
  nanovg
  ${OPENGL_LIBRARIES})
add_dependencies(example glfw nanovg ${COPY_BINARY})

# Build tests
add_executable(tests
  tests.cpp
  vec2.cpp
  mat2.cpp
  color.cpp
  box.cpp
  circle.cpp
  window.cpp
  glew.c
)
target_link_libraries(tests
  glfw
  ${GLFW_LIBRARIES}
  nanovg
  ${OPENGL_LIBRARIES}
)

# Build uhr
add_executable(uhr
  window.cpp
  glew.c
  uhr.cpp
  vec2.cpp
  mat2.cpp
  color.cpp
  box.cpp
  circle.cpp)
target_link_libraries(uhr
  glfw
  ${GLFW_LIBRARIES}
  nanovg
  ${OPENGL_LIBRARIES})
add_dependencies(uhr glfw nanovg ${COPY_BINARY})
project(0XXX___solution_template)

# Define a variable containing a list of source files for the project
file(GLOB_RECURSE HEADERS *.h)
file(GLOB_RECURSE CPPS *.cpp)

set(SRC ${HEADERS} ${CPPS})

add_executable(${PROJECT_NAME} ${SRC})
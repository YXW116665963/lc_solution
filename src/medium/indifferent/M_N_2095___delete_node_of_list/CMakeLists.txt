project(M_N_2095___delete_node_of_list)

# Define a variable containing a list of source files for the project
file(GLOB_RECURSE HEADERS *.h)
file(GLOB_RECURSE CPPS *.cpp)

set(SRC ${HEADERS} ${CPPS})

add_executable(${PROJECT_NAME} ${SRC})
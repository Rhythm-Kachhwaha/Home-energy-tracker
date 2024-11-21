cmake_minimum_required(VERSION 3.2)
project(HomeEnergyTracker)

set(CMAKE_CXX_STANDARD 17)

find_package(Qt5 COMPONENTS Widgets Charts REQUIRED)
find_package(Boost REQUIRED)
find_package(mongocxx REQUIRED)

add_executable(HomeEnergyTracker src/main.cpp src/EnergyTracker.cpp src/UserAuth.cpp src/GUI.cpp)

target_include_directories(HomeEnergyTracker PRIVATE ${Boost_INCLUDE_DIRS} ${mongocxx_INCLUDE_DIRS})
target_link_libraries(HomeEnergyTracker Qt5::Widgets Qt5::Charts mongocxx bsoncxx)

add_executable(PointsTests PointsTests.cxx)

target_include_directories(PointsTests PUBLIC ../../lib/2D_Algebra)
target_link_libraries(PointsTests PUBLIC 2DAlgebra)

add_test(NAME Points COMMAND PointsTests)

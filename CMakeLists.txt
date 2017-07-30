cmake_minimum_required(VERSION 3.7)
project(Ch01)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES Ch01/01-1/HelloWorld.cpp)
#set(SOURCE_FILES Ch01/01-1/SimpleAdder.cpp)
#set(SOURCE_FILES Ch01/01-1/BetweenAdder.cpp)
#set(SOURCE_FILES Ch01/01-1/StringIO.cpp)
#set(SOURCE_FILES Ch01/01-1/Question01-1-1.cpp)
#set(SOURCE_FILES Ch01/01-1/Question01-1-2.cpp)
#set(SOURCE_FILES Ch01/01-1/Question01-1-3.cpp)
#set(SOURCE_FILES Ch01/01-1/Question01-1-4.cpp)


#set(SOURCE_FILES Ch01/01-2/FunctionOverloading.cpp)
#set(SOURCE_FILES Ch01/01-2/Question01-2.cpp)


#set(SOURCE_FILES Ch01/01-3/DefaultValue1.cpp)
#set(SOURCE_FILES Ch01/01-3/DefaultValue2.cpp)
#set(SOURCE_FILES Ch01/01-3/DefaultValue3.cpp)
#set(SOURCE_FILES Ch01/01-3/Question01-3-1.cpp)
#set(SOURCE_FILES Ch01/01-3/Question01-3-2.cpp)


#set(SOURCE_FILES Ch01/01-4/InlineFunc.cpp)
#set(SOURCE_FILES Ch01/01-4/Template.cpp)


#set(SOURCE_FILES Ch01/01-5/NameSp1.cpp)
#set(SOURCE_FILES Ch01/01-5/NameSp2.cpp)
#set(SOURCE_FILES Ch01/01-5/NameSp3.cpp)
#set(SOURCE_FILES Ch01/01-5/NamespaceOverlap.cpp)
#set(SOURCE_FILES Ch01/01-5/Question01-4.h Ch01/01-5/Question01-4-declare.cpp Ch01/01-5/Question01-4.cpp)

#set(SOURCE_FILES Ch01/170730Exercise/Triangle.cpp)
#set(SOURCE_FILES Ch01/170730Exercise/HalfPyramid.cpp)
#set(SOURCE_FILES Ch01/170730Exercise/Pyramid.cpp)
set(SOURCE_FILES Ch01/170730Exercise/Diamond.cpp)


add_executable(Ch01 ${SOURCE_FILES})

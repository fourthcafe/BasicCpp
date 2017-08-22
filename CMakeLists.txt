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
#set(SOURCE_FILES Ch01/01-5/UsingDcl1.cpp)
#set(SOURCE_FILES Ch01/01-5/UsingDcl2.cpp)


#set(SOURCE_FILES Ch02/02-1/ConstKeyword.cpp)

#set(SOURCE_FILES Ch02/02-2/TrueAndFalse.cpp)
#set(SOURCE_FILES Ch02/02-2/DataTypeBool.cpp)

#set(SOURCE_FILES Ch02/02-3/Referen.cpp)
#set(SOURCE_FILES Ch02/02-3/RefArrElem.cpp)
#set(SOURCE_FILES Ch02/02-3/RefPtr.cpp)

#set(SOURCE_FILES Ch02/02-4/RefSwap.cpp)
#set(SOURCE_FILES Ch02/02-4/Call-By-Reference.cpp)
#set(SOURCE_FILES Ch02/02-4/Question02-1-1.cpp)
#set(SOURCE_FILES Ch02/02-4/Question02-1-3.cpp)
#set(SOURCE_FILES Ch02/02-4/RefReturnOne.cpp)
#set(SOURCE_FILES Ch02/02-4/RefReturnTwo.cpp)
#set(SOURCE_FILES Ch02/02-4/RefReturnThree.cpp)
#set(SOURCE_FILES Ch02/02-4/Question02-2.cpp)

#set(SOURCE_FILES Ch02/02-5/MemMalFree.cpp)
#set(SOURCE_FILES Ch02/02-5/NewDelete.cpp)
set(SOURCE_FILES Ch02/02-5/NewObject.cpp)



#set(SOURCE_FILES Exercise/Triangle.cpp)
#set(SOURCE_FILES Exercise/HalfPyramid.cpp)
#set(SOURCE_FILES Exercise/Pyramid.cpp)
#set(SOURCE_FILES Exercise/Diamond.cpp)
#set(SOURCE_FILES Exercise/PrimeNum.cpp)
#set(SOURCE_FILES Exercise/Fibonachi.cpp)
#set(SOURCE_FILES Exercise/CalcDigit.cpp)


#set(SOURCE_FILES OopProject/BankMain.cpp OopProject/Bank.h OopProject/Bank.cpp)


add_executable(Ch01 ${SOURCE_FILES})

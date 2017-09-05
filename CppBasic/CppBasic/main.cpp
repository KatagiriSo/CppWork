//
//  main.cpp
//  CppBasic
//
//  Created by KatagiriSo on 2017/08/14.
//  Copyright © 2017年 rodhos soft. All rights reserved.
//

#include <iostream>
#include <sstream>
#include <iomanip>
#include <fstream>
#include <string>
#include "Point.hpp"
#include "ColorType.hpp"
#include "NameSpaceTest.hpp"
#include "Man.hpp"
#include "basicVariable.hpp"
#include "streamUse.hpp"
#include "lambdaUse.hpp"
#include "FunctionalUse.hpp"
#include "RefUse.hpp"
#include "vectorUse.hpp"
#include "stringUse.hpp"
#include "iteratorUse.hpp"
#include "interfaceUse.hpp"




int main(int argc, const char * argv[]) {
    
    basicVariable();
    nameSpaceUse();
    streamUse();
    classUse();
    lambdaUse();
    functionalUse();
    refUse();
    vectorUse();
    stringUse();
    iteratorUse();
//    interfaceUse();
    
    return 0;
}


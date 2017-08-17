//
//  FunctionalUse.cpp
//  CppBasic
//
//  Created by KatagiriSo on 2017/08/17.
//  Copyright © 2017年 rodhos soft. All rights reserved.
//

#include "FunctionalUse.hpp"

namespace FunctionauUse {
    int add(int x);
    void echo(int x);

}

void functionalUse() {
    std::function<void(int)> f = FunctionauUse::echo;
    std::function<void(int)> f2 = FunctionauUse::add;
    f(3);
    f2(5);
}

void FunctionauUse::echo(int x) {
    
}

int FunctionauUse::add(int x) {
    return x+1;
}

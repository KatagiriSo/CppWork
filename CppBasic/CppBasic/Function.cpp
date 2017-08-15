//
//  Function.cpp
//  CppBasic
//
//  Created by katagiri on 2017/08/15.
//  Copyright © 2017年 rodhos soft. All rights reserved.
//

#include "Function.hpp"
#include <fstream>
#include <iostream>





int twice(int x) {
    return x * 2;
}

int twice(float x) {
    return x * 2;
}

int fc(int x) {
    return x+1000;
}

template <typename T>
void echo(T x) {
    std::cout << x << std::endl;
}

template <typename R, typename T1, typename T2>
R echo(T1 x, T2 y) {
    return static_cast<R>(x+y);
}

auto nfunc(int x) -> int {
    return x*10;
}

auto nfunc2(int x) -> decltype(x) {
    return x * 100;
}

inline int infunc(int x){
    return x+1;
}

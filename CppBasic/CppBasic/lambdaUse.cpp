//
//  lambdaUse.cpp
//  CppBasic
//
//  Created by KatagiriSo on 2017/08/17.
//  Copyright © 2017年 rodhos soft. All rights reserved.
//

#include "lambdaUse.hpp"
#include <iostream>
#include <sstream>
#include <iomanip>

void lambdaUse() {
    auto l = [](int x)->int {
        return x+3;
    };
    int x = l(5);
    
    // NG
//    auto l2 = [](int a)->int {
//        return x+10;
//    };
    
    // xをキャプチャ
    auto l2 = [x](int a)->int {
        return x+10;
    };
    
    // すべてキャプチャ
    auto l4 = [=](int a)->int {
        return x+10;
    };

    std::cout << x << std::endl;

}

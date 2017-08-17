//
//  basicVariable.cpp
//  CppBasic
//
//  Created by KatagiriSo on 2017/08/17.
//  Copyright © 2017年 rodhos soft. All rights reserved.
//

#include "basicVariable.hpp"
#include "ColorType.hpp"
#include "Point.hpp"
#include "NameSpaceTest.hpp"
#include <iostream>
#include <sstream>
#include <iomanip>
#include <fstream>

void basicVariable() {
    const int c = 10;
    
    // ref
    int r = 0;
    int& r2 = r;
    r2 = 100;
    std::cout << r << std::endl; // 100
    
    // 構造体
    Point p;
    p.x = 10;
    p.y = 10;
    std::cout << p.d2() <<std::endl;
    
    // enum
    // enum
    ColorType1 type1 = ColorType1::RED;
    ColorType2 type2 = ColorType2::RED;
    ColorType3 type3 = ColorType3::RED;
    
    ColorType1 type4 = RED;
    //    ColorType2 type5 = RED; できない
    //    ColorType3 type6 = RED; できない
    
    std::cout << type1 << std::endl;
    std::cout << static_cast<int>(type2) << std::endl;
    std::cout << static_cast<int>(type3) << std::endl;
    std::cout << type4 << std::endl;
    
    // auto 型推論
    auto x = "x";
    
    // 文字列
    std::string z = "ac";
    auto y = 3.0;
    auto z1 = z + z;
    auto z2 = x + z;
    auto z3 = z + x;
    std::string z5 = z.append(x); // acx
    std::string z6 = z.append(z); // acxacx
    
    z.empty();// empty check
    
    //auto z4 = x + x;　//できない。 const char*
    std::cout << x << std::endl;
    std::cout << y << std::endl;
    std::cout << z << std::endl; // acxacx
    std::cout << z5 << std::endl;// acx
    std::cout << z6 << std::endl;// acxacx
    
    // decltype
    int sample = 100;
    decltype(sample) sample2 = 200; // Type of sample2 is Int.
    decltype(getValue()) sample3 = 3.3;//  Type of sample3 is Int.
    std::cout << sample << sample2 << sample3 << std::endl;
    
    
    // escape
    std::string stresc = "a\nb\nc";
    std::string stresc2 = R"(a
    b
    c)";
    std::cout << stresc << std::endl;
    std::cout << stresc2 << std::endl;
    
    // null pointer
    int* a = nullptr;
    if (a == nullptr) {
        std::cout << "nullptr" << std::endl;
    }
}

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
#include "Point.hpp"
#include "ColorType.hpp"





int main(int argc, const char * argv[]) {
    
    // 文字出力
    std::cout << "Hello, World!\n";
    
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


    
    return 0;
}


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





int main(int argc, const char * argv[]) {
    
    // 文字出力
    std::cout << "Hello, World!\n";
    
    // 構造体
    Point p;
    p.x = 10;
    p.y = 10;
    std::cout << p.d2() <<std::endl;
    

    
    return 0;
}


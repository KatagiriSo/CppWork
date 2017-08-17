//
//  streamUse.cpp
//  CppBasic
//
//  Created by KatagiriSo on 2017/08/17.
//  Copyright © 2017年 rodhos soft. All rights reserved.
//

#include "streamUse.hpp"

#include <iostream>
#include <sstream>
#include <iomanip>
#include <fstream>

void streamUse() {
    // 文字出力
    std::cout << "Hello, World!\n";
    
    
    
    //  ostringstream
    std::ostringstream oss;
    oss << "hello" << "world" << std::endl;
    
    std::cout << oss.str() << std::endl;
    
    // istringstream
    std::istringstream inputstream("hoge 200 300.3");
    std::string s;
    int num;
    double d;
    inputstream >> s >> num >> d; // 順番に取り出している
    std::cout << "s=" << s << " num=" << num << " d=" << d << std::endl;
    
#if 0
    // cin
    std::cout << "input number" << std::endl;
    int x;
    std::cin >> x;
    std::cout << "x=" << x << std::endl;
#endif
    
#if 0
    // manipulator
    std::cout << "input string (size 3)" << std::endl;
    char ch[3];
    std::cin >> std::setw(sizeof(ch)) >> ch;
    std::cout << "ch=" << ch << std::endl; // endl is also manipulator
#endif
    
    // error
    std::cerr << "cerr!" << std::endl;
    std::clog << "clog!" << std::endl; // buffering


}

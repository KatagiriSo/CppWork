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





int main(int argc, const char * argv[]) {
    
    // 文字出力
    std::cout << "Hello, World!\n";
    
    const int c = 10;
    
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
    
    
    
    
    /// 名前空間
    auto v = getValue();
    auto v2 = spaceA::getValue();
    auto v3 = spaceA::specialB::getValue();
    auto v4 = spaceA::getUtilValue();
    
    using namespace spaceA;
    auto v5 = getUtilValue();
    
    /// alias
    namespace B = spaceA::specialB;
    auto b = B::getValue();

    std::cout << v << std::endl;
    std::cout << v2 << std::endl;
    std::cout << v3 << std::endl;
    std::cout << v4 << std::endl;
    
    auto max = spaceMAX::myMAX;
    auto max2 = myMAX2;
    
    std::cout << max << max2 << std::endl;


    /// クラス
    Man *man = new Man();
    man->hello();
    delete man;
    
    return 0;
}


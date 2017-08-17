//
//  NameSpaceTest.cpp
//  CppBasic
//
//  Created by KatagiriSo on 2017/08/15.
//  Copyright © 2017年 rodhos soft. All rights reserved.
//

#include "NameSpaceTest.hpp"
#include <iostream>
#include <sstream>
#include <iomanip>
#include <fstream>

void nameSpaceUse() {
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

}

double getValue() {
    return 2.0;
}

namespace spaceA {
    double getValue() {
        return 20.0;
    }
    
    
    namespace specialB {
        double getValue() {
            return 30;
        }
    }
    
    
    inline namespace Util {
        double getUtilValue() {
            return 50;
        }
    }
    
}



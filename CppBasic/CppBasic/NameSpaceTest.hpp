//
//  NameSpaceTest.hpp
//  CppBasic
//
//  Created by KatagiriSo on 2017/08/15.
//  Copyright © 2017年 rodhos soft. All rights reserved.
//

#ifndef NameSpaceTest_hpp
#define NameSpaceTest_hpp

#include <stdio.h>

#endif /* NameSpaceTest_hpp */

void nameSpaceUse();

double getValue();

namespace spaceA {
    double getValue();
    
    namespace specialB {
        double getValue();
    }
    
    inline namespace Util {
        double getUtilValue();
    }
}

namespace {
    const int myMAX2 = 100;
}

namespace spaceMAX {
    const int myMAX = 1000;
}

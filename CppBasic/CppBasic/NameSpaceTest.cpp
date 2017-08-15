//
//  NameSpaceTest.cpp
//  CppBasic
//
//  Created by KatagiriSo on 2017/08/15.
//  Copyright © 2017年 rodhos soft. All rights reserved.
//

#include "NameSpaceTest.hpp"

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



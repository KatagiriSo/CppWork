//
//  iteratorUse.cpp
//  CppBasic
//
//  Created by KatagiriSo on 2017/08/22.
//  Copyright © 2017年 rodhos soft. All rights reserved.
//

#include "iteratorUse.hpp"



void iteratorUse()
{
    Hoge h = {"hello"};
    for (const char& c : h) {
        printf("%c,", c);
    }
    
}

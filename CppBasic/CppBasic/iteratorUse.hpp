//
//  iteratorUse.hpp
//  CppBasic
//
//  Created by KatagiriSo on 2017/08/22.
//  Copyright © 2017年 rodhos soft. All rights reserved.
//

#ifndef iteratorUse_hpp
#define iteratorUse_hpp

#include <stdio.h>
#include <string.h>

void iteratorUse();

struct Iterator {
    const char *p;
    const char& operator*() { return *p; }
    Iterator& operator++() { ++p; return *this; };
    bool operator!=(const Iterator& v) { return p != v.p;}
};

struct Hoge {
    const char* s;
    Iterator begin() { return {s}; }
    Iterator end() { return {s + strlen(s)}; }
};


#endif /* iteratorUse_hpp */

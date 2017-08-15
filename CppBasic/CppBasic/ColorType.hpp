//
//  ColorType.hpp
//  CppBasic
//
//  Created by KatagiriSo on 2017/08/15.
//  Copyright © 2017年 rodhos soft. All rights reserved.
//

#ifndef ColorType_hpp
#define ColorType_hpp

#include <stdio.h>

enum ColorType1 : int {
    GREEN,RED,YELLOW
};

enum struct ColorType2 : int {
    GREEN,RED,YELLOW
};

/// enum structとenum class は同じ
enum class ColorType3 : int {
    GREEN,RED,YELLOW
};

#endif /* ColorType_hpp */

//
//  Function.hpp
//  CppBasic
//
//  Created by katagiri on 2017/08/15.
//  Copyright © 2017年 rodhos soft. All rights reserved.
//

#ifndef Function_hpp
#define Function_hpp

#include <stdio.h>

int twice(int x);
int twice(float x);
// float twice(int x); NF

// default
int fc(int x = 1000);

// template
template <typename T>
void echo(T x);

template <typename R, typename T1, typename T2>
R echo(T1 x, T2 y);

// new function def
auto nfunc(int x) -> int;
auto nfunc2(int x) -> decltype(x);

// inline
inline int infunc(int x);

#endif /* Function_hpp */

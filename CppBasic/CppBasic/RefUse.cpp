//
//  RefUse.cpp
//  CppBasic
//
//  Created by KatagiriSo on 2017/08/21.
//  Copyright © 2017年 rodhos soft. All rights reserved.
//

#include "RefUse.hpp"
#include <sstream>
#include <iostream>


void refAdd(int &x);
void pAdd(int *x);


void refUse() {
    
    // 参照
    int x = 1;
    int& r = x;// xの参照を取得
    r = 2; // xは2になる。
    // 参照はNULLを代入できない。
    
    // ポインタ
    int z = 1;
    int* p = &z;
    *p = 2; // zは2になる。
    
    int t = 10;
    refAdd(t); // tが11になる。
    pAdd(&t); // tが12になる。
    
    CPYCost *c = new CPYCost();
    c->x = 1000;
    
    CPYCost d;
    d.x = 2500;
    CPYCost &dd = d;
    CPYCost ddd = d;
    
    std::cout << ddd.x << std::endl;

    
         
}




void refAdd(int &x) {
    x++;
}

void pAdd(int *x) {
    (*x)++;
}

/// 書いてはみたものの実行できてない。
CPYCost& CPYCost::operator=(const CPYCost &rhs) {
    if (this != &rhs) {
        this->x = rhs.x;
    }
    return *this;
}

CPYCost::CPYCost() {
    
}

CPYCost::~CPYCost() {
    
}


//
//  Man.cpp
//  CppBasic
//
//  Created by KatagiriSo on 2017/08/15.
//  Copyright © 2017年 rodhos soft. All rights reserved.
//

#include "Man.hpp"

void Man::hello() {
    std::cout << "Hello, my name is " << this->name << std::endl;
    
}

void Man::util() {
    std::cout << "util" << std::endl;
    
}

Man::Man() : name("name"), age(0){
    //    commonNumber++;
}

Man::Man(std::string name) {
    this->name = name;
    age = 0;
    //    commonNumber++;
}

Man::~Man() {
    std::cout << "dec" << std::endl;
}

void hello(Man *m) {
    m->hello();
}

bool Man::operator==(const Man &rhs) const {
    return name == rhs.name;
}
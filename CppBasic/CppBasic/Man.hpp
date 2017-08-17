//
//  Man.hpp
//  CppBasic
//
//  Created by KatagiriSo on 2017/08/15.
//  Copyright © 2017年 rodhos soft. All rights reserved.
//

#ifndef Man_hpp
#define Man_hpp

#include <stdio.h>
#include <iostream>

void classUse();


// class
class Man {
    
public:
    void hello();
    
    Man(); // default constructer
    Man(std::string name);
    
    ~Man();
    
    //    static int commonNumber;
    bool operator==(const Man& rhs) const;
    
    inline bool operator!=(const Man& rhs) const {
        return !(*this == rhs);
    }
    
    
private:
    std::string name;
    int age;
    void util();
    int n = 10;
};


template <typename T>
class Poi {
public:
    void echo(T x);
};

#endif /* Man_hpp */

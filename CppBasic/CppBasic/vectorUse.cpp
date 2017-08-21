//
//  vectorUse.cpp
//  CppBasic
//
//  Created by KatagiriSo on 2017/08/21.
//  Copyright © 2017年 rodhos soft. All rights reserved.
//

#include "vectorUse.hpp"
#include <iostream>
#include <vector>

void vectorUse() {
    
    std::vector<int> v = {1,5,10,100};
    
    v[2] = 100;
    
    v.push_back(50);
    
    for (int x: v) {
        std::cout << x << std::endl;
    }
}

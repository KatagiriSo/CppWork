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
    
    /// もっと簡単に表示してしたい
    for (int x: v) {
        std::cout << x << std::endl;
    }
    
    std::vector<int> v2 = {1,3,2,5};
    
    /// +は使えないのだろうか。
    v2.insert(v2.end(), v.begin(), v.end());
    
    
    /// coutが面倒だ。。
    std::cout << "v2" << std::endl;

    for (int x: v2) {
        std::cout << x << std::endl;
    }

}

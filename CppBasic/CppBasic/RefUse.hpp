//
//  RefUse.hpp
//  CppBasic
//
//  Created by KatagiriSo on 2017/08/21.
//  Copyright © 2017年 rodhos soft. All rights reserved.
//

#ifndef RefUse_hpp
#define RefUse_hpp

#include <stdio.h>

void refUse();


// class
class CPYCost {
    
public:
    CPYCost();
    ~CPYCost();

    /// オブジェクトのコピー用の代入演算子
    CPYCost& operator=(const CPYCost& rhs);
    int x;
    
private:
};



#endif /* RefUse_hpp */

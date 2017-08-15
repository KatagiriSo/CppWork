//
//  filefunc.cpp
//  CppBasic
//
//  Created by KatagiriSo on 2017/08/15.
//  Copyright © 2017年 rodhos soft. All rights reserved.
//

#include "filefunc.hpp"

#include <iostream>
#include <fstream>


void fileSample() {
    // file
    std::ofstream ofs("test.txt");
    if (!ofs) {
        std::cerr << "[error]open file" << std::endl;
        std::exit(1);
    }
    ofs << "Hello, World\n123" << std::endl; // auto close
    
    std::ifstream ifs("test.txt");
    if (!ifs) {
        std::cerr << "[error]open file for ifstream." << std::endl;
        std::exit(1);
    }
    
    std::string bufstr;
    ifs >> bufstr;
    
    std::cout << bufstr << std::endl; //[note] output is Hello,
    
    
    std::ifstream ifs2("test.txt");
    if (!ifs2) {
        std::cerr << "[error]open file for ifstream." << std::endl;
        std::exit(1);
    }
    std::string bufstr2;
    getline(ifs2, bufstr2);
    std::cout << bufstr2 << std::endl; //[note] output is Hello, World
    
    getline(ifs2, bufstr2);
    std::cout << bufstr2 << std::endl; //[note] output is 123
    
    if (ifs2.eof()) {
        std::cout << "eof" << std::endl; //[note] output is 123
    }
}

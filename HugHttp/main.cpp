//
//  main.cpp
//  HugHttp
//
//  Created by Hughie on 2017/3/3.
//  Copyright © 2017年 Hughie. All rights reserved.
//

#include <iostream>
#include "HttpMessage.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    model::HttpMessage *tmpMsg = new model::HttpMessage();
    
    std::cout << tmpMsg <<std::endl;
    
    delete tmpMsg;
    tmpMsg = nullptr;
    
    std::cout << tmpMsg <<std::endl;

    return 0;
}

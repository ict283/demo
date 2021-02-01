//
//  Prime.h
//  demo
//
//  Created by Glenn Lum on 24/1/21.
//  Copyright © 2021 Glenn Lum. All rights reserved.
//

#ifndef Prime_h
#define Prime_h

#include <stdio.h>

const int DEFAULT_VALUE = 2;
class Prime
{
public:
    Prime();
    ~Prime();
    bool isPrime(const int n);
    bool setPrime(const int n);
    int getPrime();
    
//private: /* Comment out for unit test */
    int prime_num;
};
#endif /* Prime_h */

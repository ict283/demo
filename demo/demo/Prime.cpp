//
//  Prime.cpp
//  demo
//
//  Created by Glenn Lum on 24/1/21.
//  Copyright © 2021 Glenn Lum. All rights reserved.
//

#include "Prime.h"

Prime::Prime(){
    prime_num=DEFAULT_VALUE; 
}

Prime::~Prime(){}

bool Prime::isPrime(const int n){
    bool isPrime = true;
    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1 || n<0){
        isPrime = false;
    }else{
        for (int i = 2; i <= n / 2; ++i){
            if (n % i == 0){
                isPrime = false;
                break;
            }
        }
    }
    return isPrime;
}

bool Prime::setPrime(const int n){
    
    if(isPrime(n)){
        prime_num=n;
        return true;
    }
    else
        return false;
}

int Prime::getPrime(){
    return prime_num;
}



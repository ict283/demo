//
//  unit_test.cpp
//  demo
//
//  Created by Glenn Lum on 24/1/21.
//  Copyright © 2021 Glenn Lum. All rights reserved.
//

/*
Unit test file for Prime class.
Comment out 'Private' specifier in Prime.h to run tests.
*/

#include <stdio.h>
#include <iostream>
#include "Prime.h"

using namespace std;

void isPrime_test();
void setPrime_test();
void getPrime_test();

int main(void)
{
    isPrime_test();
    setPrime_test();
    getPrime_test();
}

void isPrime_test()
{
    int n;
    Prime obj;
    cout<<"[ isPrime Test ]"<<endl;
    n=-2;
    cout<<"INPUT= "<<n<<" | OUPUT= "<<obj.isPrime(n)<<endl;
    n=-1;
    cout<<"INPUT= "<<n<<" | OUPUT= "<<obj.isPrime(n)<<endl;
    n=0;
    cout<<"INPUT= "<<n<<" | OUPUT= "<<obj.isPrime(n)<<endl;
    n=1;
    cout<<"INPUT= "<<n<<" | OUPUT= "<<obj.isPrime(n)<<endl;
    n=2;
    cout<<"INPUT= "<<n<<" | OUPUT= "<<obj.isPrime(n)<<endl;
    n=3;
    cout<<"INPUT= "<<n<<" | OUPUT= "<<obj.isPrime(n)<<endl;
    n=4;
    cout<<"INPUT= "<<n<<" | OUPUT= "<<obj.isPrime(n)<<endl;
    n=11;
    cout<<"INPUT= "<<n<<" | OUPUT= "<<obj.isPrime(n)<<endl;
    n=109;
    cout<<"INPUT= "<<n<<" | OUPUT= "<<obj.isPrime(n)<<endl;
    cout<<"\n\n";
}

void setPrime_test()
{
    int n;
    Prime obj;
    cout<<"[ setPrime Test ]"<<endl;
    n=-2;
    cout<<"INPUT= "<<n<<" | OUPUT= "<<obj.setPrime(n)<<" | prime_num= "<<obj.prime_num<<endl;
    n=-1;
    cout<<"INPUT= "<<n<<" | OUPUT= "<<obj.setPrime(n)<<" | prime_num= "<<obj.prime_num<<endl;
    n=0;
    cout<<"INPUT= "<<n<<" | OUPUT= "<<obj.setPrime(n)<<" | prime_num= "<<obj.prime_num<<endl;
    n=1;
    cout<<"INPUT= "<<n<<" | OUPUT= "<<obj.setPrime(n)<<" | prime_num= "<<obj.prime_num<<endl;
    n=2;
    cout<<"INPUT= "<<n<<" | OUPUT= "<<obj.setPrime(n)<<" | prime_num= "<<obj.prime_num<<endl;
    n=3;
    cout<<"INPUT= "<<n<<" | OUPUT= "<<obj.setPrime(n)<<" | prime_num= "<<obj.prime_num<<endl;
    n=4;
    cout<<"INPUT= "<<n<<" | OUPUT= "<<obj.setPrime(n)<<" | prime_num= "<<obj.prime_num<<endl;
    n=11;
    cout<<"INPUT= "<<n<<" | OUPUT= "<<obj.setPrime(n)<<" | prime_num= "<<obj.prime_num<<endl;
    n=109;
    cout<<"INPUT= "<<n<<" | OUPUT= "<<obj.setPrime(n)<<" | prime_num= "<<obj.prime_num<<endl;
    cout<<"\n\n";
}

void getPrime_test()
{
    int n;
    Prime obj;
    cout<<"[ getPrime Test ]"<<endl;
    n=-2;
    obj.prime_num=n;//inject test value
    cout<<"INPUT= "<<n<<" | OUPUT= "<<obj.getPrime()<<endl;
    n=-1;
    obj.prime_num=n;
    cout<<"INPUT= "<<n<<" | OUPUT= "<<obj.getPrime()<<endl;
    n=0;
    obj.prime_num=n;
    cout<<"INPUT= "<<n<<" | OUPUT= "<<obj.getPrime()<<endl;
    n=1;
    obj.prime_num=n;
    cout<<"INPUT= "<<n<<" | OUPUT= "<<obj.getPrime()<<endl;
    n=2;
    obj.prime_num=n;
    cout<<"INPUT= "<<n<<" | OUPUT= "<<obj.getPrime()<<endl;
    n=3;
    obj.prime_num=n;
    cout<<"INPUT= "<<n<<" | OUPUT= "<<obj.getPrime()<<endl;
    n=4;
    obj.prime_num=n;
    cout<<"INPUT= "<<n<<" | OUPUT= "<<obj.getPrime()<<endl;
    n=11;
    obj.prime_num=n;
    cout<<"INPUT= "<<n<<" | OUPUT= "<<obj.getPrime()<<endl;
    n=109;
    obj.prime_num=n;
    cout<<"INPUT= "<<n<<" | OUPUT= "<<obj.getPrime()<<endl;
    cout<<"\n\n"; 
}


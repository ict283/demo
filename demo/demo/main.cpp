//
//  unit_test.cpp
//  demo
//
//  Created by Glenn Lum on 24/1/21.
//  Copyright © 2021 Glenn Lum. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "Objects/Person.h"
#include "Objects/Prime.h"
#include "IO.h"

using namespace std;

int main(void)
{
    IO util; //initialise IO
    bool result;
    
    Person aPerson;
    result = util.personReader("person_in.txt", aPerson);
    cout<<"personReader = "<<result<<endl; //debug
    
    result = util.personWriter("person_out.txt", aPerson);
    cout<<"personWriter = "<<result<<endl; //debug
    
    
    Prime aPrime;
    result = util.primeReader("rime_in.txt", aPrime);
    cout<<"primeReader = "<<result<<endl; //debug
    
    result = util.primeWriter("prime_out.txt", aPrime);
    cout<<"primeWriter = "<<result<<endl; //debug
    
    return 0;
}


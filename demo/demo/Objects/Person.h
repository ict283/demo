 //
 //  Person.h
 //  demo
 //
 //  Created by Glenn Lum on 24/1/21.
 //  Copyright © 2021 Glenn Lum. All rights reserved.
 //


 #ifndef PERSON_H
 #define PERSON_H

 #include <stdio.h>
 #include <iostream>

 using namespace std;

 class Person {
     
 public:
     Person();
     Person(string nm, int ag);
     ~Person();
     string getName() const;
     int getAge() const;
     void setName(string nm);
     void setAge(int ag);
     
 private:
     string name;
     int age;
 };


 #endif

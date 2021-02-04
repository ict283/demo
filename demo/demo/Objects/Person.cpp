 //
 //  Person.cpp
 //  demo
 //
 //  Created by Glenn Lum on 24/1/21.
 //  Copyright © 2021 Glenn Lum. All rights reserved.
 //

 #include "Person.h"

 Person::Person() {
     name="none";
     age=0;
 }

 Person::Person(string nm, int ag) {
     name=nm;
     age=ag;
 }

 Person::~Person(){}

 string Person::getName() const {
     return name;
 }

 int Person::getAge() const {
     return age;
 }

 void Person::setName(string nm) {
     name = nm;
 }

 void Person::setAge(int ag) {
     age = ag;
 }


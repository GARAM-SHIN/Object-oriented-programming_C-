#include <iostream>
#include "Person.h"
#include "Family.h"
using namespace std;

int main() {
    Family* simpson = new Family("Simpson", 3);   
    simpson->setName(0, "Mr. Simpson");    
    simpson->setName(1, "Mrs.Simpson");   
    simpson->setName(2, "Bart Simpson");   
    simpson->show();    
    delete simpson;   
}
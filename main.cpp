//
//  Created by Yuto Mori on 2019/03/09.
//  Copyright © 2019 Yuto Mori. All rights reserved.
//
#include <iostream>
#include "main.h"

using namespace std;

// ------------------------------------------------------------
template <class T>
CoordinateCalcurater<T>::CoordinateCalcurater(const CoordinateCalcurater &coord_cal) {
    x = coord_cal.x;
    y = coord_cal.y;
}
template <class T>
CoordinateCalcurater<T>& CoordinateCalcurater<T>::operator=(const CoordinateCalcurater<T> &coord_cal) {
    x = coord_cal.x;
    y = coord_cal.y;
    return *this;
}
template <class T>
CoordinateCalcurater<T> CoordinateCalcurater<T>::operator+(const CoordinateCalcurater<T> coord_cal) {
    CoordinateCalcurater tmp;
    tmp.x = x + coord_cal.x;
    tmp.y = y + coord_cal.y;
    return tmp;
}
template <class T>
CoordinateCalcurater<T> CoordinateCalcurater<T>::operator-(const CoordinateCalcurater<T> coord_cal) {
    CoordinateCalcurater tmp;
    tmp.x = x - coord_cal.x;
    tmp.y = y - coord_cal.y;
    return tmp;
}
template <class T>
CoordinateCalcurater<T> CoordinateCalcurater<T>::operator++() {
    x++;
    y++;
    return *this;
}
template <class T>
CoordinateCalcurater<T> CoordinateCalcurater<T>::operator++(int _) {
    CoordinateCalcurater tmp;
    x++;
    y++;
    return tmp;
}
template <class T>
void CoordinateCalcurater<T>::ValuePrinter() {
    cout << "(" << x << "," << y << ")" << endl;
}


// ------------------------------------------------------------
CoordinateName::CoordinateName(const CoordinateName& coord_name){
    delete pName;
    pName = new char[strlen(coord_name.pName) + 1];
    strcpy(pName, coord_name.pName);
}

CoordinateName& CoordinateName::operator=(const CoordinateName &coord_name){
    if (this != &coord_name){
        delete pName;
        pName = new char[strlen(coord_name.pName) + 1];
        strcpy(pName, coord_name.pName);
    }
    return *this;
}

void CoordinateName::setName(const char*_){
    delete pName;
    pName = new char[strlen(_) + 1];
    strcpy(pName, _);
}
void CoordinateName::NamePrinter(){
    cout << pName << endl;
}

// ------------------------------------------------------------
int main(void){
    /* CoordinateCalculater Test */ {
    /*
    // No argument
    CoordinateCalcurater<int> coord_cal;
    coord_cal.ValuePrinter();
    
    // With argument
    CoordinateCalcurater<int> coord_cal2(2,4);
    coord_cal2.ValuePrinter();
    
    // Copy Constructor
    CoordinateCalcurater<int> coord_cal3(coord_cal2);
    coord_cal3.ValuePrinter();
    coord_cal3.setX(4);
    coord_cal3.setY(8);
    coord_cal3.ValuePrinter();
    
    // Over load of assignment operator
    CoordinateCalcurater<int> coord_cal4;
    coord_cal4 = coord_cal3;
    coord_cal4.ValuePrinter();
    
    // add operator for instance
    CoordinateCalcurater<int> coord_cal5;
    coord_cal5 = coord_cal3 + coord_cal4 - coord_cal2;
    coord_cal5.ValuePrinter();
    
    coord_cal5++;
    coord_cal5.ValuePrinter();
    */
    }
    
    /* CoordinateName Test */ {
    CoordinateName coord_name1;
    coord_name1.setName("TestName");
    coord_name1.NamePrinter();
    
    CoordinateName coord_name2(coord_name1);
    coord_name2.NamePrinter();
    
    CoordinateName coord_name3;
    coord_name3 = coord_name2;
    coord_name3.NamePrinter();
    }
    
    return 0;
}

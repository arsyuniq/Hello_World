//
//  Created by Yuto Mori on 2019/03/09.
//  Copyright © 2019 Yuto Mori. All rights reserved.
//
#ifndef Main_h
#define Main_h

// Calculte (x, y) coordinate (Review C++)
template <class T>
class CoordinateCalcurater{
public:
    CoordinateCalcurater() : x(0), y(0) {}; // Constructor
    CoordinateCalcurater(T a, T b) : x(a), y(b) {};
    virtual ~CoordinateCalcurater(){};      // Destructor   // Nothing to do
    
    CoordinateCalcurater(const CoordinateCalcurater& coord_cal);    // Copy Constructor
    CoordinateCalcurater& operator=(const CoordinateCalcurater& coord_cal);  // Over load of =
    
    CoordinateCalcurater operator+(const CoordinateCalcurater coord_cal);   // Over load of +
    CoordinateCalcurater operator-(const CoordinateCalcurater coord_cal);   // Over load of -
    CoordinateCalcurater operator++();
    CoordinateCalcurater operator++(int _);
    
    void setX(const T _)
      { x = _; }
    void setY(const T _)
      { y = _; }
    T getX()
      { return x; }
    T getY()
      { return y; }
    void ValuePrinter();
    
private:
    T x, y;
};

class CoordinateName{
public:
    CoordinateName() : pName(nullptr){};
    virtual ~CoordinateName(){delete pName;}
    
    CoordinateName(const CoordinateName& coord_name);
    CoordinateName& operator=(const CoordinateName& coord_name);
    
    void setName(const char* _);
    char* getName()
      { return pName;}
    void NamePrinter();
    
private:
    char* pName;
};

#endif // Main_h



// Copy Constructor / argument referrence
// Over load Assignment Operator / argument & return referrence
// virtual destructor

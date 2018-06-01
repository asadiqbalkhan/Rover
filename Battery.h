/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Battery.h
 * Author: 4327098
 *
 * Created on October 31, 2017, 1:56 AM
 */

#ifndef BATTERY_H
#define BATTERY_H
using namespace std;
class Battery {
public:
    Battery();
    // Argumented constructor
    Battery(int charge);
    Battery(const Battery& orig);
    virtual ~Battery();
    // Getter for charge
    int get_Charge();
    // Method to use battery 
    void use_battery(int charge);
private:
    int _charge;

};

#endif /* BATTERY_H */


/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Device.h
 * Author: 4327098
 *
 * Created on October 31, 2017, 2:02 AM
 */

#ifndef DEVICE_H
#define DEVICE_H
#include "Battery.h"
#include <iostream>
using namespace std;

class Device {
public:
    Device();
    Device(const Device& orig);
    virtual ~Device();
    // Setter for Battery b
    void set_Battery(Battery* b);
    // Getter for Battery 
    Battery* get_Battery();
    // Pure virtual function 
    virtual void operate() = 0;
    virtual Device* clone() const = 0;
protected:
    Battery* _battery;
};

#endif /* DEVICE_H */


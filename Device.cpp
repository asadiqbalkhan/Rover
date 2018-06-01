/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Device.cpp
 * Author: 4327098
 * 
 * Created on October 31, 2017, 2:02 AM
 */

#include "Device.h"

Device::Device() {
}

Device::Device(const Device& orig) {
}

Device::~Device() {
}

Battery* Device::get_Battery(){
    return _battery;
}
void Device::set_Battery(Battery* b){
    _battery = b;
}


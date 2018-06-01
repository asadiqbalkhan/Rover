/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Battery.cpp
 * Author: 4327098
 * 
 * Created on October 31, 2017, 1:56 AM
 */

#include "Battery.h"

Battery::Battery() {
    
}

Battery::Battery(const Battery& orig) {
    
}

Battery::~Battery() {}

Battery::Battery(int charge){
    _charge = charge;
}

int Battery::get_Charge(){
    return _charge;
}

void Battery::use_battery(int charge){
    if(charge > _charge){
        throw "Not Enough Power!";
    }
    _charge -= charge;
}
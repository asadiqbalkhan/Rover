/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Rover.cpp
 * Author: 4327098
 * 
 * Created on October 31, 2017, 1:40 AM
 */

#include "Rover.h"
#include "Device.h"
#include "Battery.h"
using namespace std;
Rover::Rover() {
}

Rover::Rover(const Rover& orig) {
}

Rover::~Rover() {
}

int Rover::device_count() const{
    return _devices.size();
}

void Rover::attach_battery(Battery* b){
    _batteries.push_back(b);
}

void Rover::connect_battery(Device* d, Battery* b){
    d->set_Battery(b);
}

void Rover::disconnect_battery(Device* d){
    d->set_Battery(NULL);
}

void Rover::attach_device(Device* d){
    _devices.push_back(d);
    this->connect_battery(d, this->get_highest_battery());
}
void Rover::remove_device(Device* d){
    
    for(int i=0; i < _devices.size(); i++ ){
        if(_devices[i] == d){
            _devices.erase(_devices.begin() + i);
        }
    }
}

Battery* Rover::get_highest_battery(){
    int highest = 0;
    for(int i = 0; i<_batteries.size(); i++){
        if(_batteries[i]->get_Charge() > highest){
            highest = _batteries[i]-> get_Charge();
        }
    }
    
    for(int i = 0; i<_batteries.size(); i++){
        if(_batteries[i]->get_Charge() == highest){
            return _batteries[i];
        }
    }
}
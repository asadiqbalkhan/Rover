/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Rover.h
 * Author: 4327098
 *
 * Created on October 31, 2017, 1:40 AM
 */

#ifndef ROVER_H
#define ROVER_H
#include<vector>
#include"Device.h"
#include"Battery.h"
using namespace std;

class Rover {
public:
    Rover();
    Rover(const Rover& orig);
    virtual ~Rover();
    int device_count() const;
    // Method to attach battery 
    void attach_battery(Battery * b);
    // Getter for highest charge battery
    Battery* get_highest_battery();
    // Method to connect to battery and device
    void connect_battery(Device* d, Battery* b);
    // Method to disconnect device from batter
    void disconnect_battery(Device* d);
    // Method to attach device
    void attach_device(Device* d);
    // Method to remove device
    void remove_device(Device* d);
    // Method to call all devices to operate
    void operate_all();
private:
    vector<Device*> _devices;
    vector<Battery*> _batteries;

};

#endif /* ROVER_H */


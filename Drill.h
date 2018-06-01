/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Drill.h
 * Author: 4327098
 *
 * Created on October 31, 2017, 2:35 AM
 */

#ifndef DRILL_H
#define DRILL_H
#include"Device.h"
#include<iostream>
using namespace std;

class Drill : public Device {
public:
    Drill();
    Drill(const Drill& orig);
    Drill(bool safeyEnabled);
    virtual ~Drill();
    void operate();
private:
    bool _safetyEnabled;

};

#endif /* DRILL_H */


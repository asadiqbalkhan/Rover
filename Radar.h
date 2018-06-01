/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Radar.h
 * Author: 4327098
 *
 * Created on October 31, 2017, 2:18 AM
 */

#ifndef RADAR_H
#define RADAR_H
#include "Device.h"
#include<cstdlib>
#include<sstream>
using namespace std;
class Radar : public Device {
public:
    Radar();
    Radar(const Radar& orig);
    virtual ~Radar();
    void operate();
    virtual Device* clone() const{
       return new Radar(*this);
    }
private:

};

#endif /* RADAR_H */


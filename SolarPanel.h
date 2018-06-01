/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SolarPanel.h
 * Author: 4327098
 *
 * Created on October 31, 2017, 2:47 AM
 */

#ifndef SOLARPANEL_H
#define SOLARPANEL_H
#include "Device.h"
#include <iostream>
class SolarPanel : public Device{
public:
    SolarPanel();
    SolarPanel(const SolarPanel& orig);
    virtual ~SolarPanel();
    void operate();
    virtual Device* clone() const{
        return new SolarPanel(*this);
    }
private:

};

#endif /* SOLARPANEL_H */


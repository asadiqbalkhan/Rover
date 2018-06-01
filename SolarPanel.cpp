/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   SolarPanel.cpp
 * Author: 4327098
 * 
 * Created on October 31, 2017, 2:47 AM
 */

#include "SolarPanel.h"

SolarPanel::SolarPanel() {
}

SolarPanel::SolarPanel(const SolarPanel& orig) {
}

SolarPanel::~SolarPanel() {
}

void SolarPanel::operate(){
    if(_battery != NULL){
        _battery->use_battery(-1);
        cout<<"Solar Panel is charging!"<<endl;
    } else{
        cout<<"Solar Panel is not connected!"<<endl;
    }
}


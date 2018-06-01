/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Drill.cpp
 * Author: 4327098
 * 
 * Created on October 31, 2017, 2:35 AM
 */

#include "Drill.h"

Drill::Drill() {
    // Instantiate SE as false
    _safetyEnabled = false;
}

Drill::Drill(const Drill& orig) {
}

Drill::~Drill() {
}

Drill::Drill(bool safeyEnabled){
    
    _safetyEnabled = safeyEnabled;
    
}

void Drill::operate(){
    
    if(_safetyEnabled == false){
        if(_battery != NULL){
            _battery->use_battery(10);
            cout<<"VROOOMM!! VRAMM!!"<<endl;
                 }else{
                  cout<<"Drill is not connected!"<<endl;
               }
                     } else{
                       cout<<"Safety First!" << endl;
         }
   
}

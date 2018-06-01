/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Radar.cpp
 * Author: 4327098
 * 
 * Created on October 31, 2017, 2:18 AM
 */

#include "Radar.h"
using namespace std;
Radar::Radar() {
}

Radar::Radar(const Radar& orig) {
}

Radar::~Radar() {
}

void Radar::operate(){
    
    int random = rand()%3 + 1;
    
    if(_battery != NULL){
        _battery->use_battery(4);
        if(random == 4){
            cout<<"PING!";
        }else{
            cout<<"PONG!";
        }
    }else{
        cout<<"Radar is not connected"<<endl;
    }
    
}
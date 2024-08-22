/*
 * This file contains the Calculate Class,
 * use the public methods to perform calulations on sensor outputs
 */

#include<iostream>
#include<cmath>
#include"Recieve_Inputs.h"

#ifndef SENSOR_CALCULATION_H
#define SENSOR_CALCULATION_H

/**
 * Provides ability to carry out calulations on the sensor values,
 * Inherits from the Recieve Class
 */

class Calculate : public Recieve{
  public:
    /**
     *Constructor for the Calculate Class,
     *
     */
    Calculate();

    void numbers();
};

#endif

//EOF
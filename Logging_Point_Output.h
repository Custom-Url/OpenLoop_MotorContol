/*
 * This file contains the Output Class,
 * use the public methods to output data to a .csv file
 */

#include<iostream>
#include"Sensor_Calculation.h"

#ifndef LOGGING_POINT_OUTPUT_H
#define LOGGING_POINT_OUTPUT_H

/**
 * Provides ability to output data,
 * Inherits from the Calculate Class
 */

class Output : public Calculate{
  public:
    Output();

    void value();
};

#endif

//EOF
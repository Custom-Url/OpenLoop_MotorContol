#include <iostream>
#include "Variables.h"

  // Data Read From _StreamData .csv Files
  float data1 = 0;
  float data2 = 0, data2_prev = -1.0;
  float data3 = 0;

  // Variables for Sensor Calculations 
  float data1_conversion = 0;
  float data1_scale = 0;   
  float data2_conversion = 0;
  float data2_scale = 0;
  float data3_scale = 0;
  float sensor_fusion = 0;

  // Motor Output Variables
  float motorA = 0;
  float motorB = 0;

  //EOF
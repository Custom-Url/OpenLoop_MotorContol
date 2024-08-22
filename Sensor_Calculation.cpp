#include <iostream>
#include "Sensor_Calculation.h"
#include"Variables.h"


  Calculate::Calculate() : Recieve(){}

  void Calculate::numbers(){

    // Calulations Relating to data1
    data1_conversion = sqrt(data1)*2.0/3.0;       //Conversion
    data1_scale = 2.7 * (data1_conversion - 1.0); //Scaling

    // Calulations Relating to data2
    data2_conversion = (data2) - (data2_prev);    //Conversion
    data2_scale = 0.7 * (data2_conversion + 0.5); //Scaling
    data2_prev = data2;

    // Calulations Relating to data3
    data3_scale = (data3 - 0.2);                  //Scaling

    // Combining the Scaled Data to Produce Desired Triangular Waveform
    sensor_fusion = ((3.0 * (data1_scale - data3_scale)) / data2_scale) - 3.0;

    // Creates motorA Waveform
    if(sensor_fusion > 1.0){
      motorA = 1.0;               // Maximum Value of 1.0
    }
    else if(sensor_fusion < -1.0){
      motorA = -1.0;              // Minimim Value of -1.0
    }
    else{
      //motorA Waveform Matches sensor_fusion Waveform Between -1.0 and 1.0
      motorA = sensor_fusion;
    }

    // motorB Waveform is the Inverse of the motorA Waveform
    motorB = -motorA;
    }

  //EOF
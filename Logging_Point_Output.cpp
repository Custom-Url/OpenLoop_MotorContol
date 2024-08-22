#include <iostream>
#include "Logging_Point_Output.h"
#include "Logger.h"
#include "Control_Output.h"
#include"Variables.h"

Output::Output() : Calculate(){}

  //Creates Instances of the Logger Class
  Logger Log_Out1(Logger::LOG_POINT_A); 
  Logger Log_Out2(Logger::LOG_POINT_B);
  Logger Log_Out3(Logger::LOG_POINT_C);
  Logger Log_Out4(Logger::LOG_POINT_D);
  Logger Log_Out5(Logger::LOG_POINT_E);
  Logger Log_Out6(Logger::LOG_POINT_F);
  Control_Output Log_Out7;
  
void Output::value(){

  //Outputs Data to the .csv Files
  Log_Out1.log_value(data1_conversion);
  Log_Out2.log_value(data2_conversion);
  Log_Out3.log_value(data1_scale);
  Log_Out4.log_value(data2_scale);
  Log_Out5.log_value(data3_scale);
  Log_Out6.log_value(sensor_fusion);
  Log_Out7.set_output(motorA,motorB);
}

//EOF

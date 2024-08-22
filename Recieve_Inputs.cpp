#include<iostream>
#include"Sensor_Stream.h"
#include"Recieve_Inputs.h"
#include"Variables.h"

Recieve::Recieve(){}

  // Creates Instances of the Sensor_Stream Class
  Sensor_Stream Sensor_1(Sensor_Stream::SENSOR_1);
  Sensor_Stream Sensor_2(Sensor_Stream::SENSOR_2);
  Sensor_Stream Sensor_3(Sensor_Stream::SENSOR_3);

void Recieve::inputs(){

  //Creates a Pointer Variable, that Stores the Address of flag 
  Sensor_Stream::flagState_t flag;
  Sensor_Stream::flagState_t* pflag;
  pflag = &flag;

  //Reads Data from the .csv Files in _StreamData Folder
  data1 = Sensor_1.get_data(pflag);
  data2 = Sensor_2.get_data(pflag);
  data3 = Sensor_3.get_data(pflag);
}

//EOF
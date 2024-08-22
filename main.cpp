#include<iostream>
#include"Logging_Point_Output.h"
#include"Recieve_Inputs.h"
#include"Sensor_Calculation.h"
#include "Sensor_Stream.h"

int main(){

    //Creates a Pointer Variable, that Stores the Address of flag
    Sensor_Stream::flagState_t flag;
    Sensor_Stream::flagState_t* pflag;
    pflag = &flag;
    Sensor_Stream Sensor_1(Sensor_Stream::SENSOR_1);

    //Loops the Code While There are Values in the .csv Files to Read
    while (true){
      Sensor_1.get_data(pflag);
      if(*pflag == 2){
        break;
      }

      //Create an Instance for Each Class
      Recieve data_a;
      Calculate data_b;
      Output data_c;

      //Call Each of the Methods
      data_a.inputs();      
      data_b.numbers(); 
      data_c.value();    
    }  
}

//EOF
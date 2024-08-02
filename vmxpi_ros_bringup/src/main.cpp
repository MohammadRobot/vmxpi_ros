#include "TitanDriver_ros_wrapper.h"
#include "navX_ros_wrapper.h"
#include "Cobra_ros.h"
#include "Sharp_ros.h"
#include "Servo_ros.h"
#include "Ultrasonic_ros.h"
#include "IOwd_ros.h"
#include "DI_ros.h"
#include "DO_ros.h"
#include <unistd.h>

int main(int argc, char **argv)
{
   system("/usr/local/frc/bin/frcKillRobot.sh"); //Terminal call to kill the robot manager used for WPILib before running the executable.
   ros::init(argc, argv, "main_node");
  
   ros::AsyncSpinner spinner(4); //Allows callbacks from multiple threads; spins asynchronously using 4 threads
   spinner.start(); //Starts this spinner spinning asynchronously
   
   ros::NodeHandle nh; //Internal reference to the ROS node that the program will use to interact with the ROS system
   VMXPi vmx(true, (uint8_t)50); //Realtime bool and the update rate to use for the VMXPi AHRS/IMU interface, default is 50hz within a valid range of 4-200Hz

   //UltrasonicROS ultrasonic(&nh, &vmx, 8, 9); //channel_index_out(8), channel_index_in(9)
   //ultrasonic.Ultrasonic(); //Sends an ultrasonic pulse for the ultrasonic object to read

   // Use these to directly access data
   //uint32_t raw_distance = ultrasonic.GetRawValue(); // returns distance in microseconds
   // or can use
   //uint32_t cm_distance = ultrasonic.GetDistanceCM(raw_distance); //converts microsecond distance from GetRawValue() to CM
    
   /**
    * START CODE HERE
    * 
    * 
    * 
    * 
    * 
    * 
    * 
    * 
    * 
    * 
    */
   
   ROS_INFO("ROS SHUTDOWN");
   ros::waitForShutdown();
   return 0;
}

# ROSARA
As we all know that losing our beloved pets to the nature is the worst feeling ever, so a solution to that problem is ROSARA. It is a robotic dog build with the help of Arduino and ROS architechture. 
This dog is an attempt to make the exact replica of a dog.
This dog is stationed with an Arduino board onto a robotic car chasis. 
In this project two OS are communicating with each other, ROS and Arduino, Ros being the server and arduino being the clien. The main structure of the communication is that
first the Raspberry pi 1 loaded with ROS is initialised with the generation of the binary files which are sent to the Raspberry pi 2, which is acting as a converter which is converting all
the binary files to the arduino code and sending it back to the raspberry pi 1, the arduino stationed on the dog then establishes a connection with the server and the code converted is sent to it 
and the code is executed.
The dog can be executed with the help of an app.
There are three modes of control for the dog
1. manual mode:
   This is the replication of the lease of the dog and can be ued to control the dog in that way. The dog acts like an rc car.
2. voice mode:
   like one can give voice commands to a dog in the same way this dog aslo follows it. all the primary commands of left and right will only be executed by the voice of the owner, otherwise
   a warning will be issued. The dog is designed in such away that if a command is given it wont stopo until it touches the human foot just like a natural dog.
3. gesture mode:
   this mode is the replication of the gestures which we give to the dog. here the accelerometer of the phone of the user is used.
   tilt the phone in the direction one wants the dog to move.
App link:
https://play.google.com/store/apps/details?id=com.srituhobby

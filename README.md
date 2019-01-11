# CameraController

There are five components to this project:

*Board Schematics/Layout (autodesk EAGLE)

*Enclosure STEP and STL files (Fusion 360)

*Sample Particle Xenon Firmware (Particle IDE)
-firmware will expose two functions through the particle cloud, shutter1 and shutter2. Each function must be called with a string as an argument. That argument is the amount of time to activate the shutter for, in milliseconds. 

*Sample Android application (Thunkable) NOT DONE YET

*Example NodeRED Workflow and integration (Particle Dev Console)
The flow included will allow you to create a slack channel for triggering the camera shutter. It will look for the word photograph, photo, pic, etc, and a designation for which camera you are asking it to take a picture with; c1, c2, both. It will send a confirmation message back to you after shooting the picture. 

This project is the cumulative effort of the handful of engineering skills that I've been trying to develop over the last few weeks. I think the project came out nicely, after a few bumps in the road with circuit design and layout. 
 

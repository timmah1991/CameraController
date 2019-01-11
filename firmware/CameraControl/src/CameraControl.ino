/*
 * Project CameraControl
 * Description:
 * Author:
 * Date:
 */

int c1shutter = D5;
int c1focus = D6;
int c2shutter = D7;
int c2focus = D8;
int shutterCamera1(String command);
int shutterCamera2(String command);

void setup() {
  pinMode(c1shutter, OUTPUT);
  pinMode(c1focus, OUTPUT):
  pinMode(c2shutter, OUTPUT);
  pinMode(c2focus, OUTPUT):
  Particle.function("shutter1", shutterCamera1);
  Particle.function("shutter2", shutterCamera2);
}

void loop() {

}

int shutterCamera1(String command)
{
  return 1;
}

int shutterCamera2(String command)
{
  return 1;
}

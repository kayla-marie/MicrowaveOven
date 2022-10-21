//Enumerations

enum Keypad { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
enum Light { low, medium, high, off };
enum PowerLevel { 10, 20, 30, 40, 50, 60, 70, 80, 90, 100 };
enum Programs { 1lbDefrost, AutoDefrost, GrillMicrowave, Microwave, PowerGrill, PowerGrillAuto };
enum Sound { low, high, off };
enum Turntable { low, high, off };
enum VentFan { low, medium, high, off };

//Interfaces
//Interface: MicrowaveController

//for whenever a button on the gui is pressed
public interface iButton
{
    event EventHandler Pressed;
    void Press();
}

//Display
public interface iDisplay
{
    void Display(); //lots of things to add here... ugh
    void Clear();
}

//Door Sensor
public interface iDoorSensor
{
    void DoorSensor(bool isOpen);
}

//KeyPad
public interface iKeypad
{
    void Keypad(int keyID);
}

//Light
public interface iLight
{
    void Light(int brightness);
}

//Sound
public interface iSound
{
    void Sound(int volume);
}

//Start/Stop 
public interface iStart/Stop
{
    void Start/Stop(bool start, bool stop)
    void Clear();
}

//Turntable
public interface iTurntable
{
    void(int rotation);
}

//VentFan
public interface iVentFan
{
    void(int speed);
}

//Weight Sensor
public interface iWeightSensor
{
    void(int currentWeight, int setWeight)
    void Clear();
}

//Classes

public class DoorSensor
{
    ..
}
public class DisplayTime
{
    ..
}
public class FanSpeeds
{
    ..
}
public class Keypad
{
    ..
}
public class Light
{
    ..
}
public class MicrowaveController
{
    ..
}
public class Options
{
    ..
}
public class Oven
{
    ..
}
public class Programs
{
    ..
}
public class PowerLevel
{
    ..
}
public class Sound
{
    ..
}
public class Start/Stop
{
    ..
}
public class Turntable
{
    ..
}
public class Weight
{
    ..
}
public class WordScroll
{
    ..
}
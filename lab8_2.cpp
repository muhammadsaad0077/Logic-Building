#include<iostream>
#include<string>
using namespace std;

class Device{
	public:
	string deviceName;
	bool powerStatus;
	string location;
	
	void turnOn(){
		powerStatus = true;
	}
	
	void turnOff(){
		powerStatus = false;
	}
	
	bool showStatus(){
		return powerStatus;
	}
};

class SmartLight: public Device{
	public:
	int brightness;
	string color;
	
	void adjustBrightness(int level) {
		brightness = level;		
	}
	void changeColor(string newColor){
		color = newColor;
	}
	
	void lightDetails(){
	 cout<<"A "<<location<<" light is set to "<<brightness<<"% brightness and to "<<color<<" color"<<endl;
	}
};

class SmartThermostat: public Device{
	public:
	float temperature;
	string mode;
	
	void setTemperature(float temp){
		temperature = temp;
		
	}
	
	void switchMode(string newMode){
		if(temperature < 18){
			mode = "Heat";
		}
		else{
			mode = newMode;
		}
		
	}
	
	void thermostatDetails(){
	 cout<<"A thermostat has temperature "<<temperature<<"-C and has mode "<<mode<<endl;
	}
	
};

class SmartSecurityCamera: public Device{
	public:
	string resolution;
	bool recordingStatus;
	
	void startRecording(){
		recordingStatus = true;
	}
	
	void stopRecording(){
		recordingStatus = false;
	}
	
	void viewFeed(){
		cout<<"The user turns on the "<<deviceName<<" at the "<<location<<" and "<<(recordingStatus?"starts recording for security purposes.":"stops recording")<<endl;
	}
};

int main(){
	SmartLight s;
	s.adjustBrightness(50);
	s.changeColor("blue");
	s.location = "bedroom";
	s.lightDetails();
	
	SmartThermostat t;
	t.setTemperature(18);
	t.switchMode("moderate");
	t.thermostatDetails();
	
	SmartSecurityCamera c;
	c.resolution = "4K";
	c.recordingStatus = true;
	c.location = "main entrance";
	c.deviceName = "camera";
	c.viewFeed();
	
	
	
	
	return 0;
}


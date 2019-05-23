//standard headers


//GPIO header
#include <wiringPi.h> //installed by default on raspbian

//custom headers
#include "pinout.hpp"

//libs



int main() {

	//setup
	wiringPiSetupGpio();
	pinMode(LED_1,OUTPUT);
	pinMode(DIPSWITCH_1,INPUT);

	//process
	while(true) {
		digitalWrite(LED_1,digitalRead(DIPSWITCH_1));
	}
	return 0;	
}


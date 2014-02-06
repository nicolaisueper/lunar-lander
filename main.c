#include <stdio.h>
#include <string.h>

int calculate(int height, int speed, int burn, int gravity) {
	return (speed+gravity-burn);
}

int main(){	
	const int gravity = 100;	/* The rate in which the spaceship descents in free fall (in ten seconds) */
	int height;	/* The height of the spaceship. */
	int speed;	/* The speed of the spaceship. */
	int burn;	/* The fuel which gets burned this step */
	int tensec;	/* The time the flight is running for. (in ten second steps) */
	int fuel;	/* The fuel you have left. (kilogram) */


	char dead[]="\nThere were no survivors.\n";
	char crashed[]="\nThe Spaceship crashed. Good luck getting back home.\n";
	char success[]="\nYou made it! Good job!\n";

	printf("\nLunar Lander - Version 0.1\n");
	printf("This is a computer simulation of an Apollo lunar landing capsule.\n");
	printf("The on-board computer has failed so you have to land the capsule manually.\n");
	printf("Set burn rate of retro rockets to any value between 0 (free fall) and 200\n");
	printf("(maximum burn) kilo per second. Set burn rate every 10 seconds.\n"); /*that's wy we have to go with 10 second-steps.*/
	printf("Good Luck!\n");
	
		/* Set initial height, time, fuel, burn and speed. */
	speed=1000;
	height=12000;
	fuel=12000;
	tensec=0;
	burn=0;
	
	printf("\nTime\t");
	printf("Speed\t\t");
	printf("Fuel\t\t");
	printf("Height\t\t");
	printf("Burn\n");
	
	do {

	
		printf("%d0\t", tensec);
		printf("%d\t\t", speed);
		printf("%d\t\t", fuel);
		printf("%d\t\t", height);
		scanf("%i", &burn);
		
		if(burn<0 || burn>200) {					/* If there is a wrong entry */
		printf("The burn rate rate must be between 0 and 200.\n");
		continue;
		}
		
		speed = calculate(height, speed, burn, gravity);
		height=height-speed;
		fuel = fuel-burn;
		tensec++;
			
	}while(height>0);
	
		if(speed>10){
			printf("%s", dead);
		}
		else if(speed<10){
			printf("%s", crashed);
		}
		else if(speed==0){
			printf("%s", success);
		}
	return 0;
}

#include <stdio.h>

int main(){
    float airspeed,altitude;

    printf("Enter the Airspeed (m/s):");
    scanf("%f",&airspeed);

    printf("Enter the Altitude(ft):");
    scanf("%f",&altitude);

    if(airspeed<253.0 && altitude<=500.0){
        printf("Status:Landing Gear Avaliable");
    }
    else{
        printf("Status:Landing Gear Unavaliable");
        
    }
}

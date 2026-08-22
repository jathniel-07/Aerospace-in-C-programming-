#include <stdio.h>

float Thrust(float mass_flow_rate,float exhaust_velocity,float exhaust_pressure,float atmospheric_pressure,float area_of_nozzle_exit){
    return mass_flow_rate*exhaust_velocity+(exhaust_pressure-atmospheric_pressure)*area_of_nozzle_exit;
}
float Drag(float air_density,float velocity,float drag_coefficient,float frontal_area){
    return air_density*velocity*velocity*drag_coefficient*frontal_area*0.5;
}
float Mach(float speed_of_aircraft,float speed_of_sound){
    return speed_of_aircraft/speed_of_sound;
}
float Lift(float air_density,float velocity,float lift_coefficient,float reference_area){
    return (air_density*(velocity*velocity)*lift_coefficient*reference_area);
}
int main(){
    float mass_of_rocket;
    float mass_flow_rate;
    float exhaust_velocity;
    float exhaust_pressure;
    float atmospheric_pressure;
    float area_of_nozzle;
    float air_density;
    float velocity;
    float drag_coefficient;
    float frontal_area;
    float speed_of_aircraft;
    float speed_of_sound = 340.294;
    float lift_coefficient;
    float reference_area;
    int input;

    printf("Enter the mass of the rocket:");
    scanf("%f",&mass_of_rocket);

    printf("Enter UR choice [ Thrust-1 || Drag-2 || Mach Number-3 || Lift-4 ]==>");
    scanf("%d",&input);

    if(input==1){
        printf("Enter the mass flow rate:");
        scanf("%f",&mass_flow_rate);

        printf("Enter the exhaust velocity:");
        scanf("%f",&exhaust_velocity);

        printf("Enter the exhaust pressure:");
        scanf("%f",&exhaust_pressure);

        printf("Enter the atmospheric pressure:");
        scanf("%f",&atmospheric_pressure);

        printf("Enter the area of nozzle exit:");
        scanf("%f",&area_of_nozzle);

        float result=Thrust(mass_flow_rate,exhaust_velocity,exhaust_pressure,atmospheric_pressure,area_of_nozzle);
        printf("The Thrust is :%f\n",result);

        if(result>mass_of_rocket){
            printf("The Aircraft Lifts off......\n");
        }
        else{
            printf("The Mass Thrust ratio is Inconsistent.....\n");
        }
    }
    else if(input==2){
        printf("Enter the air density:");
        scanf("%f",&air_density);

        printf("Enter the velocity:");
        scanf("%f",&velocity);

        printf("Enter the drag coefficient:");
        scanf("%f",&drag_coefficient);

        printf("Enter the frontal area:");
        scanf("%f",&frontal_area);

        float result = Drag(air_density,velocity,drag_coefficient,frontal_area);

        printf("Drag Force:%f\n",result);
        float thrust_force;
        printf("Enter the Thrust Force:");
        scanf("%f",&thrust_force);

        float acceleration= thrust_force/mass_of_rocket;
        printf("The Acceleration is :%f\n",acceleration);
    }
    else if(input==3){
        printf("Enter the speed of the aircraft:");
        scanf("%f",&speed_of_aircraft);

        float result= Mach(speed_of_aircraft,speed_of_sound);
        printf("Mach Number:%f\n",result);
        if(result>1){
            printf("The Aircraft is Super Sonic.....");
        }
        else if(result<1){
            printf("The Aircraft is Subsonic.......");
        }
        else{
            printf("The Aircraft is transonic......");
        }

    }
    else if(input==4){
        printf("Enter the air density:");
        scanf("%f",&air_density);
        
        printf("Enter the velocity of the aircraft:");
        scanf("%f",&velocity);

        printf("Enter the Lift Coefficient:");
        scanf("%f",&lift_coefficient);

        printf("Enter the Reference Area:");
        scanf("%f",&reference_area);

        float result = Lift(air_density,velocity,lift_coefficient,reference_area);
        printf("Lift Force:%f\n",result);

        if(result>mass_of_rocket){
            printf("The Aircraft Lifts up.......\n");
        }
        else{
            printf("The Aircraft descends.......\n");
        }
    }
}

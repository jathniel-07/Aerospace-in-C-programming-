#include <stdio.h>

float Lift(float drag_coefficient,float air_density,float velocity,float wing_area){
    return drag_coefficient*0.5*air_density*velocity*velocity*wing_area;
}

int main(void){

     printf("============================================================\n");
     printf("                     LIFT FORCE CALCULATION                 \n");
     printf("============================================================\n");

    float dc,ad,v,s;
    printf("Enter the Drag Coefficient:");
    scanf("%f",&dc);

    printf("Enter the Air Density(m/V):");
    scanf("%f",&ad);

    printf("Enter the Velocity(m/s):");
    scanf("%f",&v);

    printf("Enter the Wing Area:");
    scanf("%f",&s);

    printf("The Lift produced is:%f N",Lift(dc,ad,v,s));
    printf("\nThe memory used:%zu Bytes",sizeof(dc)+sizeof(ad)+sizeof(v)+sizeof(s)+sizeof(Lift(dc,ad,v,s)));
}

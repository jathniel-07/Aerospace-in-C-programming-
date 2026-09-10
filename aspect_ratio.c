#include <stdio.h>

float aspect_ratio(float wing_span,float wing_area){
    return wing_span*wing_span/wing_area;
}
int main(void){
    printf("============================================================\n");
    printf("                    ASPECT RATIO CALCULATOR                 \n");
    printf("============================================================\n");

    float ws,wa;
    printf("Enter the Wing Span(m):");
    scanf("%f",&ws);

    printf("Enter the Wing Area(m):");
    scanf("%f",&wa);

    printf("\n The Aspect Ratio of the Wing is:%f",aspect_ratio(ws,wa));
    printf("\n Memory Used :%zu bytes",sizeof(ws)+sizeof(wa));    

}

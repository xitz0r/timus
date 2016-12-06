    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>

int main(){
    int pass, t_pass, taxi, t_taxi, control1 = 1, total, control2 = 1;
    scanf("%i %i %i %i", &pass, &t_pass, &taxi, &t_taxi);
    if(pass >= taxi){
        printf("%i", pass);
        return 0;
    }
    if((pass + t_pass) > taxi){
        printf("%i", taxi);
        return 0;
    }
    while((control1 == 1) && (control2 == 1)){
        control1 = 0;
        if(((pass + t_pass) < taxi) && (control2 == 1)){
            pass+= t_pass;
            total = pass;
            control1 = 1;
        }
        control2 = 0;
        if(((taxi - t_taxi) > pass) && (control1 == 1)){
            taxi-= t_taxi;
            total = taxi;
            control2 = 1;
        }
    }
    printf("%i", total);
    return 0;
}
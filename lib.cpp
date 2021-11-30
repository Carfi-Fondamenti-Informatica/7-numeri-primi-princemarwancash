#include "lib.h"
int fun (int a){
    int  div=1, divInt=0;
    while(divInt<=1 and div<=a/2) {
        if(a%div==0){
            divInt++;
        }
        div++;
    } if (divInt==1) {
        return 1;
    } else {
        return 0;
    }
}

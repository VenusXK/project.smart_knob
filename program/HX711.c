#include <reg51.h>

sbit Strain_DO = P2^3;
sbit Strain_SCK = P2^4;

unsigned long Strain_rec(){
    unsigned char i;
    unsigned long data = 0;
    //init
    Strain_DO = 1;
    Strain_SCK = 0;
    if(!Strain_DO){
        for(i = 0; i < 26; i++){
            Strain_SCK = 1;
            data = (data << 1) | Strain_DO;
            Strain_SCK = 0;
        }
    }
    // Strain_SCK = 1;
    // data = data ^ 0x800000;
    return data;
}
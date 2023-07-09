#include <reg51.h>

sbit TMC_UH = P0^0;
sbit TMC_VH = P0^1;
sbit TMC_WH = P0^2;
sbit TMC_UL = P0^3;
sbit TMC_WL = P0^4;
sbit TMC_VL = P0^5;
sbit TMC_DIAG = P0^6; // 1 for error

void TMC_init(){// 初始化
    TMC_UH = 0; TMC_VH = 0; TMC_WH = 0;
    TMC_UL = 0; TMC_VL = 0; TMC_WL = 0;
}

// 模拟档位 查表
void Gear_Simulator(){
    //第一象限
    // 0~15
    if(degree >= 0 && degree < 15){
        
    }
    // 15~30
    else if(degree >= 15 && degree < 30){

    }
    // 30~45
    else if(degree >= 30 && degree < 45){

    }
    // 45~60
    else if(degree >= 45 && degree < 60){

    }
    // 60~75
    else if(degree >= 60 && degree < 75){

    }
    // 75~90
    else if(degree >= 75 && degree < 90){

    }
    //第二象限
    // 90~105
    else if(degree >= 90 && degree < 105){

    }
    // 105~120
    else if(degree >= 105 && degree < 120){

    }
    // 120~135
    else if(degree >= 120 && degree < 135){

    }
    // 135~150
    else if(degree >= 135 && degree < 150){

    }
    // 150~165
    else if(degree >= 150 && degree < 165){

    }
    // 165~180
    else if(degree >= 165 && degree < 180){

    }
    //第三象限
    // 180~195
    else if(degree >= 180 && degree < 195){

    }
    // 195~210
    else if(degree >= 195 && degree < 210){

    }
    // 210~225
    else if(degree >= 210 && degree < 225){

    }
    // 225~240
    else if(degree >= 225 && degree < 240){

    }
    // 240~255
    else if(degree >= 240 && degree < 255){

    }
    // 255~270
    else if(degree >= 255 && degree < 270){

    }
    //第四象限
    // 270~285
    else if(degree >= 270 && degree < 285){

    }
    // 285~300
    else if(degree >= 285 && degree < 300){

    }
    // 300~315
    else if(degree >= 300 && degree < 315){

    }
    // 315~330
    else if(degree >= 315 && degree < 330){

    }
    // 330~345
    else if(degree >= 330 && degree < 345){

    }
    // 345~360
    else if(degree >= 345 && degree < 360){

    }
}



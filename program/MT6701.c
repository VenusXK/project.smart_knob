#include <reg51.h>

sbit MAG_CLK = P2^0;
sbit MAG_CSN = P2^1;
sbit MAG_DO = P2^2;

struct MAG_inf{
	unsigned char data;
	unsigned char Mg;
	unsigned char CRC;
}

struct MAG_res{
	unsigned char degree;
	bool speed_state; // 1 for fast; 0 for normal;
	bool mag_state; // 0 for normal; 1 for too strong; 2 for too weak;
	bool press_state; // 0 for not pressed; 1 for pressed;
}

void MAG_init(){
	MAG_CLK = 1;
	MAG_CSN = 1;
	MAG_DO = 1;
}

struct MAG_inf MAG_rec(){
	unsigned char i, j, k;
	struct MAG_inf inf;
	MAG_CSN = 0;
	// recieve data
	for(i = 0; i < 14; i++){
		//T1
		MAG_CLK = 0;
		//T2
		inf.data = (inf.data << 1) | MAG_DO;
		//T3
		MAG_CLK = 1;
	}
	// recieve Mg
	for(j = 0; j < 4; j++){
		//T1
		MAG_CLK = 0;
		//T2
		inf.Mg = (inf.Mg << 1) | MAG_DO;
		//T3
		MAG_CLK = 1;
	}
	// recieve CRC
	for(j = 0; j < 4; j++){
		//T1
		MAG_CLK = 0;
		//T2
		inf.CRC = (inf.CRC << 1) | MAG_DO;
		//T3
		MAG_CLK = 1;
	}
	return inf;
}

struct MAG_res MAG_handle(struct MAG_inf inf){
	struct MAG_res res;
	unsigned char i, j, k;
	
	// handle degree data
	unsinged char mag_sum;
	unsigned char tmp;
	for(i = 0; i < 14; i++){
		tmp = 0;
		for(int j = 0; j < i+1; j++){
			tmp = tmp*2;
		}
		mag_sum += (inf.data * tmp);
	}
	res.degree = mag_sum*360 / 16384 ;

	// handle Mg
	res.mag_state = inf.Mg | 0x03;
	res.speed_state = inf.Mg | 0x04;
	res.press_state = inf.Mg | 0x08;
	
	// handle CRC
}
#include "Main.h"
#include "Port.h"
#include "Led.h"
#include "buttons.h"

void Delay_MS(unsigned int ms){
    unsigned int i;
    unsigned int j;
    for(i=0; i<ms; i++){
        for(j=0; j<120; j++){
        }
    }
}


void main()
{
    
    // diable the watch dog
    WDTCN = 0x0DE;
    WDTCN = 0x0AD;

    OSCICN = 0x014; // 2MH clock
    // config cross bar
    XBR0 = 0x00;
    XBR1 = 0x016; // enable interrupt crossbar
    XBR2 = 0x40; // Cross bar enabled , weak Pull-up enabled

    

   
    while(1)
    {

    }

}
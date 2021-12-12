#include <cpp_api/navigation_bridge.h>
#include <iostream>

Navigation pos;
int main(int argc, char *argv[])
{
    pos.take_off(5.0);	
    pos.position_set(6.5,0,-5);				
    pos.position_set(6.5,6.5,-5);
    pos.position_set(0,6.5,-5);
    pos.position_set(0,0,-5);
    pos.land(false);									
}
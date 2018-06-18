#include <stdint.h>






/*
 * Simple function to test the library, use it with a output function like printf
 * example : 
 *  printf(char * str){
 *  ....
 *  }
 *
 *
 * testme(&printf,"something");
 *
 */


void testme(void * fct, void * str){

    
    void (*ptr)(void*);

    ptr = fct;
    ptr(str);
    return ;
}

/*
 * =====================================================================================
 *
 *       Filename:  expressionBybyte.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012年07月19日 13时56分32秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  BurningStyle
 *
 *
 * =====================================================================================
 */

#include"stdio.h"
typedef unsigned char *byte_pointer;


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  show_bytes
 *  Description:  
 * =====================================================================================
 */
void
show_bytes (byte_pointer start,int len)
{
    int i=0;
    for(i=0;i<len;i++){
        printf ( "%0.2x\n",start[i]);
    }
}	


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  show_int
 *  Description:  
 * =====================================================================================
 */
void
show_int (int x)
{
        show_bytes((byte_pointer)&x,sizeof(int));
}	


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  show_float
 *  Description:  
 * =====================================================================================
 */
void
show_float (float x)
{
        show_bytes((byte_pointer)&x,sizeof(float));
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  show_pointer
 *  Description:  
 * =====================================================================================
 */
void
show_pointer (void *x)
{
        show_bytes((byte_pointer)&x,sizeof(void *));
}

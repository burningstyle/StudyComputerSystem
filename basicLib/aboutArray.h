/*
 * =====================================================================================
 *
 *       Filename:  aboutArray.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012年07月21日 13时35分33秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  BurningStyle
 *
 *
 * =====================================================================================
 */

#include "simpleOperate.c"

/* 
 * ===  FUNCTION  ======================================================================
 *         Name: int_array_reverse
 *  Description:  
 * =====================================================================================
 */
void
int_array_reverse (int a[],int cnt)
{
        int first,last;
        for(first=0,last=cnt-1;first<last;first++,last--){
		int_swap_byXOR(&a[first],&a[last]);
	}
}	

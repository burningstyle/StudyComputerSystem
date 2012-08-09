/*
 * =====================================================================================
 *
 *       Filename:  perform.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012年08月06日 23时00分26秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  BurningStyle
 *
 *
 * =====================================================================================
 */

/* 有一个部落，部落里面有N个平民和一个首领。首领每天要选一个节目。
其中节目包含，1人独唱、或者7人合唱或者15人的舞蹈。
请计算在不重复表演，且所有人都表演一次，最少需要多少天。
Input
 50 <= N  <= 200
*/

#include"stdio.h"

int mindays(int n);
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int
main ( int argc, char *argv[] )
{	
		int n=0;

		printf ( "Please input the num of people:" );
		
        scanf("%d",&n);	
		
        printf ("%d people perform need at least %d days\n",n,mindays(n));
		
        return 0;
}


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  mindays
 *  Description:  
 * =====================================================================================
 */
int
mindays (int n)
{
	int onePerform=0,sevenPerform=0,fifteenPerform=0,days15=0,mindays=0;

    if(n>=50 && n<=200){
		
        fifteenPerform=n/15;

        if((n-fifteenPerform*15)>=7){
	
            sevenPerform=(n-fifteenPerform*15)/7;
		}
	}
    
    onePerform=n-fifteenPerform*15-sevenPerform*7;
	
    days15=fifteenPerform+sevenPerform+onePerform;
	
    mindays=days15;
	
    return mindays;	
}	

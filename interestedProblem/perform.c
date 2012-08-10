/*
 * =====================================================================================
 *
 *       Filename:  perform.c
 *
 *    Description:  
 *
 *        Version:  1.1
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
 *  Description:  先算15人的天数，再将余下的人算7人表演的天数，最后减去15人表演和7人表演
 *	的总天数，其余的都是每天的独唱。
 * =====================================================================================
 */
int
mindays (int n)
{
	int onePerform=0,sevenPerform=0,fifteenPerform=0,days15=0,mindays=0;
	//days15表示先从15人的表演开始算起的所花的总时间（因为题目要求人数在50—200人之间，所以可以直接除以15）
	if(n>=50 && n<=200){
	
		fifteenPerform=n/15;
		       
		if((n-fifteenPerform*15)>=7){
		//如果分配完15人表演的天数后，剩余的人超过7人，则将7人表演的天数算出
			sevenPerform=(n-fifteenPerform*15)/7;
		}
	}
	onePerform=n-fifteenPerform*15-sevenPerform*7;
 
	days15=fifteenPerform+sevenPerform+onePerform;
    
	mindays=days15;
    
	return mindays;	
}	

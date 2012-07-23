/*
 * =====================================================================================
 *
 *       Filename:  hexToDec.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2012年07月19日 22时16分25秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  BurningStyle
 *
 *
 * =====================================================================================
 */


#include    <string.h>
#include    <math.h>
long hexToDec(char hex[]);
long hexCharToDecNum(char c);
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  hexToDec
 *  Description:  
 * =====================================================================================
 */
long
hexToDec (char hex[])
{	
        long temp=0,sum=0;
       
        for(temp=0;temp<strlen(hex);temp++){
            
            sum+= hexCharToDecNum(hex[temp])*pow(16,(double)(strlen(hex)-(temp+1)));
        }
        return sum;
}

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  hexToDec
 *  Description:  
 * =====================================================================================
 */
long
hexCharToDecNum (char c)
{
       if(c>='0' && c<='9'){
           
           return (int)(c-48);
        }
       else if(c>='A'&& c<='F'){
           
           return (int)(c-55);    
       }
       else
           return 0;
}	

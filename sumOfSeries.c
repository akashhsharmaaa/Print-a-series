#include <stdio.h>
#include<math.h>
float sumfun(int , int);
int main(void) {	
	float c=sumfun(3,2);	
	printf("%f",c);
	return 0;
}
float sumfun(int n, int N)
	{
	float s=1;
	
	    	int x=2;
	    for( int i=2;i<=n;i++)
	    {
	        if(i%2==0)
	        {
	            s=s-(pow(x,i))/i;
	        }
	        else
	        {
	        s=s+(pow(x,i))/i;
	        }
	    }
	    return s;
	    
	}

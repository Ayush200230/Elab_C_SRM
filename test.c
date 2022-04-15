#include <stdio.h>
int main()
{
int n;
float f;
scanf ("%d",&n);
if (n%2==0){
    printf("%d",(n/2)/n);
}
else{
    f=(n/2);
//    f=(f+1)/n;
    printf("%.9f",(f+1)/n);   
}
	return 0;}
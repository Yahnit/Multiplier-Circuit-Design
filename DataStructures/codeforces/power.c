#include<stdio.h>
#include<math.h>
//I included math.h to be able to use the pow function
int main()
{

     long long int t,i,n=1000000007;
   //I initialized the variables      
       scanf("%lld",&t);
    // i scanned t(No. of test cases    
      long long int x[t];

            for(i=0;i<t;i++)
               {
                 long long int a,b,p;
                 scanf("%lld %lld",&a,&b);
                 //Scanning the values of 'a' and 'b'
                  p=pow((a%n),b);
                //(a*b)%m=((a%m)*(b%m))%m

                  x[i]=p%n;
                  //Now im storing the answers in an array x[i]
                }

             for(i=0;i<t;i++)
             printf("%lld\n",x[i]);
             //Iam printing the array in which the answers were stored            

return 0;
}  

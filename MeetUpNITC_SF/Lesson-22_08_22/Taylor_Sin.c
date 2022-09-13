#include<stdio.h>
#include<math.h>

int factory(int n)
{
    int i;
    int result = 1;
    for (i = 1; i < n; i++){
        result = result * i;
    }
    return result;
}

float factory_req(int n){
    if(n==0) return 1;
    return n * factory_req(n-1);
}

float degree(float a, float b)
{
    float result = 1;
    int i;
    for (i =1; i < b; i ++)
    return ;

}

float my_sin()
{

}
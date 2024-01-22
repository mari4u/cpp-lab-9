#include <cstdio>
template <typename T>
T findmax(T* arr, int n){
    T maxel = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>maxel){
            maxel=arr[i];
        }
    }
    return maxel;
}
template <typename T>
T findmin(T* arr, int n){
    T minel = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<minel){
            minel=arr[i];
        }
    }
    return minel;
}
int main(){
    int a[3]={5,2,4};
    double b[4]={1.7,1.4,3.8,3.9};
    char c[6]={'h','e','l','l','o'};
    printf("%d %d \n",findmax(a,3), findmin(a,3));
    printf("%lg %lg \n",findmax(b,4), findmin(b,4));
    printf("%c %c \n",findmax(c,5), findmin(c,5));
    
   
    
    return 0;
}
#include <iostream>

int * filter( int* const fist, int* const last){

    //int size = last - fist;
    int *fist2 = fist;
    
    while (fist2!= last){
        if(*fist2 < 1){
            *fist2 = 0;
        }

        ++fist2;
    }

    int * fist3 = fist;

    while ( fist3!=last)
    {
        if(*fist3 == 0){

            int * pos = fist3;
            int size

        }
        
        ++fist3;
    }
    
    

    return last;
    
    
}

int main(){
int vector[]{-2,-8,6,7,-3,10,1,0,-3,7};
int size = sizeof(vector)/sizeof(int);

filter(vector,vector+size);

    return 0;
}
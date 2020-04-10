#include<iostream>

int* lower_bound(int* first,int* const last,short target ){
//lower bound
    int count = last - first;//capturing the size of Array
    while (count!=0)
    {
        int step = count/2;//the step that wid will take
        int* mid = first + step;//mid

        if(*mid < target){
            //if the target is on the right; move to right
            count -= step +1;
            first = mid +1;
        }else
            count = step;
    }
    
    if(*first < target){
        return last;
    }
    return first;
    

}

int main(){
    int v[]{1,2,3,6,6,6,7,8,9,9,9,10};
    int size = sizeof(v)/sizeof(int);
    int target;
    std::cin>>target;
    int* result = lower_bound(v,v+size,target);
    //int* result2 = upper_bound(v,v+size,target);
    std::cout<< *(result);//menos 1 por que eu queria saber
                            // qual era o antercessor, só pra ter
                            //certeza que é o lower bound;
   // std::cout<< *(result2 + 1 );
    return 0;
}
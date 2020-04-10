#include <iostream>

int* upper_bound(int* first, int* const last,short target){
int count = last - first;
while(count !=0){
    int step = count/2;
    int *mid = first+step;
    if(*mid<= target){
        count -= step+1;
        first = mid +1;
    }else{
        count = step;
    }
}
return first;

}

int main(){
  int v[]{1,2,3,6,6,6,7,8,9,9,9,10};
    int size = sizeof(v)/sizeof(int);
    int target;
    std::cin>>target;
    int* result2 = upper_bound(v,v+size,target);
    std::cout<< *(result2);
    return 0;
}
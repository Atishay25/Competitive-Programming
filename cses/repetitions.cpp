// https://cses.fi/problemset/task/1069

#include<iostream>
#include <string>

int getMax(int *arr, int n){
    int max = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] >= max) max = arr[i];
    }
    return max;
}

int main(){
    std::string dna;
    std::cin >> dna;
    int i = 1, N = dna.length();
    int num[N];
    num[0] = 1;
    while(i < N){
        if(dna[i]!=dna[i-1]) num[i] = 1;
        else num[i] = 1 + num[i-1];
        i++;
    }
    std::cout << getMax(num,N) << std::endl;
}
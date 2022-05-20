#include <bits/stdc++.h>
using namespace std;


//Naive Solution
 int firstPetrolPump(int petrol[] , int dist[] , int n){
     for(int start=0 ; start<n ; start++){
         int curr_petrol = 0;
         int end = start;
         while(true){
             curr_petrol += (petrol[end] - dist[end]);
             if(curr_petrol < 0) break;
             end = (end+1)%n;
             if(end == start) return (start+1);
         }
     }
    return -1;
 }

//Efficient Approach
int firstPetrolPump2(int petrol[] , int dist[] , int n){
    int start=0 , curr_pet=0 , prev_pet =0;
    for(int i=0 ; i<n ; i++){
        curr_pet += (petrol[i] - dist[i]);
        if(curr_pet < 0) {
            start = i+1;
            prev_pet = curr_pet;
            curr_pet =0;
        }
    }
    return ((curr_pet + prev_pet)>=0) ? start+1 : -1;

}

 int main() {
     int n=4;
     int petrol[n] = {50,10,60,100};
     int dist[n] = {30,20,100,10};
     cout<<firstPetrolPump2(petrol,dist,n);
 }
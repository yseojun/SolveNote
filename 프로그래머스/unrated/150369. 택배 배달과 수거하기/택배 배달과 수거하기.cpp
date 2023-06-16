#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

long long solution(int cap, int n, vector<int> deliveries, vector<int> pickups) {
    long long answer = 0;
    
    int delivery_idx = -1;
    int pickup_idx = -1;
    
    for(int i = n - 1; i >= 0; i--){
        if(deliveries[i] != 0) {
            delivery_idx = i;
            break;
        }
    }
    
    for(int i = n - 1; i >= 0; i--){
        if(pickups[i] != 0) {
            pickup_idx = i;
            break;
        }
    }

    while(1){
        int max_idx = max(delivery_idx, pickup_idx);
        
        if(max_idx == -1) {
            answer = 0;
            break;
        }
        
        answer += (max_idx + 1) * 2;
        
        int delivery_num = cap;
        
        for(int i = delivery_idx; i >= 0; i--){
            
            if(deliveries[i] <= delivery_num){
                if(i == 0) delivery_idx = -1;
                delivery_num -= deliveries[i];
            }
            else{
                deliveries[i] -= delivery_num;
                delivery_idx = i;
                break;
            }
        }
        
        int pickup_num = cap;
        
        for(int i = pickup_idx; i >= 0; i--)
        {
            if(pickups[i] <= pickup_num){
                if(i == 0) pickup_idx = -1;
                pickup_num -= pickups[i];
            }
            else{
                pickups[i] -= pickup_num;
                pickup_idx = i;
                break;
            }
        }
        if(delivery_idx == -1 && pickup_idx == -1)
            break;
    }
    return answer;
}
#include <iostream>
#include <chrono>

#define times 5

using namespace std;

int calculate_distance(int townsCons[times], int main_matrix[times][times]){
    
    int dst = 0;
    for(int i = 0; i < times-1; i++)
        dst += main_matrix[townsCons[i]][townsCons[i+1]];
    
    dst += main_matrix[townsCons[times-1]][townsCons[0]];
    
    //cout<<"!!! - "<<dst<<" ";
    //for(int i = 0; i< times; i++)
    //    cout<<townsCons[i]<<" ";
    //cout<<endl;
    
    
    
    return dst;
}

bool consCheck( int townsCons[times], int num, int ind){
    
    for(int i = 0; i < ind; i++)
        if(townsCons[i] == num) return false;
    
    return true;
}


int find_shortest_path(int townsCons[times], int smallest_one, int main_matrix[times][times], int ind){
    if(ind == times){
        int calc = calculate_distance(townsCons, main_matrix);
        if (calc < smallest_one) smallest_one = calc;
        return smallest_one;
    }
    
    else{
        for(int i = 0; i < times; i++){
            if(consCheck(townsCons, i, ind)){
                townsCons[ind] = i;
                smallest_one = find_shortest_path(townsCons, smallest_one, main_matrix, ind+1);
            }
            
        }
    }
    return smallest_one;
    
}

int main()
{
    int main_matrix[times][times] = 
        {{0, 3, 13, 9, 7},
         {3, 0, 6, 12, 10},
         {13,  6, 0, 9, 6},
         {9,  12, 9, 0, 8},
         {7, 10, 6 , 8, 0}};
    
    auto t1 = chrono::high_resolution_clock::now();
    
    int townsCons[times];
    
    for(int i = 0; i < times; i++) 
        townsCons[i] = -1;
    
    int smallest_one = find_shortest_path(townsCons, 100000, main_matrix, 0);
    
    auto t2 = chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration = t2 - t1;
    
    cout<<endl<<"ans: "<<smallest_one<<endl;
    cout<<duration.count();
    return 0;
}

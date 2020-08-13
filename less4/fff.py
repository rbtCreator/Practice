import time

times = 5

def calculate_distance(townsCons, main_matrix):
    dst = 0;
    for i in range(times-1):
        dst += main_matrix[townsCons[i]][townsCons[i+1]]

    dst += main_matrix[townsCons[times-1]][townsCons[0]]

    return dst

'''
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
'''

def consCheck( townsCons, num, ind):
    for i in range(ind):
        if townsCons[i] == num: return False
    return True
'''
bool consCheck( int townsCons[times], int num, int ind){
    
    for(int i = 0; i < ind; i++)
        if(townsCons[i] == num) return false;
    
    return true;
}
'''

def find_shortest_path(townsCons, smallest_one, main_matrix, ind):
    if ind == times:
        calc = calculate_distance(townsCons, main_matrix)
        if calc < smallest_one: smallest_one = calc
        return smallest_one
    else:
        for i in range(times):
            if consCheck(townsCons, i, ind):
                townsCons[ind] = i
                smallest_one = find_shortest_path(townsCons, smallest_one, main_matrix, ind+1)

    return smallest_one;
'''
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
'''

def main():
    main_matrix = [[0, 3, 13, 9, 7],
                     [3, 0, 6, 12, 10],
                     [13,  6, 0, 9, 6],
                     [9,  12, 9, 0, 8],
                     [7, 10, 6 , 8, 0]];

    t1 = time.time()

    townsCons = []
    
    for i in range(times):
        townsCons.append(-1)

    smallest_one = find_shortest_path(townsCons, 100000, main_matrix, 0)
    t2 = time.time()
    print("{} ,,,, {}".format(smallest_one, t2-t1))

if __name__=='__main__':
    main()
'''
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
'''

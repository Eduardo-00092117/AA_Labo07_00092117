
#include <cstdlib>
#include <iostream>

using namespace std;

int max(int n, int n2){
    if(n > n2){
        return n;
    } else {
        return n2;
    }
}

int main(int argc, char** argv) {
    
    int n = 5;
    int p[] = {1, 5, 8, 9, 10};
    int r[n];
    
    r[0] = 0;
   
    for(int i = 1; i <= n; i++){
        int maxi = -1;
        for(int j = 0; j < i; j++){
            maxi = max(maxi, p[j]+r[i-j-1]);
        }
        r[i] = maxi;
    }
    cout << r[n];
    
    
    
    return 0;
}


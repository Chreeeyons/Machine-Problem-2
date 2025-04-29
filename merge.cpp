#include "merge.h"

int merge(string A[], string B[], string C[], int n, int m){
    int compare = 0;
    int i=0, j=0, k=0;
    
    while (i < n && j < m){
        if (A[i] <= B[j]){
            C[k++] = A[i++];
        }else{
            C[k++] = B[j++];
        }
    compare++;
    }
    
    while(i < n){
        C[k++] = A[i++];
    }
        while(j<m){
            C[k++] = B[j++];
        }
    return compare;
}
void selectionsort(int A[],int n){
    for(int i=0;i<n-1;i++){     //we just need n-2 passes
        int iMin=i;
        for(int j=i+1;j<n;j++){
            if(A[j]<A[iMin])iMin=j;
        }
        swap(A[i],A[iMin]);
    }
}
int main() {
    int A[]={1,4,2,7,4,6,1,3,0,9,4};
    selectionsort(A,11);
    for(int i=0;i<11;i++)cout<<A[i]<<" ";
}

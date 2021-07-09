void bubblesort(vector<int>&A,int n){
    for(int i=1;i<=n-1;i++){     
        int flag=0;
        for(int k=0;k<n-i-1;k++){
            if(A[k]>A[k+1]){
                swap(A[k],A[k+1]);
                flag=1;
            }
        }
        if(flag==0)break;
    }
}
int main() {
    vector<int>A={1,4,2,7,4,6,1,3,0,9,4};
    bubblesort(A,11);
    for(int i=0;i<11;i++)cout<<A[i]<<" ";
}

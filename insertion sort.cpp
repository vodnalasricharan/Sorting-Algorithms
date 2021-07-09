void insertionsort(vector<int>&A,int n){
    for(int i=1;i<=n-1;i++){     
        int value=A[i];
        int h=i;
        while(h>0 and A[h-1]>value){
            A[h]=A[h-1];
            h--;
        }
        A[h]=value;
    }
}
int main() {
    vector<int>A={1,4,2,7,4,6,1,3,0,9,4};
    insertionsort(A,11);
    for(int i=0;i<11;i++)cout<<A[i]<<" ";
}

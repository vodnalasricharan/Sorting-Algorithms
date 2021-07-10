void merge(vector<int>&A,int start,int mid,int end){
    vector<int>temp(end - start + 1);
    int i = start, j = mid+1, k = 0;
   // traverse both arrays and in each iteration add smaller of both elements in temp 
	while(i <=mid && j <=end) {
		if(A[i] <= A[j]) {
			temp[k] = A[i];
			k += 1; i += 1;
		}
		else {
			temp[k] = A[j];
			k += 1; j += 1;
		}
	}

	// add elements left in the first interval 
	while(i <=mid) {
		temp[k] = A[i];
		k += 1; i += 1;
	}

	// add elements left in the second interval 
	while(j <= end) {
		temp[k] = A[j];
		k += 1; j += 1;
	}

	// copy temp to original interval
	for(i = start; i <=end; i += 1) {
		A[i] = temp[i - start];
	}
    

}

void mergesort(vector<int>&A,int begin,int end){
    if(begin>=end)return;
    int mid=begin+(end-begin)/2;
    mergesort(A,begin,mid);
    mergesort(A,mid+1,end);
    merge(A,begin,mid,end);
}

int main() {
    vector<int>A={1,4,2,7,4,6,1,3,0,9,4};
    mergesort(A,0,A.size()-1);
    for(int i=0;i<11;i++)cout<<A[i]<<" ";
}

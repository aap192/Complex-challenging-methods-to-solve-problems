//============================================================================
// Name        : MergeSortedArray.cpp
// Author      : Akash Pawar
// Version     :
// Copyright   : 
// Description : Merge Sorted Array in C++, Ansi-style
//============================================================================


//Return vector 1 as sorted vector//
class Solution {
public:
    void merge(vector<int>& A, int m, vector<int>& B, int n) {

        int i=m-1;
		int j=n-1;
		int k = m+n-1;
		while(i >=0 && j>=0)
		{
			if(A[i] > B[j])
				A[k--] = A[i--];
			else
				A[k--] = B[j--];
		}
		while(j>=0)
			A[k--] = B[j--];
    }
};

//Return new sorted vector
class Solution {
public:
    vector<int> merge(vector<int>& A, int m, vector<int>& B, int n) {
	    int i=0;
	    int j=0;
	    int k=0;
	    vector<int>V;
	    while(i<m && j<n){
		    if(A[i]<B[j]){
			    V[k]=A[i];
			    k++;
			    i++;
		    }
		    else {
			    V[k]=B[j];
			    k++;
			    j++;
		    }
	    }
	    while(i<m){
		    V[k]=A[i];
		    i++;
		    k++;
	    }
	    while(j<n){
		    V[k]=B[j];
		    k++;
		    j++;
	    }
	    return V;
	    
};

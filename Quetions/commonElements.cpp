//Quetion 1 Find Common Elements in array

// Description :
// Given three arrays sorted in increasing order. Find the elements that are common in all three arrays.

// Code


#include <bits/stdc++.h>
using namespace std;

// Method 1
// Using for loop

class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here
            vector <int> commonElements;
        
            for(int i=0;i<n1;i++){
                for(int j=0;j<n2;j++){
                    for(int k=0;k<n3;k++){
                         int cnt = count(commonElements.begin(), commonElements.end(), A[i]);  
                        if((A[i]==B[j])&&(B[j]==C[k]) && !cnt){
                    
                            
                            commonElements.push_back(A[i]);
                            
                        }
                        
                    }
                }
            }
        return commonElements;
        }

};

//Time complexity : O(n^3)

//Method 2
// Using while loop

class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
             vector <int> commonElements;
                int i=0;
                while(i<n1){

                int j=0;
                    while(j<n2){

                    int k=0;
                        while(k<n3){
                        int cnt = count(commonElements.begin(), commonElements.end(), A[i]);
                        if((A[i]==B[j])&&(B[j]==C[k]) && !cnt){
                            commonElements.push_back(A[i]);
                        }
                        k++;
                    }
                    j++;
                }
                i++;
            }
            return commonElements;
        }
};

//Time complexity : O(n^3)

// Method 3
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            vector<int>ans;
            set<int>st;
             
             int i,j,k;
             i=j=k=0;
             
             while(i<n1 && j<n2 && k<n3){
                if(A[i]==B[j] && B[j]==C[k]){
                    st.insert(A[i]);
                    i++,j++,k++;
                }
                else if(A[i]<B[j]){
                    i++; 
                }
                else if(B[j]<C[k]){
                    j++;
                }
                else{
                    k++;
                }
            }
             
            for(auto i:st){
                ans.push_back(i);
            }
            return ans;
        }
};



int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}

vector<int> commonElement(vector<int> &A,vector<int> &B){
    unordered_map<int,int> hm;
    int n=A.size();
    int m=B.size();
    vector<int> ans;

    for(int i=0;i<n;i++){
        hm[A[i]]++;
    }
    for(int i=0;i<m;i++){
        if(hm[B[i]]>0){
            ans.push_back(B[i]);
        }
        hm[B[i]]--;
    }
    return ans;
}

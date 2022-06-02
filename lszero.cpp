vector<int> Solution::lszero(vector<int> &A) {
    unordered_map<long long int,int> hm;
    int n=A.size();
    vector<long long int> pf(n);
    pf[0]=A[0];
    for(int i=1;i<n;i++){
        pf[i]=A[i]+pf[i-1];
    }
    int maxLen=INT_MIN;
    int startIndex=-1;
    int endIndex;
    vector<int> ans;
    
    hm[0]=-1;
    for(int i=0;i<n;i++){
        if(hm.find(pf[i])!=hm.end()){
            int len=i-hm[pf[i]];
            if(len>maxLen){
                maxLen=len;
                startIndex=hm[pf[i]]+1;
                endIndex=i;
            }
        }
        else{
            hm[pf[i]]=i;
        }
    }
    if(startIndex==-1){
        return ans;
    }
    for(int i=startIndex;i<=endIndex;i++){
        ans.push_back(A[i]);
    }
    return ans;
}

int changeChar(string A,int B){
    int n=A.size();
    vector<int>arr(26);
    int index;
    if(B==0){
        return n;
    }
    if(B>n){
        return 1;
    }
    
    for(int i=0;i<A.size();i++){
        index=A[i]-'a';
        arr[index]++;
    }
    sort(arr.begin(),arr.end());
    
    int breakPoint;
    for(int i=0;i<arr.size();i++){
        if(arr[i]<=B){
            B-=arr[i];
        }
        else{
            breakPoint=i;
            break;
        }
    }
    return 26-breakPoint;
}

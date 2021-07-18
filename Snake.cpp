int Solution::snakeLadder(vector<vector<int> > &A, vector<vector<int> > &B) {
      map<int,int>mp;
       map<int,bool>visited;
        for(int i=1;i<=100;i++)visited[i]=false;
      for(int i=1;i<=100;i++)mp[i]=-1;
      int n= A.size();
      int m= B.size();
      for(int i=0;i<n;i++){
          mp[A[i][0]]= A[i][1];
      }
       for(int i=0;i<m;i++){
          mp[B[i][0]]= B[i][1];
      }
    queue<pair<int,int>>q;
    q.push({1,0});
     while(!q.empty()){
         auto it = q.front();
         int sv= it.first ; int w= it.second;
            if(sv==100){
                return w;
            }
         visited[sv]=true;
         q.pop();

        for (int i=1;i<=6;i++ ) {
            int pos=sv+i;
            if(pos<101){
           if(mp[pos]!=-1){
               pos=mp[pos];
           }
             if(!visited[pos]){
             q.push({pos,w+1});
                visited[pos]=true;
             }

            }
      
        }




     }

return -1;

}

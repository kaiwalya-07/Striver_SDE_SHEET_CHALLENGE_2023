
void dfs(vector<int>adjList[],vector<int>&temp,vector<int>&vis,int node){
    vis[node]=1;
    temp.push_back(node);
    for(auto it:adjList[node]){
        if(!vis[it]){
           dfs(adjList,temp,vis,it);
        }
    }
}


vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &a)
{
    // Write your code here
    vector<int>adjList[V];

    // for (int i = 0; i < a.size(); ++i)
    // {  
    //         int u=a[i][0];
    //         int v=a[i][1];        
    //         adjList[u].push_back(v);
    //         adjList[v].push_back(u);
           
    // }


           

//  making an adjacency list

        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(a[i][j]==1 && i!=j){
                    adjList[i].push_back(j);
                    adjList[j].push_back(i);
                }
            }
        }

   vector<int> vis(V,0);

   vector<vector<int>> ans;

     for(int i=0;i<V;++i){
           if(!vis[i]){
               vector<int> temp;
               dfs(adjList,temp,vis,i);
               ans.push_back(temp);
           }
       } 

       return ans;
}

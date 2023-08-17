class Solution {

  public:
    // Function to detect cycle in an undirected graph.
    bool dfsCycle( vector<int> adj[] , vector<bool>&visited ,int node , int parent){
        visited[node]=true ;
        
        for(auto neighbour : adj[node]){
            if(!visited[neighbour]){
                bool ans = dfsCycle(adj , visited , neighbour , node) ;
                if(ans){
                    return true ;
                }
            }
            else if(neighbour != parent){
                return true ;
            }
        }
        return false ;
    }
    
    bool bfsCycle( vector<int> adj[] , vector<bool>&visited ,  vector<int>&parent,int node){
        visited[node] = true ;
        parent[node] = -1 ;
        
        queue<int>q ;
        q.push(node) ;
        
        while(!q.empty()){
            int front = q.front() ;
            q.pop() ;
            
            for( auto neighbour : adj[front]){
                if(!visited[neighbour]){
                    visited[neighbour]= true ;
                    parent[neighbour] = front ;
                    q.push(neighbour) ;
                }
                
                else if(parent[front] != neighbour){
                    return true ;
                }
            }
        }
        return false ;
    }
    bool isCycle(int V, vector<int> adj[]) {
        
        vector<bool>visited(V ,0) ;
        vector<int>parent(V , 0) ;
        for(int i = 0 ;i < V ;i++){
            if(!visited[i]){
                // int ans = dfsCycle(adj , visited , i , -1) ;
                bool ans = bfsCycle(adj , visited , parent ,i) ;
                if(ans){
                    return true ;
                }
            }
        }
        
        return false ;
    }


};

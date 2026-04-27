class Graph {
public:
    unordered_map<int,vector<int>> graph;
    Graph() {

    }

    void addEdge(int src, int dst) {
        if(graph.count(src)==0){
            graph[src].push_back(dst);
        }
        else{
            for(auto i:graph[src]){
                if(i==dst){
                    return ;
                }
            }
            graph[src].push_back(dst);
        }
        
        
        if(graph.count(dst)==0){
            graph[dst].push_back({});
        }
        
    }

    bool removeEdge(int src, int dst) {
        if(graph.count(src)!=0&&graph.count(dst)!=0){
            for(int i =0; i<graph[src].size();i++){
                if(graph[src][i]==dst){
                    graph[src][i]=graph[src][graph[src].size()-1];
                    graph[src].pop_back();
                    return true;
                }
            }
        }
        return false;
    }

    bool hasPath(int src, int dst) {
        unordered_set<int> set;
        queue<int> q;
        q.push(src);

        while(q.size()>0){
            int qlen=q.size();
            for(int i=0;i<qlen;i++){
                auto node=q.front();
                q.pop();
                if(node==dst){
                    return true;
                }

                for(auto i:graph[node]){
                    if(set.count(i)==0){
                        set.insert(i);
                        q.push(i);
                    }
                }
            }
        }
        return false;
    }














};

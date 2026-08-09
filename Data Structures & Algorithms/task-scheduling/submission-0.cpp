class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char, int>mp;
        for(int i=0;i<tasks.size();i++){
            mp[tasks[i]]++;
        }
        priority_queue<int>pq;
        for(auto& t: mp){
            pq.push(t.second);
        }
        queue<pair<int, int>>q;
        int slot=0; 
        while(!pq.empty() || !q.empty()){
            slot++;
            if(!pq.empty()){
                int occ=pq.top();
                pq.pop();
                occ--;
                if(occ>0) q.push({occ, slot + n});
            }
            if(!q.empty() && q.front().second==slot){
                pq.push(q.front().first);
                q.pop();
            }
        }
        return slot; 
    }
};

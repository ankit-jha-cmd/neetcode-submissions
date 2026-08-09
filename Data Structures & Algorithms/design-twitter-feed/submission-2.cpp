class Twitter {
public:
    unordered_map<int, vector<pair<int, int>>>tweets;
    unordered_map<int, unordered_set<int>>following;
    int time;
    int k;
    Twitter() {
        time=0;
        k=10;
    }
    
    void postTweet(int userId, int tweetId) {
        tweets[userId].push_back({time++, tweetId});
    }
    
    vector<int> getNewsFeed(int userId) {

        priority_queue<pair<int, int>>pq;
        for(auto& it:tweets[userId]) pq.push(it);
        
        for(int followees : following[userId]){
            if(followees==userId) continue;
            for(auto& it : tweets[followees]) pq.push(it);
        }

            int cnt=0;
            vector<int>ans;
            while(!pq.empty() && cnt<k){
                ans.push_back(pq.top().second);
                pq.pop();
                cnt++;
            }
            return ans;
    }
    
    void follow(int followerId, int followeeId) {
        following[followerId].insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
        following[followerId].erase(followeeId);
    }
};

class MedianFinder {
public:
priority_queue<int>maxheap;
priority_queue<int, vector<int>, greater<int>>minheap;
    MedianFinder() {
    }
    
    void addNum(int num) {
        maxheap.push(num);
        if(maxheap.size()>minheap.size()+1){
            minheap.push(maxheap.top());
            maxheap.pop();
        }
        if(!minheap.empty()){
            if(maxheap.top()>minheap.top()){
                minheap.push(maxheap.top());
                maxheap.pop();
                maxheap.push(minheap.top());
                minheap.pop();
            }
        }
    }
    
    double findMedian() {
        if(maxheap.size()==minheap.size())
        return (maxheap.top() + minheap.top())/2.0;
        return maxheap.top();
    }
};

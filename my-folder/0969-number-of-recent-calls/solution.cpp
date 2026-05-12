class RecentCounter {
public:
    vector<int> requests;
    RecentCounter() {
        this->requests = {};
    }
    
    int ping(int t) {
        int count = 0;
        this->requests.push_back(t);
        int low = t - 3000;
        for (int i : requests){
            if(i >= low && i <= t){
                count++;
            }
        }
        return count;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */

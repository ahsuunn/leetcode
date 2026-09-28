class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size();
        
        // Track which points are already connected to our group
        vector<bool> visited(n, false);
        
        // Track the absolute shortest distance from our group to each point
        // We start them all at "infinity" (INT_MAX)
        vector<int> minDist(n, INT_MAX); 
        
        // Start by connecting the very first point (index 0)
        // It costs 0 to connect the starting point to itself.
        minDist[0] = 0; 
        
        int totalCost = 0;
        
        // We need to connect 'n' points, so we loop 'n' times
        for (int step = 0; step < n; step++) {
            
            int currNode = -1;
            
            // STEP 1: Find the unvisited point that is closest to our group
            for (int i = 0; i < n; i++) {
                if (!visited[i] && (currNode == -1 || minDist[i] < minDist[currNode])) {
                    currNode = i;
                }
            }
            
            // STEP 2: Officially add it to our group and pay the cost
            visited[currNode] = true;
            totalCost += minDist[currNode];
            
            // STEP 3: Now that we have a new point in our group, check if it 
            // provides a shorter path to any of the remaining unvisited points
            for (int i = 0; i < n; i++) {
                if (!visited[i]) {
                    // Calculate Manhattan distance between our new point and point 'i'
                    int dist = std::abs(points[currNode][0] - points[i][0]) + 
                               std::abs(points[currNode][1] - points[i][1]);
                    
                    // If this new distance is shorter than the previously known shortest 
                    // distance to point 'i', update it!
                    if (dist < minDist[i]) {
                        minDist[i] = dist;
                    }
                }
            }
        }
        
        return totalCost;
    }
};

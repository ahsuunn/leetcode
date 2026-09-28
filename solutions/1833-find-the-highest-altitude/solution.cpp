class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> altitude;
        altitude.push_back(0);
        int largestAltitude = 0;
        for(int i = 0; i < gain.size(); i++){
            int currentAltitude = altitude[i] + gain[i]; 
            altitude.push_back(currentAltitude);
            if(currentAltitude > largestAltitude){
                largestAltitude = currentAltitude; 
            }
        }   
        return largestAltitude;
    }
};

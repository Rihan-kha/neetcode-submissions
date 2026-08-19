class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int, double>> cars; // {position, time to reach target}
        
        for (int i = 0; i < n; i++) {
            double time = (double)(target - position[i]) / speed[i];
            cars.push_back({position[i], time});
        }
        
        // Sort cars by position descending (closest to target first)
        sort(cars.rbegin(), cars.rend());
        
        int fleets = 0;
        double currMaxTime = 0.0;
        
        for (auto& car : cars) {
            if (car.second > currMaxTime) {
                // New fleet
                fleets++;
                currMaxTime = car.second;
            }
            // If car.second <= currMaxTime, it joins the fleet ahead
        }
        
        return fleets;
    }
};

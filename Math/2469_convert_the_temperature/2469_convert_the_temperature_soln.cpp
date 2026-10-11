class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double>oforms;
        oforms.push_back(celsius + 273.15);
        oforms.push_back(celsius * 1.80+32.00);
        return oforms;
    }
    
};
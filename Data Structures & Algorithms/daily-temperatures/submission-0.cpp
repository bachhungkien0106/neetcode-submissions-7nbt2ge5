class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        std::vector<int> vec;
        int i;
        for (i = 0; i < temperatures.size(); i++)
        {
            int day = findWarmerDay(temperatures, i);
            if(day != 0){
                vec.push_back(day-i);
            }
            else{
                vec.push_back(day);
            }
        }
        return vec;
    }
    int findWarmerDay(vector<int>& temperatures, int i){
        int j = i + 1;
        for (j; j < temperatures.size(); j++){
            if(temperatures[i] < temperatures[j])
            {
                return j;
            }
        }
        return 0;
    }
};

-------------------------------------------------Brute------------------------------------
class Solution {
   public:
    vector<int> asteroidCollision(vector<int> &asteroids) {
        vector<int> v = asteroids;
        
        int i = 0;
        while (i < (int)v.size() - 1) {          //! When the size of v.size() is varing in the loop then convert the value to int 
            if (v[i] > 0 && v[i + 1] < 0) {
                if (abs(v[i + 1]) > v[i]) {
                    v.erase(v.begin() + i);
                    if (i > 0) i--; 
                } else if (abs(v[i + 1]) == v[i]) {
                    v.erase(v.begin() + i, v.begin() + i + 2);
                    if (i > 0) i--; 
                } else {
                    v.erase(v.begin() + i + 1);
                }
            } else {
                i++;
            }
        }
        return v;
    }
};
----------------------------------------------Optimal---------------------------------
class Solution {
   public:
    vector<int> asteroidCollision(vector<int> &asteroids) {
        int n = asteroids.size();

        stack<int> st;
        vector<int> v;

        for (int i = 0; i < n; i++) {
            if (asteroids[i] > 0) {
                st.push(asteroids[i]);
            }

            else {
                while (!st.empty() && st.top() > 0 &&
                       st.top() < abs(asteroids[i])) {
                    st.pop();
                }

                if (!st.empty() && st.top() == abs(asteroids[i])) {
                    st.pop();
                }

                else if (st.empty() || st.top() < 0) {
                    st.push(asteroids[i]);
                }
            }
        }
        int m = st.size();
        for (int i = 0; i < m; i++) {
            v.push_back(st.top());
            st.pop();
        }

        reverse(v.begin(), v.end());
        return v;
    }
};
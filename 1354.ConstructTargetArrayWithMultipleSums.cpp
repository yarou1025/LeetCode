class Solution
{
public:
    bool isPossible(vector<int> &target)
    {
        auto s = accumulate(target.begin(), target.end(), (long long)0);
        priority_queue<int> q(target.begin(), target.end());
        while (q.top() != 1)
        {
            auto cur = q.top();
            q.pop();
            s -= cur;
            if (s <= 1)
                return s;
            auto x = cur % s;
            if ((x == 0) or (x == cur))
                return false;
            q.push(x);
            s += x;
        }
        return true;
    }
};
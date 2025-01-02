struct T
{
    int num;
    int freq;
    T(int num, int freq) : num(num), freq(freq) {}
};

class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int, int> cnt;

        auto cmp = [](const T &a, const T &b)
        { return a.freq > b.freq; };

        priority_queue<T, vector<T>, decltype(cmp)> minHeap(cmp);

        for (auto x : nums)
        {
            cnt[x]++;
        }

        for (const auto &[num, freq] : cnt)
        {
            minHeap.emplace(num, freq);
            if (minHeap.size() > k)
            {
                minHeap.pop();
            }
        }

        while (!minHeap.empty())
        {
            ans.push_back(minHeap.top().num), minHeap.pop();
        }
        return ans;
    }
};
class Solution {
public:
    static const int BASE = 397; // Base for rolling hash
    static const long long MOD = 100000000069; // Modulo to prevent overflow

    int countDistinct(std::vector<int>& nums, int maxOnes, int moduloFactor) {
        std::vector<int> isDivisible(nums.size()); // 1 if divisible by moduloFactor, else 0
        std::transform(nums.begin(), nums.end(), isDivisible.begin(),
                       [moduloFactor](int x) { return x % moduloFactor == 0 ? 1 : 0; });

        std::unordered_set<long long> distinctHashes;

        for (int start = 0; start < nums.size(); ++start) {
            int onesCount = 0; // Count of elements divisible by moduloFactor in the current subarray
            long long hashValue = 0; // Rolling hash value for the current subarray

            for (int end = start; end < nums.size() && onesCount <= maxOnes; ++end) {
                // Update the rolling hash value
                hashValue = (hashValue * BASE + nums[end] + (end + 1 - start)) % MOD;

                // Update the count of elements divisible by moduloFactor
                onesCount += (isDivisible[end] == 1);

                // Add the hash value to the set if the count of divisible elements is within the limit
                if (onesCount <= maxOnes) {
                    distinctHashes.insert(hashValue);
                } else {
                    // Break the loop if the count exceeds the limit
                    break;
                }
            }
        }

        // Return the count of distinct hash values
        return distinctHashes.size();
    }
};
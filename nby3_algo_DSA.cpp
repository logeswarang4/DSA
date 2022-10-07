#include <unordered_map>

int Solution::repeatedNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int x = A.size()/3;
    
    unordered_map<int ,int> freq;
    
    for(auto i : A)
    {
        freq[i]++;
    }
    for(auto e : freq)
    {
        if(e.second > x)
            return e.first;
    }
    return -1;
}

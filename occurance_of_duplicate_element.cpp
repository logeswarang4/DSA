# KLA TENCOR
# INTERVIEW QUESTION
# Find the occurance of the elements and total count should be same as the element -> Alpha
# Find the occurance of the elements and total count should be same as the element also the starting position should be same as the element position --> Beta
# Output should be the difference in the Alpha and Beta

#include <iostream>
#include <vector>
#include <map>
using namespace std;

void alpha_beta(vector<int> arr)
{
    int count=1;
    map<pair<int,int> , int> alpha;
    for(int i =0; i <= arr.size()-1; i++)
    {
        count=1;
        int j;
        for( j=i+1; j <= arr.size()-1; j++)
        {
            if(arr[i] == arr[j])
                count++;
            else
                break;
        }
        if(arr[i] ==count)
        {
            alpha[make_pair(arr[i], i+1)] = count;
        }
        i=j-1;
    }
    int ans =0, alpha_count=0, beta_count =0;
    for(auto a: alpha)
    {
        if(a.first.first == a.second)
            alpha_count++;
        if(a.first.first == a.first.second)
            beta_count++;
            
        //cout<<a.first.first<<" "<<a.first.second<<" "<<a.second<<endl;
    }
    //cout<< alpha_count <<" "<<beta_count << " " <<(alpha_count-beta_count)<<endl;
    cout<<alpha_count-beta_count<<endl;
}

int main()
{
    vector<int> arr= {3,3,2,2,5,5,5,5,5,3,3,3,2,2};
    //cout <<"size:"<<arr.size()<<endl;
    alpha_beta(arr);

    return 0;
}

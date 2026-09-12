class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        bool flag=0;
        int tot=n+m;
        int target=0;
        if((tot)%2==0) target=tot/2;
        else{
            target= tot/2;
            flag=1;
        }
        int i=0;
        int j=0;
        int cnt=0;
        vector<int>temp;
        while(i<n && j<m){  
            if(nums1[i]<=nums2[j]){
                temp.push_back(nums1[i++]);
                cnt++;
            }
            else{
                temp.push_back(nums2[j++]);
                cnt++;
            }
            if(cnt==target+1 && flag==1) return temp[target];
            if(cnt== target+1 && flag==0) return double((temp[target]+temp[target-1])/2.0);
        }
        while(i<n){
            temp.push_back(nums1[i++]);
            cnt++;
            if(cnt==target+1 && flag==1) return temp[target];
            if(cnt== target+1 && flag==0) return double((temp[target]+temp[target-1])/2.0);
        }

        while(j<m){
            temp.push_back(nums2[j++]);
                cnt++;
                if(cnt==target+1 && flag==1) return temp[target];
            if(cnt== target+1 && flag==0) return double((temp[target]+temp[target-1])/2.0);

        }
        return 0;
    }
};

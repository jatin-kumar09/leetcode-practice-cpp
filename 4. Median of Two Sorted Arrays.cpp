/*
Runtime: 32ms 
Memory: 90.2MB
CPP
*/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        double result;
        int i=0,j=0;
        while(i<nums1.size()&& j<nums2.size()){
            if(nums1[i]<nums2[j])   {arr.push_back(nums1[i]);i++;}
            else    {arr.push_back(nums2[j]);j++;}
        }
        
        while(i<nums1.size())   {arr.push_back(nums1[i]);i++;}
        
        while(j<nums2.size())   {arr.push_back(nums2[j]);j++;}
        
        int k=arr.size();
        //cout<<k;
        if(k%2==0){
            //cout<<arr[(k/2)-1]<<arr[(k/2)];
            result=(arr[(k/2)-1]+arr[(k/2)])/2.0;
            //cout<<result;
        }
        else    result=arr[k/2];
        //cout<<result;
        
        return result;
    }
};

/**********************************************************************************************************************************/
/**********************************************************************************************************************************/
/*
Runtime: 7ms 
Memory: 47.6MB
JAVA
*/

class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        int n=nums1.length+nums2.length;
        ArrayList<Integer> arr=new ArrayList<>();
        int i=0,j=0,k=0;
        int p=(n)/2+1;
        while(i<nums1.length && j<nums2.length && k<p){
            if(nums1[i]<nums2[j]){
                arr.add(nums1[i]);
                i++;
                }
            else{
                arr.add(nums2[j]);
                j++;
            }
            k++;
        }
        
        while(i<nums1.length && k<p){
            arr.add(nums1[i]);
            i++;
            k++;
        }
        while(j<nums2.length && k<p){
            arr.add(nums2[j]);
            j++;
            k++;
        }
        
        k--;
        
        return n%2==0   ? (double)(arr.get(k-1)+arr.get(k))/2.0 : (double)arr.get(k);
    }
}

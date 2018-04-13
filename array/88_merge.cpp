#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
	int i,j,k=0;
	vector<int> nums(m);
	for(i=0;i<m;i++)nums[i]=nums1[i];
	i=0;
	while((i<m)&&(j<n)){
		if(nums[i]<nums2[j])
			nums1[k++]=nums[i++];
		else
			nums1[k++]=nums2[j++];
	}
	if(i==m)
		while(j<n)
			nums1[k++]=nums2[j++];
	else
		while(i<m)
			nums1[k++]=nums[i++];
    }
    
int main(){
	vector<int> nums1(6),nums2(3);
	for(int i=0;i<6;i++)cin>>nums1[i];
	for(int i=0;i<3;i++)cin>>nums2[i];

	merge(nums1,3,nums2,3);
	for(int i=0;i<6;i++)cout<<nums1[i]<<"  ";
	cout<<endl;
}

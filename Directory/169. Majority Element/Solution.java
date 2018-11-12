/*
* @Author: yufeng
* @Date:   2018-11-12 21:40:26
* @Last Modified by:   yufeng
* @Last Modified time: 2018-11-12 21:46:14
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/

class Solution {
    public int majorityElement(int[] nums) {
        int res=0;
        for(int i=0; i<32; i++){
        	int ones=0;
        	for(int x: nums){
        		ones+=((x>>i)&1);
        	}
        	if(ones>nums.length-ones){
        		res|=(1<<i);
        	}
        }
        return res;
    }
}
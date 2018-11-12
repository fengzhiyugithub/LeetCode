/*
* @Author: yufeng
* @Date:   2018-11-12 21:47:45
* @Last Modified by:   yufeng
* @Last Modified time: 2018-11-12 22:08:38
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/

class Solution {
    public void rotate(int[] nums, int k) {
        k %= nums.length;
        reverse(nums, 0, nums.length-1);
        reverse(nums, 0, k-1);
        reverse(nums, k, nums.length-1);
    }
    public void reverse(int[] nums, int start, int end){
    	while(start < end){
    		int tmp = nums[start];
    		nums[start++] = nums[end];
    		nums[end--] = tmp;
    	}
    }
}
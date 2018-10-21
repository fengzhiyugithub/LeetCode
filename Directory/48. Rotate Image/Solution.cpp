/*
* @Author: yufeng
* @Date:   2018-10-21 17:57:12
* @Last Modified by:   yufeng
* @Last Modified time: 2018-10-21 17:59:24
* @Email: fzhiy270@sina.com
* @Blog: http://fzhiy.com/
*/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i=0; i<matrix.size(); i++){
        	for(int j=0; j<i; j++){
        		swap(matrix[i][j], matrix[j][i]);
        	}
        }
        for(int i=0; i<matrix.size(); i++){
        	reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};
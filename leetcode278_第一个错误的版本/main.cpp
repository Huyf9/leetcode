bool isBadVersion(int version) {
    if (version < bad) return false; //bad为版本出错的第一个版本
    else return true;
}

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1, right = n;
        int mid = 0, result = 0;
        while (right>=left){
            mid = left + (right - left) / 2;
            if (isBadVersion(mid)) {
                result = mid;
                right = mid - 1;
            }
            else left = mid + 1;
        }
        return result;
    }
};

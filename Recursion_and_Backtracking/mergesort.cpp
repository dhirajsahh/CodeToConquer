// https://leetcode.com/problems/sort-an-array/

class Solution
{
public:
    vector<int> sortArray(vector<int> &nums)
    {
        int n = nums.size();
        int l = 0;
        int r = n - 1;
        mergeSort(nums, l, r);
        return nums;
    }
    void mergeSort(vector<int> &nums, int l, int r)
    {

        if (l == r)
        {
            return;
        }
        int mid = l + (r - l) / 2;
        mergeSort(nums, l, mid);
        mergeSort(nums, mid + 1, r);
        mergeArray(nums, l, mid, r);
    }
    void mergeArray(vector<int> &nums, int l, int mid, int r)
    {
        int n1 = mid - l + 1;
        int n2 = r - (mid + 1) + 1;
        vector<int> leftSide(n1);
        vector<int> rightSide(n2);
        int k = l;
        for (int i = 0; i < n1; i++)
        {
            leftSide[i] = nums[k];
            k++;
        }
        for (int i = 0; i < n2; i++)
        {
            rightSide[i] = nums[k];
            k++;
        }
        int i = 0;
        int j = 0;
        k = l;
        while (i < n1 && j < n2)
        {
            if (leftSide[i] <= rightSide[j])
            {
                nums[k] = leftSide[i];
                i++;
            }
            else
            {
                nums[k] = rightSide[j];
                j++;
            }
            k++;
        }
        while (i < n1)
        {
            nums[k] = leftSide[i];
            i++;
            k++;
        }
        while (j < n2)
        {
            nums[k] = rightSide[j];
            j++;
            k++;
        }
        return;
    }
};
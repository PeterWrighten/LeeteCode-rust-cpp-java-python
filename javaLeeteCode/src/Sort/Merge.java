
public class Merge {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int[] sorted = new int[m+n];
        int i = 0, j = 0;
        for(int k = 0; k < m+n; k++) {
            if(i >= m)
                sorted[k] = nums2[j++];
            else if(j >= n) 
                sorted[k] = nums1[i++];
            else if(nums1[i] > nums2[j]) 
                sorted[k] = nums2[j++];
            else
                sorted[k] = nums1[i++];
        }
        for(int r = 0; r < m+n; r++)
            nums1[r] = sorted[r];
    }
}
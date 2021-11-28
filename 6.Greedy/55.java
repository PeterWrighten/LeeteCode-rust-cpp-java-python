import java.lang.Math;
public class canJump
{
    public boolean Jump(int[] nums)
    {
        int size = nums.length;
        int ans = 0;
        for(int i = 0; i < size; i++)
        {
            if(i <= ans)
            {
                ans = Math.max(ans, nums[i] + i);
                if(ans >= size - 1)
                {
                    return true;
                }
            }
        }
        return false;
    }

    public static void main(String[] args)
    {
        canJump c = new canJump();
        int[] nums = {1, 2, 6, 8, 9, 67, 45, 9};
        System.out.println(c.Jump(nums));
    }

}
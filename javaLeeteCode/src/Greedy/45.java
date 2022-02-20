import java.lang.Math;


public class canJump 
{
    public int Jump(int[] nums)
    {
        int size = nums.length;
        int mstpos = 0;
        int end = 0;
        int step = 0;
        for(int i = 0; i < size; i++)
        {
            if(mstpos >= i)
            {
                mstpos = Math.max(mstpos, i + nums[i]);
                if( i == end )
                {
                    end = mstpos;
                    step++;
                }
            }
        }
        return step;
    }
    public static void main(String[] args)
    {
        canJump c = new canJump();
        int[] nums = {1, 5, 6, 8, 4, 6, 3, 7};
        System.out.println(c.Jump(nums));
    }
}

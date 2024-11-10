class Solution {
    public int[] twoSum(int[] nums, int target) {


        HashMap<Integer,Integer> hp = new HashMap<>();
        int i;
        for (i = 0; i < nums.length; i++) {
            int s = target - nums[i];

            if (hp.containsKey(s))
                return new int[] { hp.get(s), i };

            else
                hp.put(nums[i], i);
        }

        return null;

    }
}

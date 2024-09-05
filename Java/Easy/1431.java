class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        // find the greatest number of candy first
        int max = candies[0];
        for (int i : candies) {
            if (i > max) {
                max = i;
            }
        }

        // iterate through all
        List<Boolean> answer = new ArrayList<>();
        for (int i : candies) {
            if (i + extraCandies >= max) {
                answer.add(true);
            } else {
                answer.add(false);
            }
        }

        return answer;
    }
}
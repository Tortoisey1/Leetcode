class Solution {
    public boolean lemonadeChange(int[] bills) {
        // count number of 5 dollar bills and 10 dollars
        // for 20 dollar we shld use up the 10 dollar bills first since 5 dollar bills
        // can be used to pay everything
        int count5 = 0;
        int count10 = 0;

        for (int i = 0; i < bills.length; i++) {
            if (bills[i] == 10) {
                count5--;
                count10++;
                if (count5 < 0) {
                    return false;
                }
            } else if (bills[i] == 20) {
                if (count10 > 0) {
                    count10--;
                    count5--;
                } else {
                    count5 -= 3;
                }

                if (count5 < 0) {
                    return false;
                }
            } else {
                count5++;
            }
        }

        return true;
    }
}
class Solution {
    public String defangIPaddr(String address) {
        String[] temp = address.split("\\.");
        return String.join("[.]", temp);
    }
}
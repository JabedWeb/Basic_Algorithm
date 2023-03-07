/**
 * Name : Md Jabed Hossen
 * ID : 213902046
 * Section : DB
 * Email :213902046@student.grren.edu.bd
 * Problem Name : show the even number from an array of 10 numbers
 */
class third {
    public static void main(String[] args) {
        int[] arr = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
        System.out.println("Even numbers are : ");
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] % 2 == 0) {
                System.out.println(arr[i]);
            }
        }
    }
}
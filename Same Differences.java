public class Cp {

	public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt(); // Number of test cases

        while (t-- > 0) {
            int n = scanner.nextInt(); // Size of the array
            int[] a = new int[n];

            for (int i = 0; i < n; ++i) {
                a[i] = scanner.nextInt(); // Input array elements
            }

            int[] freq = new int[2 * n];
            int ans = 0;

            for (int i = 0; i < n; ++i) {
                int diff = a[i] - i;
                freq[diff + n]++; // Shift indices to avoid negative indices
                
            }

            for (int i = 0; i < 2 * n; ++i) {
                int count = freq[i];
                ans += (count * (count - 1)) / 2; // Calculate pairs for each difference
            }

            System.out.println(ans);
            
	}

	}
}

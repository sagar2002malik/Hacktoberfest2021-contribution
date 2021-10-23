public class FrequencyElementArray {
    public static void main(String[] args) {
        int [] arr1 = new int [] {1,4,3,2, 2, 1, 4, 5};
        int [] freq = new int[arr1.length];
        int visited=-1;
        for (int i = 0; i < arr1.length; i++) {
            int count = 1;
            for (int j = i + 1; j < arr1.length; j++) {
                if (arr1[i] == arr1[j]){
                    count++;
                freq[j] = visited;
            }
        }
            if (freq[i] != visited)
                freq[i] = count;
        }
        System.out.println("Element | Frequency: ");
        for (int i=0 ; i<arr1.length ; i++){
            if(freq[i] != visited)
                System.out.println("    " + arr1[i] + "   |   " + freq[i]);
        }
        }
}

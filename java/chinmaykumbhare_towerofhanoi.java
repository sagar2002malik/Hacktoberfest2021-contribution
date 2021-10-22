import java.io.*;

class TowerOfHanoi {

    static void shift(int n, String startPole, String intermediatePole, String endPole) {
        
        if (n == 0) {
            
            return;

        }
        
        shift(n - 1, startPole, endPole, intermediatePole);
        
        System.out.println("Move \"" + n + "\" from " + startPole + " --> " + endPole);
        
        shift(n - 1, intermediatePole, startPole, endPole);
    
    }
    public static void main(String[] args) {

        System.out.print("Enter number of disks: ");

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int numberOfDiscs = 0;

        try {

            numberOfDiscs = Integer.parseInt(br.readLine());

        } catch (NumberFormatException e) {

            e.printStackTrace();

        } catch (IOException e) {

            e.printStackTrace();

        }

        shift(numberOfDiscs, "Pole 1", "Pole 2", "Pole 3");

    }

}
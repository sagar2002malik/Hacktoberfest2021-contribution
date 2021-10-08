import java.util.*;
public class armstrong {

    public static void main(String[] args) 
    {
        Scanner in = new Scanner (System.in);
        int number , originalNumber, remainder, result = 0;
        System.out.print("Enter the number = ");
        number=in.nextInt();
        originalNumber = number;

        while (originalNumber != 0)
        {
            remainder = originalNumber % 10;
            result += Math.pow(remainder, 3);
            originalNumber /= 10;
        }

        if(result == number)
            System.out.println("\n"+number + " is an Armstrong number.");
        else
            System.out.println("\n"+number + " is not an Armstrong number.");
    }
}

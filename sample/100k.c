import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the number of rows");
        int i,j,col;
        int row=sc.nextInt();
        for(i=0;i<2*row;i++){
            col= i>row ? ((2*row)-i):i; 
            for(j=0;j<col;j++){
                System.out.print("* ");
            }
            System.out.println("");
        }
        
    }
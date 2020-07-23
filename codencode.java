import java.util.*;
import java.lang.*;


 class codencode {
    public static  void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m=0,j=0;
        int a[] = new int[n];
        int b[] = new int[n];
        for(int i=0;i<n;i++)
            a[i] = sc.nextInt();
        for(int i=0;i<n;i++)
            b[i] = sc.nextInt();
        for(int i=0;i<n;i++){
            if(a[i]==b[i])
                continue;
            else if(a[i]>b[i])
                m++;
            else
                j++;
        }
        if(m==j)
            System.out.println(0);
        else if(m>j)
            System.out.println(m);
        else
            System.out.println(j);
    }
}

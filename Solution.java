import java.util.*;
class Solution{
 
 public static void main(String []argh)
 {
  Scanner sc = new Scanner(System.in);
  Stack<Integer> bracket = new Stack<>();
  while (sc.hasNext()){
            boolean flag = true;
            
            String input=sc.nextLine();
            //Complete the code
            for(int i = 0; i<input.length(); i++){
                char ch = input.charAt(i);
                if(ch == '{'){
                    bracket.push(1);
                }
                else if(ch == '('){
                    bracket.push(2);
                }
                else if(ch == '['){
                    bracket.push(3);
                }
                else if(ch == '}'){
                    if(bracket.pop()!=1){
                        flag = false;
                        break;
                    }
                }
                else if(ch == ')'){
                    if(bracket.pop()!=2){
                        flag = false;
                        break;
                    }
                }
                else if(ch == ']'){
                    if(bracket.pop()!=3){
                        flag = false;
                        break;
                    }
                }
            }

            if(flag && bracket.isEmpty()){
                System.out.println("true");
            }
            else{
                System.out.println("false");
            }
                
            
  }
  
 }
}
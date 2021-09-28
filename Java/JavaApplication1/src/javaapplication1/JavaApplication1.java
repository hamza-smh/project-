
package javaapplication1;

import java.util.ArrayList;

public class JavaApplication1 {

    public static void main(String[] args) {
      //Profile me = new Profile();
      
//        Profile me = new Profile(); // Create an object of Main
//        me.createProfile(); // Call the public method on the object
//    
         Profile joe = new Profile("Joe", "as", "ss", "ww");
         ArrayList<Profile> sent_request_list = new ArrayList<Profile>();
         sent_request_list.add(joe);
      
//      
//      System.out.println();
 System.out.println(Profile.x);    
    }
    
}

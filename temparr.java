import java.util.*;
public class temparr{
	public static void main(String args[]){
		
		int arr[]={0,1,2,3,0,4,5,0};
		
		//ArrayList<int> tem=new ArrayList<int>();
		
		Arrays.sort(arr);
				System.out.println("sorted array");;
		
		ArrayList<Integer> m=new ArrayList<Integer>();
		ArrayList<Integer> m1=new ArrayList<Integer>();
		for(int i=0;i<arr.length;i++){

             if(arr[i]==0){
				 m.add(arr[i]);
			 }else{
				 
			 m1.add(arr[i]);
			 }
		}	
		System.out.println(m1);
		
		m1.addAll(m);
		
System.out.println(m1);
          

				}
	
	
}
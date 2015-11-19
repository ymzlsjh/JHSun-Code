package demo;

public class DataTrasitiveEx {
	public static void main(String[] args){
		Point test=new Point();
		Point result=new Point();
		result.x=1;
		result.y=2;
		test.setData(result);
		System.out.println("Call the setData()");
		System.out.println("result.x="+result.x);
		System.out.println("result.y="+result.y);
		test.setRefer(result);
		System.out.println("Call the setRefer()");
		System.out.println("result.x="+result.x);
		System.out.println("result.y="+result.y);
	}

}


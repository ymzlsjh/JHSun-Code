package demo;

public class Point {
	int x,y;
	public void setData(Point p){
		p.x=10;
		p.y=20;
	}
	public void setRefer(Point p){
		p=new Point();
		p.x=100;
		p.y=200;
	}

}
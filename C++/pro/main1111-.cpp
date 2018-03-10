#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class Box
{
	public:
		double getVolume()
		{
			return length*breadth*height;
		}
		void setLength(double len)
		{
			length=len;
		}
		void setBreadth(double bre)
		{
			breadth=bre;
		}
		void setHeight(double hei){
			height=hei;
		}
		Box operator+(const Box &b){
			Box box;
        	 box.length = this->length + b.length;
        	 box.breadth = this->breadth + b.breadth;
        	 box.height = this->height + b.height;
        	 return box;
		}
	private:
    	double length;      // ����
      	double breadth;     // ���
      	double height;      // �߶�
};
Box operator+(const Box&, const Box&);
int main(int argc, char** argv) {
	   Box Box1;                // ���� Box1������Ϊ Box
	   Box Box2;                // ���� Box2������Ϊ Box
	   Box Box3;                // ���� Box3������Ϊ Box
	   double volume = 0.0;     // ������洢�ڸñ�����
	 // Box1 ����
   Box1.setLength(6.0); 
   Box1.setBreadth(7.0); 
   Box1.setHeight(5.0);
 
   // Box2 ����
   Box2.setLength(12.0); 
   Box2.setBreadth(13.0); 
   Box2.setHeight(10.0);
 
   // Box1 �����
   volume = Box1.getVolume();
   cout << "Volume of Box1 : " << volume <<endl;
 
   // Box2 �����
   volume = Box2.getVolume();
   cout << "Volume of Box2 : " << volume <<endl;
   
     // ������������ӣ��õ� Box3
   Box3 = Box1 + Box2;
 
   // Box3 �����
   volume = Box3.getVolume();
   cout << "Volume of Box3 : " << volume <<endl;
	
	return 0;
}

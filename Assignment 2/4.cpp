#include <iostream>

using namespace std;
class area
{


      float width, length, areaofrect;
      public:
      area()
      {
          width=1;
          length=1;
          areaofrect=0;
      }

      void setwidth()
      {
           again:
           cout<<"Enter width of rectangle: ";
           cin>>width;
           if(width<0 || width>20)
           {
                  cout<<"You cannot enter width greater than 20 and less than 0.\nEnter Valid Input."<<endl;
                  goto again;
           }
      }
      void setlength()
      {
           again:
           cout<<"Enter length of rectangle: ";
           cin>>length;
           if(length<0 || length>20)
           {
                  cout<<"You cannot enter length greater than 20 and less than 0.\nEnter Valid Input."<<endl;
                  goto again;
           }
      }
      void calculation()
      {
           areaofrect=width*length;
      }
      void display()
      {
           cout<<"Area of rectangle according to given parameters is: "<<areaofrect<<endl;
      }

};
main()
{
      again:
      area c;
      char ask;

      c.setwidth();
      c.setlength();
      c.calculation();
      c.display();


}

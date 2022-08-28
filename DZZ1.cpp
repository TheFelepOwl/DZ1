#include <iostream>
#include<math.h>


using namespace std;

class Triangle
{
    private:

        float a;
        float b;
        float c;
        double p,s;


    public:
        Triangle()
        {
            cout<<"Start of calculation"<<endl;
            this->a = 0;
            this->b = 0;
            this->c = 0;
        }

        Triangle(float a, float b, float c)
        {

            this->a = a;
            this->b = b;
            this->c = c;
        }


         ~Triangle()
        {
            this->a = 0;
            this->b = 0;
            this->c = 0;

            cout<<"ENd of calculation"<<endl;
        }

        void print_sqr ()
        {
            double p,s;

            p=(a+b+c)/2;
            s=sqrt(p*(p-a)*(p-b)*(p-c));


            cout<< "\nA: "<<a<<"\nB: "<<b<<"\nC: "<<c<<"\nS: "<< s<<endl;


        }



};




int main()
{


    Triangle t1,t2(5,4,2);

    t1.print_sqr ();
    t2.print_sqr ();



    return 0;
}


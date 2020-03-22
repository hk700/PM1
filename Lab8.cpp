#include<iostream>


using namespace std;

void salary(double sale[], int n)

{


    int range[11];




    int *r_ptr = range;



    int i;

    for( i = 0 ; i < 11 ; i++ )

        range[i] = 0;

    double *ptr = sale;



    for( i = 0 ; i < n ; i++ , ptr++ )

    {

        double gross_pay = 200.0 + 0.9 * (*ptr);



        if( gross_pay >= 200.0 && gross_pay <= 299.0 )

            (*( r_ptr + 2 ) )++;

        else if( gross_pay >= 300.0 && gross_pay <= 399.0 )

            (*( r_ptr + 3 ) )++;

        else if( gross_pay >= 400.0 && gross_pay <= 499.0 )

            (*( r_ptr + 4 ) )++;

        else if( gross_pay >= 500.0 && gross_pay <= 599.0 )

            (*( r_ptr + 5 ) )++;

        else if( gross_pay >= 600.0 && gross_pay <= 599.0 )

            (*( r_ptr + 6 ) )++;

        else if( gross_pay >= 700.0 && gross_pay <= 799.0 )

            (*( r_ptr + 7 ) )++;

        else if( gross_pay >= 800.0 && gross_pay <= 899.0 )

            (*( r_ptr + 8 ) )++;

        else if( gross_pay >= 900.0 && gross_pay <= 999.0 )

            (*( r_ptr + 9 ) )++;

        else if( gross_pay >= 1000.0)

            (*( r_ptr + 10 ) )++;

    }



    cout<<"Number of people in range 200 - 299 : "<<*( r_ptr + 2 )<<endl;

    cout<<"Number of people in range 300 - 399 : "<<*( r_ptr + 3 )<<endl;

    cout<<"Number of people in range 400 - 499 : "<<*( r_ptr + 4 )<<endl;

    cout<<"Number of people in range 500 - 599 : "<<*( r_ptr + 5 )<<endl;

    cout<<"Number of people in range 600 - 699 : "<<*( r_ptr + 6 )<<endl;

    cout<<"Number of people in range 700 - 799 : "<<*( r_ptr + 7 )<<endl;

    cout<<"Number of people in range 800 - 899 : "<<*( r_ptr + 8 )<<endl;

    cout<<"Number of people in range 900 - 999 : "<<*( r_ptr + 9 )<<endl;

    cout<<"Number of people in range 1000 and above : "<<*( r_ptr + 10 )<<endl;

}

int main()

{

    double sale[50];



    int i;



    for( i = 0 ; i < 50 ; i++ )


        sale[i] = (double)( rand() % 1001 );

    
    salary(sale, 50);



    return 0;

}
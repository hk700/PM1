#include <iostream>

using namespace std;

int main ()
{
    string issues[]={"Health care ","Gun control ","Global warming ","Immigration ","Poverty "};
    int ans[5][10];
    int temp;

        cout<<"Please rate ;";
        int rate;
        char input [20];
        for (int i=0;i<5;i++)
        {


            cout<<issues[i]<<": ";
            cin>>input;
            while ((input[0]))
            {
                cout<<"Please rate number between 1-10\n";
                cin>>input;
            }
            rate= atoi(input);
            while (rate>10||rate<1)
            {
                cout<<"Please rate number between 1-10\n";
                cin>>rate;
            }
            ans[i][rate-1]++;
        }
        float avg=0;
        cout<<"Ratings 1 2 3 4 5 6 7 8 9 10 Avg\n";
        for (int i=0;i<5;i++)
        {
            cout<<issues[i];
            for (int j=0;j<10;j++)
            {
                avg+=ans[i][j];
                cout<<" "<<ans[i][j]<<" ";
            }

            cout<<" "<<avg;
            avg=0;
            cout<<"\n";
        }

    return 0;


    }

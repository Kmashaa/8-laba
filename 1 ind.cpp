#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

struct Inform {
	string destination;
	string time;
	int seats;
};
void formation(int size,Inform* mass) {
    for (int i = 0; i < size; i++) {
        printf_s("Destination ["); printf_s("%d", i + 1); printf_s("]:");
        char dest[50];
        scanf_s("%s", &dest,50);
        mass[i].destination = dest;
        printf_s( "time:");
        char time[50];
        scanf_s("%s", &time,50);
        mass[i].time = time;
        printf_s("Seats:");
        scanf_s("%d", &mass[i].seats);
    }
}
void viewing(int size,Inform* mass){
    
        for (int i = 0; i < size; i++) {
            cout << "Destination[" << i + 1 << "]:" << mass[i].destination << endl;
            cout << "Time:" << mass[i].time << endl;
            cout << "Number of seats:" << mass[i].seats << endl;

        }
    
}
void addition(int size,Inform* mass,int num_add,Inform* nmass) {
    for(int i=0;i<size;i++)
    {
        nmass[i].destination = mass[i].destination;
        nmass[i].time = mass[i].time;
        nmass[i].seats= mass[i].seats;
    }
    int i = size;
    for (size; size < i + num_add; size++) 
    {
        printf_s("%s", "Destination ["); printf_s("%d", size + 1); printf_s("%s", "]:");
        char dest[50];
        scanf_s("%s", &dest, 50);
        nmass[i].destination = dest;
        printf_s("%s","time:");
        char time[50];
        scanf_s("%s", &time, 50);
        nmass[i].time = time;
        printf_s("%s","Seats:");
        scanf_s("%d", &nmass[i].seats);
    }
}
void finding(int a,int size,Inform* nmass) {
    for (int i = 0; i < a; i++) {
        int element;
        printf_s("%s", "What element you want to find?(1-destination,2-time,3-seats):");
        scanf_s("%d", &element);
        if (element == 1) {
            string text_of_element;
            printf_s("%s", "Enter the text of destination:");
            char textof[50];
            scanf_s("%s", &textof,50);
            text_of_element = textof;
            for (int j = 0; j < size; j++) {

                if (nmass[j].destination == text_of_element) {
                    cout << "Destination[" << j + 1 << "]:" << nmass[j].destination << endl;
                    cout << "Time:" << nmass[j].time << endl;
                    cout << "Number of seats:" << nmass[j].seats << endl;
                }
            }
        }
        else if (element == 2) { 
            string text_of_element;
            printf_s("%s", "Enter time:");
            char textof[50];
            scanf_s("%s", &textof, 50);
            text_of_element = textof;
            for (int j = 0; j < size; j++) {
                
                if (nmass[j].time == text_of_element) {
                    cout << "Destination[" << j + 1 << "]:" << nmass[j].destination << endl;
                    cout << "Time:" << nmass[j].time << endl;
                    cout << "Number of seats:" << nmass[j].seats << endl;
                }
            }
        }
        else if (element == 3) {
            int text_of_element;
            printf_s("%s", "Enter the number of seats:");
            scanf_s("%d", &text_of_element);
            for (int j = 0; j < size; j++) {
                
                if (nmass[j].seats == text_of_element) {
                    cout << "Destination[" << j + 1 << "]:" << nmass[j].destination<<endl;
                    cout << "Time:" << nmass[j].time<<endl;
                    cout << "Number of seats:" << nmass[j].seats << endl;

                }
            }
        }
       
    }
}
void sorting(int size, Inform* nmass) {
    for (int i = 1; i < size; i++)
        for (int j = i; j > 0 && nmass[j - 1].seats < nmass[j].seats; j--)
        {
            swap(nmass[j - 1].seats, nmass[j].seats);
            swap(nmass[j - 1].destination, nmass[j].destination);
            swap(nmass[j - 1].time, nmass[j].time);
        }
}
void deletion(int size,Inform* nmass,int a) {
    
    for (int i = 0; i < a; i++) {
        int element;
        int numb;
        printf_s("%s", "  What element you want to delete?(1-destination,2-time,3-seats):");
        scanf_s("%d",&element);
        printf_s("%s", "Enter the NUMBER of destination where you want to delete this element");
        scanf_s("%d", &numb);
        if (element == 1) {
            nmass[numb - 1].destination = "";
            
        }
        else if (element == 2) {
            nmass[numb - 1].time = "";
        }
        else if (element == 3) {
            nmass[numb - 1].seats = 0;

        }
    }
}
void changing(int a, Inform* nmass) {
    for (int i = 0; i < a; i++) {
        int t;
        printf_s("%s", "What element you want to change(1-destination,2-time,3-seats)?");
        scanf_s("%d",&t);
        int k;
        printf_s("%s", "Enter the number of destination");
        scanf_s("%d", &k);
        if (t == 1) {
            string text;
            printf_s("%s", "Enter new name of destination");
            char t[50];
            scanf_s("%s",&t,50);
            text = t;
            nmass[k - 1].destination = text;

        }
        else if (t == 2) {
            string text;
            printf_s("%s", "Enter new time");
            char t[50];
            scanf_s("%s", &t, 50);
            text = t;
            nmass[k - 1].time = text;
        }
        else if (t == 3) {
            int text;
            printf_s("%s", "Enter new number of seats");
            scanf_s("%d", &text);
            nmass[k - 1].seats = text;
        }

    }
}
void findingtask( int size, Inform* nmass) {
    for (int i = 0; i < 1; i++) {
        
        
            string text_of_element;
            char textof[50];
            printf_s("%s", "Now the task. Enter the text of destination:");
            scanf_s("%s",textof,50);
            text_of_element = textof;
            for (int j = 0; j < size; j++) {

                if (nmass[j].destination == text_of_element) {
                    cout << "Destination[" << j + 1 << "]:" << nmass[j].destination << endl;
                    cout << "Time:" << nmass[j].time << endl;
                    cout << "Number of seats:" << nmass[j].seats << endl;
                }

            }

    }
}
int main() {
    int size;
    
    printf_s("How many destinations you want to do:");
    scanf_s("%d", &size);
    Inform* arr = new Inform[size];
    formation(size, arr);

    int a = 0;;
    printf_s("Do you want to add any destinations with it's time and number of seats?(1 if yes, 2 if no)");
    scanf_s("%d", &a);
    int num_add = 0;
    if (a == 1) {
        printf_s("How many destinations you want to add?");
        scanf_s("%d", &num_add);
    }
    int nsize = size + num_add;
    Inform* arrn = new Inform[nsize];
    addition(size, arr, num_add, arrn);
    a = 0;size = nsize;
     sorting(size, arrn);
     printf_s("The result:\n");
     viewing(size, arrn);
   
    a = 0;
    printf_s("Do you wan to see stored information?(1 if yes, 2 if no)");
    scanf_s("%d", &a);
    if (a == 1) {

        viewing(size, arrn);
    }


    a = 0;
    printf_s("Do you want to find any element(s)?(1 if yes,2 if no:");
    scanf_s("%d", &a);
    if (a == 1) {
        printf_s("How many times you want to find any element?");
        scanf_s("%d", &a);
        finding(a, size, arrn);
    }


    a = 0;
    printf_s("Do you want to delete(not change) any element?(1 if yes,2 if no)");
    scanf_s("%d", &a);
    if (a == 1) {
        cout << "How many times you want to find any element to delete it:";
        scanf_s("%d", &a);
        deletion(size, arrn, a);
        cout << "The result"<<endl;
        viewing(size, arrn); 
    }



    a = 0;
    printf_s("Do you want to change any element?(1 if yes,2 if no)");
    scanf_s("%d", &a);
    if (a == 1) {
        printf_s("How many elements you want to change?");
        scanf_s("%d", &a);
        changing(a, arrn);
        printf_s("The result");
        viewing(size, arrn);
    }
    findingtask( size, arrn);
}
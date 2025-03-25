#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
struct automobile
{
    int reg_num;
    int cnic;
    int type;
}car[20], bike[20];
#define Car 1
#define Bike 2
int vehicle_count;
int car_count;
int bike_count;
int getfreeslot(int t, struct automobile bike[20], struct automobile car[20]);
int search (int t, int reg_num, struct automobile bike[20], struct automobile car[20]);
int main()
{
    int option, type, num, row, cnic, exit = 1, x; 
    FILE *cptr;
    cptr=fopen("C:\\Users\\msoha\\Desktop\\PARKING_DATA_CAR.txt", "w"); // change the address for saving file and fix the "file not found error" in CASE 7, the syntax of writing the address should be same as given //
	FILE *bptr;
	bptr=fopen("C:\\Users\\msoha\\Desktop\\PARKING_DATA_BIKE.txt", "w"); // change the address for saving file and fix the "file not found error" in CASE 7, the syntax of writing the address should be same as given //
    printf("\n\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
    printf("\t\t\xdb                                           \xdb\n");
    printf("\t\t\xdb       =============================       \xdb\n");
    printf("\t\t\xdb         PARKING MANAGEMENT SYSTEM         \xdb\n");
    printf("\t\t\xdb       =============================       \xdb\n");
    printf("\t\t\xdb                                           \xdb\n");
    printf("\t\t\xdb         ------------------------          \xdb\n");
    printf("\t\t\xdb           IN COLLABORATION WITH           \xdb\n");
    printf("\t\t\xdb         ------------------------          \xdb\n");
    printf("\t\t\xdb                                           \xdb\n");
    printf("\t\t\xdb        SYED HAMMAD ALAM 22K-4675          \xdb\n");
    printf("\t\t\xdb           SHAIQ HUSSAIN 22K-4785          \xdb\n");
    printf("\t\t\xdb         MAVIA MEHMOOD 22K-4782            \xdb\n");
    printf("\t\t\xdb                                           \xdb\n");
    printf("\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n\n\n");
    printf(" \n\t\t\t\tPRESS ANY KEY:");
    getch();
    system("cls");
    while (exit != 0)
    {
        system("cls");
        printf("\n\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb VEHICLE PARKING \xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");

        printf("\n\t1) Entrance of a Vehicle\n");
        printf("\n\t2) Number Of Vehicles Parked\n");
        printf("\n\t3) Number Of Cars Parked\n");
        printf("\n\t4) Number Of Bikes Parked\n");
        printf("\n\t5) Order of Vehicles\n");
        printf("\n\t6) Exit of a Vehicle\n");
        printf("\n\t7) Backup parking data\n");
        printf("\n\t8) Exit Program\n");
        printf("\n\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");
        printf(" \n\n\t Please enter your option: ");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            system("cls");
            type = 0;
            while (type != Car && type != Bike)
            {
            	printf("\n\t\t\xdb\xdb ADD \xdb\xdb \n\n\n\n");
                printf("\tFor Car Press 1.\n\tFor Bike Press 2.\n");
                printf("\n\tEnter vehicle category : ");
                scanf("%d", &type);
                if (type != Car && type != Bike)
                {
                	system("cls");
                    printf("\n\tInvalid vehicle category selected.\n");
                    printf("\n\tPress any key to continue: ");
                    getch();
                    system("cls");
                }
            }
            x = getfreeslot(type, bike, car);
                if(x==-1)
				{
                	printf("\tSorry, we are out of slots.");
				}
				else
				{
					printf("\tEnter the vehicle's registration number: ");
                    scanf("%d", &num);
                    printf("\tEnter the drivers's CNIC number: ");
                    scanf("%d", &cnic);
					if(type==Car)
					{
						car[x].type=1;
						car[x].cnic=cnic;
						car[x].reg_num=num;
						vehicle_count++;
						car_count++;
						
					}
					else 
					{
						bike[x].type=1;
						bike[x].cnic=cnic;
						bike[x].reg_num=num;
						vehicle_count++;
						bike_count++;
					}
					
				}
            printf("\n\tPress any key to continue: ");
            getch();
            break;
            case 2:
            	system("cls");
            	printf("\n\t\t\xdb\xdb VEHICLE COUNT \xdb\xdb \n\n\n");
            	printf("\t\t\t%d\n\n\n\n\n", vehicle_count);
            	printf("\n\t     Press any key to continue: ");
                getch();
                break;
            case 3:
            	system("cls");
            	printf("\n\t\t\xdb\xdb CAR COUNT \xdb\xdb \n\n\n");
            	printf("\t\t       %d\n\n\n\n\n", car_count);
            	printf("\n\t     Press any key to continue: ");
                getch();
                break;
            case 4:
            	system("cls");
            	printf("\n\t\t\xdb\xdb BIKE COUNT \xdb\xdb \n\n\n");
            	printf("\t\t        %d\n\n\n\n\n", bike_count);
            	printf("\n\t     Press any key to continue: ");
                getch();
                break;
            case 5:
            	system("cls");
            	printf("\n\t\t\xdb\xdb CAR ORDER \xdb\xdb \n\n\n");
            	for (int i=0; i<20; i++)
            	{
            		printf("%d\t", car[i].reg_num);
            		if (i==9)
            		{
            			printf("\n\n\n");
					}
				}
				printf("\n\n\t\t\xdb\xdb BIKE ORDER \xdb\xdb \n\n\n");
            	for (int i=0; i<20; i++)
            	{
            		printf("%d\t", bike[i].reg_num);
            		if (i==9)
            		{
            			printf("\n\n\n");
					}
				}
				printf("\n\n\n\t     Press any key to continue: ");
                getch();
                break;
            case 6:
               system("cls");
               printf("\n\t\t\xdb\xdb  DELETE  \xdb\xdb \n\n\n\n");
               type = 0;
               while (type != Car && type != Bike)
               {
                  printf("\tFor Car Press 1.\n\tFor Bike Press 2.\n");
                  printf("\n\tEnter vehicle category : ");
                  scanf("%d", &type);
                   if (type != Car && type != Bike)
                {
                	system("cls");
                    printf("\n\tInvalid vehicle category selected.\n");
                }
            }
            printf("\tEnter the vehicle's registration number that has left: ");
            scanf("%d", &num);
            x = search(type, num, bike, car);
            if (x==-1)
            {
            	printf("\n\tNO vehicle with this registration number was found.\n");
			}
			else
			{
				if(type==Car)
					{
						car[x].type=0;
						car[x].cnic=0;
						car[x].reg_num=0;
						vehicle_count--;
						car_count--;
						
					}
					else 
					{
						bike[x].type=0;
						bike[x].cnic=0;
						bike[x].reg_num=0;
						vehicle_count--;
						bike_count--;
				    	}
		    	}
			printf("\n\tPress any key to continue: ");
            getch();
            break;
			case 7:
				system("cls");
				printf("\n\t\t\xdb\xdb BACKUP PARKING DATA  \xdb\xdb \n");
			    if(bptr==NULL && cptr==NULL)
			    {
				    printf("\n\n\tFile not found.");
			    }
			    else
			    {
			    	fprintf(cptr, "Slot,Reg Number,CNIC\n");
			    	for(int i=0; i<20; i++)
			    	{
			    	fprintf(cptr, "%d,%d,%d\n", i+1, car[i].reg_num, car[i].cnic);
			        }
			        fclose(cptr);
			        fprintf(bptr, "Slot,Reg Number,CNIC\n");
			        for(int i=0; i<20; i++)
			    	{
			    	fprintf(bptr, "%d,%d,%d\n", i+1, bike[i].reg_num, bike[i].cnic);
			        }
			        fclose(bptr);
				}
				printf("\n\n\tPress any key to continue: ");
                getch();
				break;
				case 8:
					exit=0;
					break;
        }
    }
}
int getfreeslot(int t, struct automobile bike[20], struct automobile car[20])
{
    int r = 0, to_element = 20, x;
    

    if (t == 2)
    {
        to_element = 20;
        for (r=0; r < to_element; r++)
        {
            if (bike[r].reg_num==0)
            {
                x = r;
                return x;
            }
        }
    }
    else
    {
        for (r=0; r < to_element; r++)
        {
            if (car[r].reg_num==0)
            {
                x = r;
                return x;
            }
        }
    }
    return -1;
}
int search (int t, int reg_num, struct automobile bike[20], struct automobile car[20])
{
	int r = 0, to_element = 20, x;
    

    if (t == Bike)
    {
        for (r=0; r < to_element; r++)
        {
            if (bike[r].reg_num==reg_num)
            {
                x = r;
                return x;
            }
        }
    }
    else
    {
        for (r=0; r < to_element; r++)
        {
            if (car[r].reg_num==reg_num)
            {
                x = r;
                return x;
            }
        }
    }
    return -1;
}

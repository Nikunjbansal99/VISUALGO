

// ---------------------------------------------------*****    VISUAL ALGO   *****-----------------------------//

// HEADERS
#include <graphics.h>
#include <dos.h>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
// BUBBLE SORT MACROS
#define SIZE 10
//INSERTION SORT MACROS
#define MAX(a, b) (((a) > (b)) ? (a) : (b))
#define IntiSize 10

// BUBBLE SORT FUCNTION DEFINITIONS/PROTOTYPES

void object(int, int, int, int, int);
void bubble(int);
void iterations(int, int, int, int);
void mixing(int, int);
void gotoxy(int, int);
void displayBubble();
int el[SIZE]; // ARRAY

// INSERTION SORT FUCNTION DEFINITIONS/PROTOTYPES
void element(int, int, int, int, int);
void InsertionSort(int);
void rows(int, int, int, int, bool, int);
void FinalArray(int, int, int);
void displayInsertion();
int ElementsArray[IntiSize]; // ARRAY

int main()
{

	int select;
	int gd = DETECT, gm;
	printf("*******  WELCOME TO VISUALGO  ******** \n\n");
	printf("WE HAVE FOLLOWING VISUALIZATIONS AVALIABLE FOR YOU\n");
	printf("1 - LINEAR SEARCH\n");
	printf("2 - BINARY SEARCH\n");
	printf("3 - BUBBLE SORT\n");
	printf("4 - INSERTION SORT\n");
	printf("Enter the Choice   -  ");
	scanf("%d", &select);
	cleardevice();

	// --------------------------------------------------------------------------------    Linear Search Algorithm  ------------------------- //

	if (select == 1)
	{

		int i, j, gm;

		gd = DETECT;

		int x1, y1, x2, y2;
		int aim; // stores the number to be seached for
		int index;
		int gap; //index for storing number of elements
		int counter = 0;
		char result[index + 1], resultpos[1];

		printf("\n");
		printf("Enter the number of elements \n");
		scanf("%d", &index);
		printf("Enter the elements \n");

		int elements[index]; // for storing the elements entered by the user
		int pos[index], posCount = 0;

		for (int z = 0; z < index; z++)
		{
			scanf("%d", &elements[z]);
		}

		printf("Enter the Number to searched \n");
		scanf("%d", &aim);
		cleardevice();

		initgraph(&gd, &gm, "C:\\TC\\BGI");

		settextstyle(DEFAULT_FONT, HORIZ_DIR, 5);
		outtextxy(25, 50, "LINEAR SEARCH");
		getch();

		settextstyle(DEFAULT_FONT, HORIZ_DIR, 2);

		for (i = 0; counter <= index; i = i + 70)
		{
			setcolor(4);						   // color of rectangle set to RED
			rectangle(100 + i, 250, 150 + i, 200); // creating rectangles

			setcolor(15); // color of rectangle is set to white
			delay(1000);

			sprintf(result, "%d", elements[counter]); // changing integer values from elements, to string and storing in in result

			if (elements[counter] < 9)
			{ // check for better indentation on display
				outtextxy(100 + i + 20, 215, result);
			}

			else if (elements[counter] > 9)
			{ // check for better indentation on display
				outtextxy(100 + i + 12, 215, result);
			}
			else
			{
				outtextxy(100 + i + 15, 215, result); // // check for better indentation on display
			}

			counter++;

			if (counter == index)
			{
				if (aim == elements[counter - 1])
				{
					setcolor(2); // setting rectangle color to green
					rectangle(100 + i, 250, 150 + i, 200);
					posCount++;
					pos[posCount] = elements[counter];
				}
				if (aim != elements[counter - 1])
				{
					setcolor(15); // setting rectangle color to white
					rectangle(100 + i, 250, 150 + i, 200);
				}
				break;
			}
			else if (aim == elements[counter - 1])
			{
				setcolor(2); // setting rectangle color to green
				rectangle(100 + i, 250, 150 + i, 200);
				posCount++;
				pos[posCount] = elements[counter];
				continue;
			}
			else
			{
				setcolor(15); // setting rectangle color to white
				rectangle(100 + i, 250, 150 + i, 200);
			}

			setcolor(15); // setting rectangle color to white
			rectangle(100 + i, 250, 150 + i, 200);

			delay(500);
		}
		delay(300);

		outtextxy(50, 280, "Number of matches : ");
		sprintf(resultpos, "%d", posCount);
		outtextxy(70, 300, resultpos);

		getch();
		closegraph();
		return 0;
	}

	// -------------------------------------------------------------------   BINARY SEARCH ALGORITHM ----------------------------------- //
	else if (select == 2)
	{

		int i, j,gd = DETECT,gm;
		int x1,y1,x2,y2;
		int aim;// stores the number to be seached for
		int index;int gap;//index for storing number of elements
		int counter =0;
		int flag=0;
		char aimp[128];
		printf("\n");
		printf("Enter the number of elements \n");
		scanf("%d",&index);
		printf("Enter the elements \n");
		int d=0;
		int elements[index];// for storing the elements entered by the user
		int pos[index],posCount=0;
		char result[index+1],resultpos[1];
		char indexNoString[index+1];
		int start;
		char startp[128];
		int mid;
		char midp[128];
		int end;
		char endp[128];
//	int indexNoInt;
//	char indexNoString[100];
		for(int z = 0; z< index; z++){
			scanf("%d",&elements[z]);
	}
	
		
	start=0;
	end=index-1;
	
	printf("Enter the Number to searched \n");
	scanf("%d",&aim);
	cleardevice();
	initwindow(1000, 800);
	//initgraph(&gd,&gm,"C:\\TC\\BGI");
	
	
	//initgraph(&gd,&gm,"");
		//	int wd1 = initwindow(400, 400);
		//	setcurrentwindow(wd1);
	
	settextstyle(DEFAULT_FONT,HORIZ_DIR,5);
	outtextxy(25,50,"BINARY SEARCH");
//	getch();
	
	settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
	
	
	//TO Print fixed values
		outtextxy(50,150,"START");
		outtextxy(50,200,"MID");
		outtextxy(50,250,"END");
		outtextxy(50,415,"ARRAY");
		outtextxy(50,475,"INDEX");
		outtextxy(50,600,"STATUS");
		outtextxy(600,100,"NUMBER ENTERED");
		
		
		outtextxy(150,150,":");
		outtextxy(150,200,":");
		outtextxy(150,250,":");
		outtextxy(150,415,":");
		outtextxy(150,475,":");
		outtextxy(150,600,":");
		outtextxy(825,100,":");
		
		sprintf(aimp,"%d",aim);
		outtextxy(850,100,aimp);
	
		
	
	
	
	
	//loop to display the initial array formation with numbers and rectangles
	for(i=0;counter < index;i=i+70)
	{
		setcolor(15); // color of rectangle is set to white
		rectangle(180+i,450,230+i,400); // creating rectangles
		
		sprintf(result,"%d",elements[counter]);
		sprintf(indexNoString,"%d",counter); // changing integer values from elements, to string and storing in in result
//		sprintf(indexNoString,"%d",indexNoInt);
		if(elements[counter]<9 )
		{	// check for better indentation on display
			outtextxy(180+i+20,415,result);	
			outtextxy(180+i+20,475,indexNoString);	
		}
		
		else if(elements[counter]>9)
		{	// check for better indentation on display
			outtextxy(180+i+12,415,result);
			outtextxy(180+i+12,475,indexNoString);	

		}
		else
		{
			outtextxy(180+i+15,415,result); 
			outtextxy(180+i+15,475,indexNoString);
// // check for better indentation on display
		}
		counter++;
		delay(150);
	}

 
 
delay(500);
while (start <= end) { 
delay(400);
        mid=(start+end)/2; 
        setcolor(2);
        sprintf(startp,"%d",start);
		sprintf(midp,"%d",mid);
		sprintf(endp,"%d",end);
		outtextxy(180,150,startp);
		delay(300);
		outtextxy(180,200,midp);
		delay(300);
		outtextxy(180,250,endp);
		delay(300);
		//marking the mid start and end position on array with line an color
		delay(600);	
		setcolor(2);
		line((205+(70*start)), 300, (205+(70*start)), 400);
		outtextxy(180+(70*start),280,"START");
		setcolor(1);
		rectangle(180+(70*start),400,230+(70*start),450);
	
	
		delay(600);
        setcolor(2);
		line((205+(70*end)), 330, (205+(70*end)), 400);
		outtextxy(180+(70*end),310,"End");
		setcolor(1);
		rectangle(180+(end*70),400,230+(70*end),450);
	
	
		delay(600);
        setcolor(2);
		line((205+(70*mid)), 360, (205+(70*mid)), 400);
		outtextxy(180+(70*mid),340,"Mid");
		setcolor(2);
		rectangle(180+(mid*70),400,230+(70*mid),450);
		
		setcolor(0);
		  	outtextxy(180,600,"Next Iteration..."); //updating status on screen
        // Check if x is present at mid 
       if (elements[mid] == aim) //checking the middle element with enterd element
        {
			d=mid;
        	setcolor(15);
			outtextxy(180,600,"Match Found");//updating status on screen
        	flag=1;
		  	break;
		} 
		  	
		setcolor(15);
		outtextxy(180,600,"Checking at the Mid Position");//updating status on screen
			
		delay(2500);  
		setcolor(0);
		outtextxy(180,600,"Checking at the Mid Position");//updating status on screen
		 
		 
		setcolor(15);
		outtextxy(180,600,"Number did not match"); //updating status on screen
		setcolor(4);
		rectangle(180+(mid*70),400,230+(70*mid),450);
		delay(2500);
		setcolor(0);
		outtextxy(180,600,"Number did not match"); //updating status on screen
		setcolor(15); 
		outtextxy(180,600,"Next Iteration..."); //updating status on screen
 		setcolor(15);
 		rectangle(180+(mid*70),400,230+(70*mid),450);
		rectangle(180+(70*start),400,230+(70*start),450);
		rectangle(180+(end*70),400,230+(70*end),450);
		setcolor(0);
		line((205+(70*start)), 300, (205+(70*start)), 400);
		outtextxy(180+(70*start),280,"START");
		
		line((205+(70*end)), 330, (205+(70*end)), 400);
		outtextxy(180+(70*end),310,"End");
		
		line((205+(70*mid)), 360, (205+(70*mid)), 400);
		outtextxy(180+(70*mid),340,"Mid");
		
		delay(400);
		
		outtextxy(180,150,startp);
		outtextxy(180,200,midp);
		outtextxy(180,250,endp);
		
		
 //     If x greater, ignore left half 
   		 if (elements[mid] < aim) 
           start = mid + 1; 
  
       // If x is smaller, ignore right half 
        else
            end = mid - 1; 
            delay(500);
            
    } 

	delay(2500);
//	if(posCount!=0)
//	{
//		posCount = posCount + 1;
//	}
	if(flag!=0)
	{
		//Display the index of the element found
		setcolor(15);
		outtextxy(50,650,"Match found at position : ");
		setcolor(2);
		sprintf(resultpos,"%d",d);
		outtextxy(70,700,resultpos);
	}
	else
	{
		setcolor(15);
		outtextxy(50,650,"Match not found");
	}
	getch();
	//closegraph();
}

	// ----------------------------------------------------------------------------------   BUBBLE SORT ----------------------------------- //
	else if (select == 3)
	{

		// calling the display function that is written outside the main function
		displayBubble();
	}

	// ------------------------------------------------------------------------------   INSERTION SORT ----------------------------------- //
	else if (select == 4)
	{

		displayInsertion();
	}

	else
	{
		cleardevice();
	}
}

// ----------BUBBLE SORT FUNCTIONS----------------------------

void displayBubble()
{
	int n,i,d=0,m=0;
	printf("Enter the No of Elements : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("Enter the %d Element : ",i+1);
		scanf("%d",&el[i]);
	}
	initgraph(&d,&m,""); 								//INITIALIZING THE GRAPHICS DRIVER
	settextstyle(3,0,3);
	setcolor(WHITE);	
	line(1,getmaxy()/2-150,getmaxx(),getmaxy()/2-150); 	// LINE ABOVE GIVEN NUMBER
	setcolor(15);
	settextstyle(10,0,6);
	outtextxy(160,10,"Bubble Sort");
	settextstyle(10,0,4);
	outtextxy(50,100,"Input Array:");
	settextstyle(10,0,2);
	outtextxy(400,110,"Swapped elements:");
	settextstyle(3,0,3);

	/*Calling Object() for displaying content w.r.t number of elements*/
	int x=50,y=100;
	for(int i=0;i<n;i++){
		settextstyle(2,0,6);
		if(i==0) {
			object(x,150,y,200,el[i]);		
		}
		else {
			x=y;
			y+=60;
			object(x,150,y,200,el[i]);		
		}
	}
	getch();
	bubble(n);							//Calling bubble() 
	getch();
}

void iterations(int n,int p, int q, int index)
{
		int x=50,y=100;
		int n1,n2;
	for(int i=0;i<n;i++){
		if(i==index || i==index+1){ 	// For boxes whose color is changed to green color
			setcolor(10);
			 settextstyle(2.8,0,7);
			 n1=el[i-1];
			 n2=el[i];
		}else{
			setcolor(15);				// Else set the rest of boxes to White	color
			settextstyle(2,0,7);
		}
		if(i==0) {						//For positioning element 0 for every iteration	
			object(x,p,y,q,el[i]);		
		}
		else {							//Followed by rest of elements
			x=y;
			y+=60;
			object(x,p,y,q,el[i]);
		}
		if(i==n-1){						// After 1 iteration is complete, we display Swapped elements.
			char toString_n1[10];
			char toString_n2[10];
			itoa(n1,toString_n1,10);	// Converting swapped elements from int to char
			itoa(n2,toString_n2,10);
			setcolor(GREEN);
			settextstyle(2.8,0,7);
			outtextxy(y+100,q-100,toString_n1);		// Displays the Swapped element on extreme right
			delay(500);
			outtextxy(y+150,q-100,toString_n2);		// Displays the Swapped element on extreme right
			delay(500);
		}
		delay(800);
	}
}

void last_iteration(int n,int p, int q)
{													// This prints the final Sorted array 
	int x=50,y=100;									//Starting co-ordinates 
	for(int i=0;i<n;i++){
		setcolor(10);								//Green
		if(i==0){									//Setting co-ordinates according to element 0.
			object(x,p,y,q,el[i]);					//Calling object() which draws rectangle,elements on the screen.
		}else{										//Setting co-ordinates according to rest of the elements.
			x=y;
			y+=60;
			object(x,p,y,q,el[i]);
		}
		delay(500);
	}
}

void bubble(int n)								// Bubble Sort 
{								
	int i,j,m,temp;
	int x,y,p,q;
	x=50;y=250;p=210;q=260;						//Setting co-ordinates
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
				char ele1[5];
				char ele2[5];
			if(el[j]>el[j+1]){
				int temp;
				temp = el[j+1];
				el[j+1] = el[j];
				el[j] = temp;
				iterations(n,p,q,j);			//Calling iteraition() for displaying each iteration
				p+=60;q+=60;						
			}
		}
	}
	/*FROM HERE WE ARE ADDING TEXT Sorted Array AND CHANGING ITS COLOR, 
		THEN THE FINAL ITERATION WITH GREEN COLOR..*/
	settextstyle(10,0,4);
	setcolor(WHITE);
	outtextxy(x,p+20,"Sorted Array:");
	settextstyle(3,0,3);
	last_iteration(n,p+70,q+70);				//Calling iteraition() for displaying Last iteration 
}

void object(int a,int b,int c,int d,int i)
{
	/* OBJECT() -- CREATES THE GIVEN ELEMENT
				IN THE RECTANGLE AND DRAWS ON THE SCREEN*/
	char s[8];
	sprintf(s,"%d",i);
	rectangle(a,b,c,d);
	settextstyle(2,0,6);
	outtextxy(a+20,b+15,s);	
	setcolor(WHITE);
}



// -----------------------------INSERTION SORT FUNCTIONS-------------------------------
void displayInsertion()
{

	int n, i, d = 0, gm, m = 0;
	int gd = DETECT;
	int xdistance;
	printf("Enter the Number of Elements: ");
	scanf("%d", &n);                                             // Stores the number of elements in array
	for (int i = 0; i < n; i++)
	{
		printf("Enter the %d Element : ", i + 1);
		scanf("%d", &ElementsArray[i]);							// Taking Elements of an array as Input
	}

	cleardevice();
	initwindow(800, 800);										// Open a graphics window of 800 x 800 pixels


	xdistance = MAX(130 + (n * 110), getmaxx());				
	
	setcolor(15);                                               	// set color to WHITE
	settextstyle(10, 0, 6);                       					// setting text style having SIMPLE_FONT, Left to Right & Font Size is 6
	outtextxy(160, 10, "Insertion Sort");							// putting text at co-ordinate (160,10)
	settextstyle(10, 0, 4);                       					// setting text style having BOLD_FONT, Left to Right & Font Size is 4
	line(1, getmaxy() / 2 - 315, xdistance, getmaxy() / 2 - 315); 	// Line After Insertion Sort Heading
	getch();

	outtextxy(90, 100, "Input Array:");								// putting text at co-ordinate (90,100)
	settextstyle(3, 0, 3);											// setting text style having SANS_SERIF_FONT, Left to Right & Font Size is 3
	int x = 90, y = 150;
	for (int i = 0; i < n; i++)										// printing the elements of an array
	{
		if (i == 0)													// for first element
		{
			element(x, 155, y, 205, ElementsArray[i]);
			//			getch();
		}
		else														// for other elements
		{
			x = y + 50;
			y += 110;
			element(x, 155, y, 205, ElementsArray[i]);
			//			getch();
		}
		delay(250);													// setting delay of 250
	}
	line(1, getmaxy() / 2 - 175, xdistance, getmaxy() / 2 - 175); 	// Line After Input Array
	getch();

	InsertionSort(n);												// Calling InsertionSort Function

	getch();
}

void rows(int n, int p, int q, int index, bool flag, int off)   // Funtion for assigning row and color to the Element displays on screen
{
	int x = 90, y = 150, dist = 0;
	for (int i = 0; i < n; i++)
	{
		if (i == index + 1)
		{
			if (flag)
				setcolor(14);									// set color to YELLOW
			else
				setcolor(2);									// set color to GREEN
		}
		else
		{
			setcolor(15);										// set color to WHITE
		}
		if (i == 0)
		{
			element(x, p, y, q, ElementsArray[i]);
			//			getch();
		}
		else
		{
			x = y + 50;
			y += 110;
			element(x, p, y, q, ElementsArray[i]);
			//		getch();
		}
		delay(250);												// set delay of 250
		if (i == index + 1)
		{
			setcolor(2);										// set color to GREEN
			if (flag == false)
			{
				rectangle(90 - 10, p - 10, y + 10, q + 10);
			}
			else
			{
				dist = ((off * 110) + 150);
				rectangle(90 - 10, p - 10, dist + 10, q + 10);
			}
		}
		delay(250);
	}
//	getch();
}

void FinalArray(int n, int p, int q)                       		// Defining Function For printing the Sorted Array at last
{
	int x = 90, y = 150;
	for (int i = 0; i < n; i++)
	{
		if (i == 0)												// For 1st element
		{
			element(x, p, y, q, ElementsArray[i]);
			//		getch();
		}
		else													// For other elements
		{
			x = y + 50;
			y += 110;
			element(x, p, y, q, ElementsArray[i]);
			//	getch();
		}
		delay(250);												// set delay of 250
	}
}

void InsertionSort(int n)										// Funtion for Implementing Insertion SORT Algorithm
{
	int i, j, m, temp;
	int x, y, p, q;
	bool flag;
	x = 90;
	y = 150;
	p = 250;
	q = 300;
	int key;
	int a = 0;
	for (i = 1; i < n; i++)
	{
		key = ElementsArray[i];
		j = i - 1;
		flag = false;

		while (j >= 0 && ElementsArray[j] > key)
		{
			ElementsArray[j + 1] = ElementsArray[j];
			j = j - 1;
			flag = true;
		}
		ElementsArray[j + 1] = key;
		a = a + 1;
		rows(n, p, q, j, flag, a);                            	 // Calling row Function
		p = q + 30;
		q += 80;
	}

	/*FROM HERE WE ARE ADDING TEXT Sorted Array AND CHANGING ITS COLOR,	THEN THE FINAL ITERATION WITH GREEN COLOR..*/
	
	settextstyle(10, 0, 4);										// set text style to BOLD_FONT, Left to Right & Font Size is 4
	outtextxy(x, p + 20, "Sorted Array:");						// printing text at co-ordinate (x,p+20)
	settextstyle(3, 0, 3);										// set text style to SANS_SERIF_FONT, Left to Right & Font Size is 3
	setcolor(2);												// set color to GREEN
	FinalArray(n, p + 80, q + 80);								// calling the FinalArray Function to print the Sorted array on Screen
}

void element(int a, int b, int c, int d, int i) 				// Function For creating the given Element with rectangular box on Screen
{
	char s[8];													// char buffer
	sprintf(s, "%d", i);										// store ith Element in char buffer
	rectangle(a, b, c, d);										// printing rectangle(int left, int top, int right, int bottom)
	settextstyle(2, 0, 6);										// set text style to SMALL_FONT, Left to Right & Font Size is 6
	outtextxy(a + 25, b + 20, s);								// printing element at co-ordinate (a+25,b+20)
	line(a, b + 10, c, b + 10);									// creating line which starts at (a,b+10) and ends at (c,b+10)
}

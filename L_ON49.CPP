#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
#include <iostream.h>
#include <conio.h>
#include <fstream.h>

// to generate six round numbers of method outside algorythmic check
// Carl Angel 1997-2011 (Code completion: March 16th 2011)
// array for making file comparison
// computer program to check the validity of chances with six numbers


void generate_array( int array_sort[] )
{
int number_generated;
randomize();
for (int array_num=0; array_num<=5; array_num++)
	{
	array_sort[array_num]=random(50);
	}
}

//class c algorithm for checking order array
//this is a method analyzed by Carl Angel (1997)

void check_array(int array_to_check[])
{
int new_number_generated;
for (int loop=0;loop<=5;loop++){
for (int checker=0; checker<=5; checker++)
{
if (array_to_check[loop] == 1 || array_to_check[loop] == 50 || array_to_check[checker] == array_to_check[checker+1]
	|| array_to_check[loop] == array_to_check[checker] || array_to_check[checker] == 1)
{  			
	    new_number_generated=array_to_check[loop];
	    array_to_check[loop]=random(50);
	    array_to_check[checker]=new_number_generated;

				}}}

 }






//algorithm to sort latter-order numbers of arrays to ascending order
void sort_array(int array_in_tray[])
{
int local_number;
for (int looper=0;looper<=5;looper++)
	{
	for (int counter=0;counter<=5;counter++)
			{
				if (( array_in_tray[counter] > array_in_tray[counter+1] ))
					{
						local_number=array_in_tray[counter];
						array_in_tray[counter]=array_in_tray[counter+1];
						array_in_tray[counter+1]=local_number;
					}
   		}

	}

}


void write_file_of_numbers_to_File(int array_to_gen[])
{
ofstream output ("c:\NumsON49.txt", ios::app);  // computer generated file for archives

	if(!output)
		{
			cout << "\n\n\tCouldn't Open File\n";
			exit(-1);
		}

for (int toggler=0;toggler<=5;toggler++)
	{
		output << array_to_gen[toggler]<<" ";
		if (toggler==5)
				{
				output << "\n";
				}
	}
}

void output_display (int array_to_gener[])
{
cout << "This is the array written to the File: ";

   for (int token=0; token<=5; token++)
		{
   		cout << " " << array_to_gener[token];
		}
}





// three steps - generate, check, sort and write to file...
//memo: start is clean upon implementation of file address...




void main()
{
int array_to_generate[7];

generate_array(array_to_generate);

check_array(array_to_generate);

sort_array(array_to_generate);

write_file_of_numbers_to_File(array_to_generate);

output_display (array_to_generate);
}
 
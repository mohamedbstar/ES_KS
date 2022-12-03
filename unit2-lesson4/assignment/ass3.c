#include <stdio.h>


/************************** Q1 *****************************/
int arr[2][2];
int arr2[2][2];
int arr3[2][2];

void populate_array(int arr[2][2]){
	for (int i = 0; i < 2; ++i)
	{
		for(int j =0; j<2; j++){
			printf("Enter element [%d][%d]:", i,j);
			scanf("%d",&arr[i][j]);
		}
	}
}

void print_arrar(int arr[2][2]){
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
}

void add_arrays(){
	for (int i = 0; i < 2; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			arr3[i][j] = arr[i][j] + arr2[i][j];
		}
	}
}
/*******************************************************/

/**************************** Q2 ***************************/


int data[5];

void populate_data(){
	for (int i = 0; i < 5; ++i)
	{
		printf("Enter element %d:",i);
		scanf("%d", &data[i]);
	}
}

void calc_avg(){
	int avg = 0;
	for (int i = 0; i < 5; ++i)
	{
		avg += data[i];
	}

	avg /= 5;
	printf("Average = %d\n",avg);
}

/*******************************************************/


/************************ Q3 *******************************/

//we can populate this array using populate_array() func
int original[3][3];
int transpose[3][3];

void populate_original(){
	for (int i = 0; i < 3; ++i)
	{
		for(int j =0; j<3; j++){
			printf("Enter element [%d][%d]:", i,j);
			scanf("%d",&original[i][j]);
		}
	}
}

void transpose_oroginal(){
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			transpose[i][j] = original[j][i];
		}
	}
}


void print_arr(int arr[3][3]){
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
}


/*******************************************************/

/************************** Q4 *****************************/
void insert_element(int arr, int size, char element, int index){
	if (index >= size)
	{
		printf("%s\n","Can't insert at this index");
		return;
	}

	for (int i = size - 1; i > index; --i)
	{
		arr[i] = arr[i - 1];
	}

	arr[index] = element;
}
/*******************************************************/

/*********************** Q5 ********************************/
int search_element(int arr, int size, int element){
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] == element)
		{
			return i;
		}
	}

	return -1;
}
/*******************************************************/

/***************************** Q6 **************************/
int how_many(char* str, char c){
	int num = 0;
	int i = 0;
	while(str[i] != NULL){
		if(str[i] == c){
			num++;
		}
		i++;
	}

	return num;
}
/*******************************************************/

/*********************** Q7 ********************************/

int my_strlen(char* str){
	int len = 0;
	int i = 0;
	while(str[i] != NULL){
		len++;
		i++;
	}
	return len;
}

/*******************************************************/




int main(int argc, char const *argv[])
{
	return 0;
}
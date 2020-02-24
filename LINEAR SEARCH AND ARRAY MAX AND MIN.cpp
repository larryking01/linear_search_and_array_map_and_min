#include <bits/stdc++.h> 
#include <iostream>
using namespace std; 
  
//THE LINEAR SEARCH ALGORITHM.
int linearSearch(int myArray[], int arraySize, int searchNumber) 
{ 
    int i; 
    for (i = 0; i < arraySize; i++) 
        if (myArray[i] == searchNumber) 
            return i; 
    return -1; 
} 



//function to implement the linear search algorithm.
int implement_Linear_Search() {
	
	int arraySize;
    int index;
    int searchNumber ; 
    cout<<"ENTER THE SIZE OF THE ARRAY: " <<endl;
    cin>> arraySize;
    int myArray[arraySize]; 
    int n = arraySize;
    
    cout<<endl;
    cout<<"ENTER THE ELEMENTS OR NUMBERS INTO THE ARRAY: " <<endl;
    for(index=0; index<arraySize; index++){
    	cin>> myArray[index];
	}
	
	cout<<endl;
	
	cout <<"THE ELEMENTS ENTERED INTO THE ARRAY ARE: "<<endl;
	for(index=0; index<arraySize; index++) {
		cout<< myArray[index];
		cout<< ",";
	}
	
	cout<<endl<<endl;
	
	cout<<"ENTER THE NUMBER YOU WISH TO FIND: "<<endl;
    cin>>searchNumber;
    
    cout <<endl;
    int linearSearchResult = linearSearch(myArray, arraySize, searchNumber); 
    if (linearSearchResult == -1) 
        cout << "THE ELEMENT " << searchNumber << " IS NOT PRESENT IN THE ARRAY" <<endl;
    else
        cout << "THE ELEMENT " << searchNumber << " IS PRESENT AT INDEX " << linearSearchResult; 
	
	
	return 0;
}



//the algorithm for finding the maximum and minimum element of an array.
int find_Array_Max_And_Min() {
	
	
    int arrayLength;
    int index;
    int min, max;
    cout<< "ENTER THE SIZE OF THE ARRAY: "<<endl;
    cin >> arrayLength;
    cout<<endl<<endl;
    
    //creating the array.
    int myArray [arrayLength];
    
    // Compute the sizes 
    int n = arrayLength;
  
   cout<<"ENTER THE ELEMENTS OR NUMBERS INTO THE ARRAY: "<<endl;
   for(index = 0; index<arrayLength; index++) {
   	cin>> myArray[index];
   }
   
   cout<<endl<<endl;
   
   min = myArray[0];
   max = myArray[0];
   
   //PRINTING OUT THE ELEMENTS ENTERED INTO THE ARRAY.
   cout<<"THE ELEMENTS IN THE ARRAY ARE: "<<endl;
   for(index = 0; index<arrayLength; index++) {
   	cout<< myArray[index] << ",";
   }
   cout<<endl<<endl;
   
   //finding the minimum element in the array.
   for(index = 0; index<arrayLength; index++) {
   	if(myArray[index] < min) {
   		min = myArray[index];
	   }
   }
   
  
   //finding the maximum element in the array
   for(index = 0; index<arrayLength; index++) {
   	if(myArray[index] > max) {
   		max = myArray[index];
	   }
   }
   
   cout<<"THE MINIMUM ELEMENT = " << min <<endl;
   
   cout << "THE MAXIMUM ELEMENT = " << max;
    
    
	return 0;
}




  

//THE MAIN FUNCTION
int main() 
{ 
    
    cout << "************************************************************************************" <<endl;
    cout << "************************************************************************************" <<endl;
    cout << "************************************************************************************\n\n\n";
    
    int response;
    cout <<"ENTER 1 TO EXECUTE THE LINEAR SEARCH ALGORITHM OR 2 TO EXECUTE THE MAXIMUM AND MINIMUM ELEMENT IN AN ARRAY ALGORITHM: " <<endl;
	cin >> response;
	
	
	//calling the appropriate function based on the value of the response entered.
	switch(response){
	      case 1:
	      	cout<<"EXECUTING THE LINEAR SEARCH ALGORITHM...... \n\n";
	      	implement_Linear_Search();
	      	break;
	      case 2:
	      	cout<<"EXECUTING THE MAX AND MIN ELEMENT OF AN ARRAY ALGORITHM.....\n\n";
	      	find_Array_Max_And_Min();
	      	break;
	      default:
	      	cout<<"INCORRECT OPTION ENTERED, RUN THE PROGRAM AGAIN AND ENTER 1 OR 2 TO CONTINUE...." <<endl;
	      	
	      	
	}
  
    return 0; 
}

#include<iostream>

void BubleSort(int* arr, int size){
    for(int i = 0; i < size; ++i){
        for(int j = 0; j < size - i - 1; ++j){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;            
            }
        }
    }
}

void BubleSortGoto(int* arr, int size){
    bool swapped;
    
    loop:

    swapped = false;

    for(int i = 0; i < size - 1; ++i){
        if(arr[i] > arr[i+1]){
            std::swap(arr[i], arr[i+1]);
            swapped = true;
        }
    }
    if(swapped){
        goto loop;
    }
}

void BubleSortOptimized(int* arr, int size){
    int lastSwap;
    int newSize = size;

    while(newSize > 1){
        lastSwap = 0;
        
        for(int i = 0; i < newSize - 1; ++i){
            if(arr[i] > arr[i + 1]){
                std::swap(arr[i], arr[i+1]);
                lastSwap = i + 1;
            }
        }

        newSize = lastSwap;
    }
}

void printHW(){
    std::cout << "hello world!" << std::endl;
}

void printArray(int* arr, int size){
    for(int i = 0; i < size; ++i){
        std::cout << arr[i] << " ";
    }
    std::cout << "\n\n";
}

void printConsoleRainbow(std::string word){
    int color = 91;
    for (;;)
    {
    std::cout << "\e[" << color << "m" << word << "\e[0" << "m" << "\r" << std::flush;
    color = (color > 96) ? 91: color + 1;
    
    for(int i = 0; i < 100000000; ++i){}
    }
}

int main(){
    /*printHW();

    int num = INT_MAX;

    int arr[] = {5,6,7,3,4,2,1,9,0,10,11,8};
    int size = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, size);
    //BubleSort(arr, size);    
    //BubleSortOptimized(arr, size);
    BubleSortGoto(arr, size);
    printArray(arr, size);*/
    printConsoleRainbow("Alisa piska");

    return 0;
}
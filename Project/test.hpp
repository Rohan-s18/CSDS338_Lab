//  Header file for testing


void single_variable_demo();

void single_variable_test();

void print_array(double arr[], int n){
    std::cout<<"[";
    for(int i = 0; i < n; i++)
        std::cout<<arr[i]<<" ";
    std::cout<<"]\n";
};

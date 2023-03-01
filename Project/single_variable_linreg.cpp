//  Author: Rohan Singh
//  Date: Feb 22, 2023
//  Single Variable Linear Regression in C++


//  Imports
#include <iostream>

//  Using header file to get testing/demo code
#include "test.hpp"


//  Class for Linear Regression
class LinearRegression{

    //Section for instance fields and helper function
    private:

    //Linear Regression instance fields
    double bias;
    double weight;

    //Dataset fields
    double* target;
    int dataset_length;
    double* dataset;


    //Helper function to get an array for all of the outputs
    void get_output(double temp_bias, double temp_weight, double set[], int len, double arr[]){

        //Traversing through the input array
        for(int i = 0; i < len; i++){
            arr[i] = (set[i]*temp_weight) + temp_bias;
        }

    }

    //Helper function to get the Total Squared Error for the given weights 
    double get_mse(double output[]){
        double mse = 0;

        for(int i = 0; i < this->dataset_length; i++)
            mse += ((output[i]-this->target[i])*(output[i]-this->target[i]));
        
        mse /= dataset_length;
        return mse/2;
    }

    //Helper function to get the gradient (the gradient vector is an R^2 vector for bias and weight)
    void get_gradient(double output[], double gradient[]){

        //Bias and Weight gradients
        double bias_grad, weight_grad;

        for(int i = 0; i < this->dataset_length; i++){
            bias_grad += output[i] - this->target[i];
            weight_grad += ((output[i] - this->target[i])*(this->dataset[i]));
        }

        gradient[0] = bias_grad;
        gradient[1] = weight_grad;
        
    }




    //Section for public function
    public:

    //Constructor
    LinearRegression(double output[], double data[], int len){
        //Setting the variables
        this->target = output;
        this->dataset = data;
        this->dataset_length = len;

        //Initializing the variables
        this->bias = 0;
        this->weight = 0;
    }

    //Training function
    void train(int max_iter, double eps, double max_err){

        //Assigning temporay variables
        double temp_weight, temp_bias, err;
        double* temp_output;
        double* gradient;

        //Avoiding segmentation faults ;)
        temp_output = (double*)malloc(sizeof(double)*this->dataset_length);
        gradient = (double*)malloc(sizeof(double)*2);

        //Iterating through till we hit the max iteration
        for(int i = 0; i < max_iter; i++){

            //Getting the output
            this->get_output(temp_bias, temp_weight, this->dataset, this->dataset_length,temp_output);
            
            //Getting the error and gradient
            err = get_mse(temp_output);

            //Exiting the loop if the error for this combo is minimum
            if(err <= max_err){
                std::cout<<"Minimum Found!\n";
                break;
            }
                

            get_gradient(temp_output, gradient);

            //Updating the bias and weight terms using gradient descent
            temp_bias -= eps*gradient[0];
            temp_weight -= eps*gradient[1];

        }

        this->bias = temp_bias;
        this->weight = temp_weight;


    }

    //Prediction function for Single-Variable Linear Regression
    void predict(double test_set[], int test_len, double output[]){
        //Using the optimal values from training for the prediction
        this->get_output(this->bias,this->weight,test_set,test_len,output);
    }



};

//  Main function for demonstraiton
int main(){

    std::cout<<"Hello World!"<<"\n\n";

    //Calling the demo function
    single_variable_demo();

    std::cout<<"\n\n";

    //Calling the testing function
    single_variable_test();

    std::cout<<"\n";

    return 0;
}


//  Demonstration function
void single_variable_demo(){
    
    double dataset[10] = {0,1,2,3,4,5,6,7,8,9};
    double target[10] = {4,6,8,10,12,14,16,18,20,22};


    LinearRegression* demo = new LinearRegression(target,dataset,10);
    demo->train(100000,0.001,0.001);

    double input[10] = {10,11,12,13,14,15,16,17,18,19};
    double* output;

    output = (double*)malloc(10*sizeof(double));

    demo->predict(input, 10, output);

    print_array(output, 10);
}


//  Testing function
void single_variable_test(){

}

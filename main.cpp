
#include "header/module.h"
#include <fstream>
#include <string>
#include <vector>

const char* reverse(const char* input, char* output)
{
    size_t len = strlen(input);
    for(int i = 0; i < len ; i++){
       output[i] = input[len-i-1];
    }
    output[len] = 0;
    return output;
    
}

float mean(const int* input,const int len)
{
    float mean = 0;
    for(int i = 0; i < len ; i++){
        mean += input[i];
    }
    mean /= (float)len;
    return mean;
    
}


class MyIO{
    private:
    std::vector<std::string> myFile;
    public:
    void ReadFile(std::string filename){
        std::string line;
        std::ifstream file("mytext.txt");
        if(file.is_open()){
            while(getline(file,line)){
                myFile.push_back(line);
            }
                file.close();
        }
        else{

            std::cout << "Unable to open file" << std::endl;
        }
    }

    void PrintFile(){
        for(auto it = myFile.begin() ; it != myFile.end(); ++it ){
            std::cout << *it << std::endl;
        }
    }
};

int main(){

    MyIO myIO;
    myIO.ReadFile("mytext.txt");
    myIO.PrintFile();
    
}
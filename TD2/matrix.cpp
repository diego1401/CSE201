int main(){

 std::string matrix_text;
 std::getline(std::cin,matrix_text);


}

int read_matrix_dim(std::string &matrix_text){
    int numb_read = 0;
    int j = 0;
    for(int i=0;i<matrix_text.length();i++){
        if (matrix_text[i]!=' ' && numb_read<2){//the first 2
            //numbers are the dimension
            if (numb_read==0){//n
                n = matrix_text[i];
                numb_read++;
            }
            else if (numb_read==1){//m,now that both have been
                //determined we can declare the matrix
                m = matrix_text[i];
                numb_read++;
                int A[m][n];
            }
        }
        else if(matrix_text[i]!=' '){

        }
    }

}

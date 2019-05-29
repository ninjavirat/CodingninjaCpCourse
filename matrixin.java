wo - dimensional array is the simplest form of a multidimensional array. A two - dimensional array can be seen as an array of one - dimensional array for easier understanding. 

Indirect Method of Declaration:
Declaration - Syntax:
data_type[][] array_name = new data_type[x][y];
        For example: int[][] arr = new int[10][20];

        
Initialization - Syntax:
array_name[row_index][column_index] = value;
        For example: arr[0][0] = 1;

        

Example:

Output:
arr[0][0] = 1



Direct Method of Declaration: 
Syntax:

data_type[][] array_name = {
                             {valueR1C1, valueR1C2, ....}, 
                             {valueR2C1, valueR2C2, ....}
                           };

For example: int[][] arr = {{1, 2}, {3, 4}};

Example:
class GFG {
    public static void main(String[] args)
    {

        int[][] arr = { { 1, 2 }, { 3, 4 } };

        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
                System.out.println("arr[" + i + "][" + j + "] = "
                                   + arr[i][j]);
    }
}
Output:
arr[0][0] = 1
arr[0][1] = 2
arr[1][0] = 3
arr[1][1] = 4

Accessing Elements of Two-Dimensional Arrays


Elements in two-dimensional arrays are commonly referred by x[i][j] where 'i' is the row number and 'j' is the column number.

Syntax:
x[row_index][column_index]
For example:
int[][] arr = new int[10][20];

arr[0][0] = 1;

The above example represents the element present in first row and first column.

Note: In arrays if size of array is N. Its index will be from 0 to N-1. Therefore, for row_index 2, actual row number is 2+1 = 3.

Example:

Output:
arr[0][0] = 1

Representation of 2D array in Tabular Format: A two - dimensional array can be seen as a table with 'x' rows and 'y' columns where the row number ranges from 0 to (x-1) and column number ranges from 0 to (y-1). A two - dimensional array 'x' with 3 rows and 3 columns is shown below:

two-d

Print 2D array in tabular format: 
To output all the elements of a Two-Dimensional array, use nested for loops. For this two for loops are required, One to traverse the rows and another to traverse columns.

Example:
class GFG {
    public static void main(String[] args)
    {

        int[][] arr = { { 1, 2 }, { 3, 4 } };

        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                System.out.print(arr[i][j] + " ");
            }

            System.out.println();
        }
    }
}
Output:
1 2 
3 4
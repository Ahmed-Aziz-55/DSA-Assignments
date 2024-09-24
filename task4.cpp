#include <iostream>
using namespace std;
const int branches = 12;
int calculateTotalSales(int sales[], int n)
 {
    int total = 0;
    for (int i = 0; i < n; i++) 
    {
        total += sales[i];
    }
    return total;
}
int findHighestSales(int sales[], int n)
 {
    int highestIndex = 0;
    for (int i = 0; i < n; i++) {
        if (sales[i] > sales[highestIndex])
         {
            highestIndex = i;
        }
    }
    return highestIndex;
}
int findLowestSales(int sales[], int n)
 {
    int lowestIndex = 0;
    for (int i = 0; i < n; i++) {
        if (sales[i] < sales[lowestIndex]) 
        {
            lowestIndex = i;
        }
    }
    return lowestIndex;
}
int main() {
    int sales[branches];
    cout << "Enter the sales figures for each of the " <<branches << " branches:\n";
    for (int i = 0; i <branches; i++) {
        cout << "Sales for branch " << i + 1 << ": $";
        cin >> sales[i];
    }
    int totalSales = calculateTotalSales(sales, branches);
    cout << "\nTotal annual sales: $" << totalSales << endl;
    int highestBranch = findHighestSales(sales, branches);
    int lowestBranch = findLowestSales(sales,  branches);
    cout << "Branch with the highest sales: Branch " << highestBranch + 1 << " with $" << sales[highestBranch] << endl;
    cout << "Branch with the lowest sales: Branch " << lowestBranch + 1 << " with $" << sales[lowestBranch] << endl;
    return 0;
}

#include <iostream>
using namespace std;
int main() {
    int setir1, sutun1, setir2, sutun2;

    cout << "Birinci matrisin olculerini daxil edin (setir sutunları): ";
    cin >> setir1 >> sutun1;

    cout << "Ikinci matrisin olculerini daxil edin (setir sutunları): ";
    cin >> setir2 >> sutun2;

    if (sutun1 != setir2) {
        cout << "Bu olculerle matrisleri vurmaq mumkun deyil." << endl; //1cinin sutunu ikincinin setrine = olmalidi   
    }
	else{
	
    int mat1[setir1][sutun1];
    int mat2[setir2][sutun2];
    int result[setir1][sutun2];

    cout << "Birinci massivin elementlerini daxil edin: " << endl;
    for (int i = 0; i < setir1; ++i) {
        for (int j = 0; j < sutun1; ++j) {
            cin >> mat1[i][j];
        }
    }

    std::cout << "Ikinci massivin elementlerini daxil edin" << endl;
    for (int i = 0; i < setir2; ++i) {
        for (int j = 0; j < sutun2; ++j) {
            cin >> mat2[i][j];
        }
    }

    // Matrix multiplication
    for (int i = 0; i < setir1; ++i) {
        for (int j = 0; j < sutun2; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < sutun1; ++k) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Printing the result
    cout << "Netice: " << endl;
    for (int i = 0; i < setir1; ++i) {
        for (int j = 0; j < sutun2; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
	}
    return 0;
}

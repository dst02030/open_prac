// 앞의 ostream 설정 한 거 떄문에 가능한거.

ofstream outFile;
outFile.open("textOut.txt");
iObj1 = 81;
outFile << "iObj1: " << iObj1 << endl;
iObj2 = iObj1++;

outFile << "iObj1: " << iObj1 << "iObj2: " << iObj2 << endl;
outFile.close();
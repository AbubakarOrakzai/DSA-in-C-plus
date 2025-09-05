#include <iostream>
using namespace std;
int weigh(int group1[], int group2[]) {
    int weight1 = group1[0] + group1[1] + group1[2];
    int weight2 = group2[0] + group2[1] + group2[2];
    if (weight1 == weight2) return 0;  
    return (weight1 > weight2) ? 1 : -1;  
}
void finddefectiveBall(int balls[]) {
    int groupA[3] = {balls[0], balls[1], balls[2]};
    int groupB[3] = {balls[3], balls[4], balls[5]};
    int groupC[3] = {balls[6], balls[7], balls[8]};
    int result = weigh(groupA, groupB);
    int suspectedGroup[3];
    if (result == 0) {
        suspectedGroup[0] = balls[6];
        suspectedGroup[1] = balls[7];
        suspectedGroup[2] = balls[8];
    } else if (result == 1) {
        suspectedGroup[0] = balls[0];
        suspectedGroup[1] = balls[1];
        suspectedGroup[2] = balls[2];
    } else {
        suspectedGroup[0] = balls[3];
        suspectedGroup[1] = balls[4];
        suspectedGroup[2] = balls[5];
    }
    int singleBall1[1] = {suspectedGroup[0]};
    int singleBall2[1] = {suspectedGroup[1]};
    result = weigh(singleBall1, singleBall2);
    if(result==0) {
        cout << "defective ball is  "<<suspectedGroup[2]<<endl;
    } else if (result == 1) {
        cout<<"defective ball is  "<<suspectedGroup[0]<<endl;
    } else {
        cout <<"defective ball is  "<<suspectedGroup[1]<<endl;
    }
}
int main() {
    int balls[9] = {1, 1, 1, 1, 1, 1, 2, 1, 1}; 
    finddefectiveBall(balls);
}


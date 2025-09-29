#include <vector>
#include <iostream>
#include <cmath>

std::vector<int> fillMultipleVector (int multiple) {
    size_t size  {static_cast<size_t>(std::ceil(1000.0/(float)multiple))};
    std::vector<int> vector(size);

    for (int index{0}; index < static_cast<int>(size); index++) {
        vector[static_cast<size_t>(index)] = index*multiple;
    }

    return vector;
}

int sumVector (const std::vector<int> &vector) {
    int sum{0};

    for (int num : vector) {
        sum += num;
    }

    return sum;
}

std::vector<int> unifyVectors (std::vector<int> vectorA, std::vector<int> vectorB) {
    std::vector<int> unifiedVector;

    size_t sizeA {vectorA.size()};
    size_t sizeB {vectorB.size()};
    size_t indexA {0};
    size_t indexB {0};

    std::cout << "List of numbers to be summed: ";

    while (sizeA > 0 && sizeB > 0) {
        if (vectorA[indexA] < vectorB[indexB]) {
            unifiedVector.push_back(vectorA[indexA]);
            std::cout << vectorA[indexA] << ", (comparing " << vectorA[indexA] << " and " << vectorB[indexB] << ")\n";
            indexA++;
            sizeA--;
            continue;
        }
        else if (vectorA[indexA] == vectorB[indexB]) {
            unifiedVector.push_back(vectorA[indexA]);
            std::cout << vectorA[indexA] << ", (comparing " << vectorA[indexA] << " and " << vectorB[indexB] << ")\n";
            indexA++;
            indexB++;
            sizeA--;
            sizeB--;
            continue;
        }
        else if (vectorA[indexA] > vectorB[indexB]) {
            unifiedVector.push_back(vectorB[indexB]);
            std::cout << vectorB[indexB] << ", (comparing " << vectorA[indexA] << " and " << vectorB[indexB] << ")\n";
            indexB++;
            sizeB--;
            continue;
        }
    }
    while (sizeB > 0) {
        unifiedVector.push_back(vectorB[indexB]);
        std::cout << vectorB[indexB] << ", (comparing " << vectorB[indexB] << " with end of list)\n";
        indexB++;
        sizeB--;
    }
    while (sizeA > 0) {
        unifiedVector.push_back(vectorA[indexA]);
        std::cout << vectorA[indexA] << ", (comparing " << vectorA[indexA] << " with end of list)\n";
        indexA++;
        sizeA--;
    }

    return unifiedVector;
}

int main () {
    std::vector<int> unifiedVector {unifyVectors(fillMultipleVector(3), fillMultipleVector(5))};
    int answer {sumVector(unifiedVector)};

    std::cout << "\nThe answer is: " << answer << std::endl;
}
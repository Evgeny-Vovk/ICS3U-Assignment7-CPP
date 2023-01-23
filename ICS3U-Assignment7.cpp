// Copyright(c) 2022 Evgeny Vovk All rights reserved.
//
// Created by : Evgeny Vovk
// Created on : January 2023
// ICS3U-Assignment7.cpp File

#include <list>
#include <string>
#include <iostream>

int main() {
    // this function generates the random numbers

    std::list<std::string> firstList;
    std::list<std::string> secondList;
    std::list<std::string> finalList;
    std::string list_part;
    int counter;
    int size = firstList.size() + secondList.size();
    try {
        std::cout << "To end loop enter STOP.";
        std::cout << "\nInput what you want to add to the first list: ";
        std::cin >> list_part;
        while (list_part != "STOP") {
            firstList.push_back(list_part);
            std::cout << "Input what you want to add to the first list: ";
            std::cin >> list_part;
        }
        std::cout << "\nInput what you want to add to the second list: ";
        std::cin >> list_part;
        while (list_part != "STOP") {
            secondList.push_back(list_part);
            std::cout << "Input what you want to add to the second list: ";
            std::cin >> list_part;
        }
        for (counter = 0; counter < size; counter++) {
            if (counter < firstList.size()) {
                finalList.push_front(firstList.back());
                firstList.pop_back();
            }
            if (counter < secondList.size()) {
                finalList.push_front(firstList.back());
                firstList.pop_back();
            }
        }
        std::cout << "The final list is: ";
        for (std::string object : finalList) {
            std::cout << object << " ";
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid input, please try again.";
    }

    std::cout << "\nDone.";
}
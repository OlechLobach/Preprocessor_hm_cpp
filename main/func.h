#include <iostream>
#include <ctime>
using namespace std;

#ifndef FUNCTION_H
#define FUNCTION_H


void FillArray(int arr[], int size);
void FillArray(double arr[], int size);
void FillArray(char arr[], int size);

void ShowArray(int arr[], int size);
void ShowArray(double arr[], int size);
void ShowArray(char arr[], int size);

int MinValue(int arr[], int size);
double MinValue(double arr[], int size);
char MinValue(char arr[], int size);

int MaxValue(int arr[], int size);
double MaxValue(double arr[], int size);
char MaxValue(char arr[], int size);

void SortArray(int arr[], int size);
void SortArray(double arr[], int size);
void SortArray(char arr[], int size);

void EditArray(int arr[], int size);
void EditArray(double arr[], int size);
void EditArray(char arr[], int size);

#define show ShowArray

#endif 

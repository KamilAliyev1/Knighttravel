#pragma once

template<typename T>
T maxFinder(T arr[], T size) {
	int max = arr[0];
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
template<typename M>
int minFinder(M arr[], M size) {
	int max = arr[0];
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] < max) max = arr[i];
	}
	return max;
}
template<typename M>
M maxChoose(M first, M last) {
	if (first > last) return first;
	else return last;
}
template<typename M>
M minChoose(M first, M last) {
	if (first > last) return last;
	else return first;
}
template<typename T, typename M>
T calC(T num1, T num2, M arif) {
	switch (arif)
	{
	case '+':
		return num1 + num2;
	case '-':
		return num1 - num2;
	case '*':
		return num1 * num2;
	case '/':
		return num1 / num2;
	default:
		break;
	}
}
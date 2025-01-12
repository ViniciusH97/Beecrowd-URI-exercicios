package main

import "fmt"

func Areadocirculo(){

	var n float64 = 3.14159
	var raio, area float64

	fmt.Scan(&raio)

	area = n * (raio * raio)

	fmt.Printf("A=%.4f\n", area)
}

func main(){
	Areadocirculo()
}
package main

import(
	"fmt"
	"net/http"
	"log"
	"github.com/gorilla/mux"
	"encoding/json"
	"math/rand"
	"strconv"
)

// Book Struct (Model)
type Book struct {
	ID				string	`json:"id"`
	Isbn			string	`json:"isbn"`
	Title			string	`json:"title"`
	Author		*Author	`json:"author"`
}

// Author Struct
type Author struct{
	Firstname		string	`json:firstname`
	Lastname		string	`json:lastname`
}

// INIT BOOKS VAR AS A SLICE BOOK STRUCT
var books []Book


// GET ALL BOOKS
func getBooks(w http.ResponseWriter, r *http.Request){
	w.Header().Set("Content-Type", "application/json")
	json.NewEncoder(w).Encode(books)
}
// GET SINGLE BOOK
func getBook(w http.ResponseWriter, r *http.Request){
	w.Header().Set("Content-Type", "application/json")
	params := mux.Vars(r) // Get params
	// Loop through book and find mathcing ID
	for _, item := range books {
		if item.ID == params["id"]{
			json.NewEncoder(w).Encode(item)
			return
		}
	}
	json.NewEncoder(w).Encode(&Book{})
}
// CREATE A NEW BOOK
func createBook(w http.ResponseWriter, r *http.Request){
	w.Header().Set("Content-Type", "application/json")
	var book Book
	_ = json.NewDecoder(r.Body).Decode(&book)
	book.ID = strconv.Itoa(rand.Intn(10000000)) // Mock ID, not safe no production use
	books = append(books, book)
	json.NewEncoder(w).Encode(book)


}
// UPDATE THE BOOK
func updateBook(w http.ResponseWriter, r *http.Request){
	w.Header().Set("Content-Type", "application/json")
	params := mux.Vars(r)
	for index, item := range books {
		if item.ID == params["id"] {
			books = append(books[:index], books[index+1:]...)
			var book Book
			_ = json.NewDecoder(r.Body).Decode(&book)
			book.ID = params["id"]
			books = append(books, book)
			json.NewEncoder(w).Encode(book)
			return
		}
	}
	json.NewEncoder(w).Encode(books)
	
}
// DELETE BOOK
func deleteBook(w http.ResponseWriter, r *http.Request){
	w.Header().Set("Content-Type", "application/json")
	params := mux.Vars(r)
	for index, item := range books {
		if item.ID == params["id"] {
			books = append(books[:index], books[index+1:]...)
			break
		}
	}
	json.NewEncoder(w).Encode(books)
}


func main() {
	// fmt.Println("Use double quotes")
	// fmt.Println("go run main.go")
	// fmt.Println("go build, to make exe")
	fmt.Println("The server is now running...")
	fmt.Println("This is a RESTful api for books and authors. No DB is connected to this project.")

	// Init Router
	r := mux.NewRouter()

	// Mock Data	TODO	implement DB
	books = append(books, Book{ID: "1", Isbn: "48327572", Title: "Book1", Author: &Author{Firstname: "John", Lastname: "Doe"}})
	books = append(books, Book{ID: "2", Isbn: "8974532864", Title: "Book2", Author: &Author{Firstname: "Steverson", Lastname: "Smith"}})


	// Route Handlers
	r.HandleFunc("/api/books", getBooks).Methods("GET")
	r.HandleFunc("/api/books/{id}", getBook).Methods("GET")
	r.HandleFunc("/api/books", createBook).Methods("POST")
	r.HandleFunc("/api/books/{id}", updateBook).Methods("PUT")
	r.HandleFunc("/api/books/{id}", deleteBook).Methods("DELETE")
	log.Fatal(http.ListenAndServe(":8000", r))
}
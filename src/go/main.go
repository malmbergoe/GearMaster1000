package main

import(
 "fmt"
 "database/sql"
 "strconv"

  _ "github.com/mattn/go-sqlite3"
)

func main() {
  fmt.Println("GearMaster fuck yeah!!")
  database, _ :=
    sql.Open("sqlite3", "./gearmaster.db")


  statement, _ :=
    database.Prepare("CREATE TABLE IF NOT EXISTS people (id INTEGER PRIMARY KEY, firstname TEXT, lastname TEXT)")

  statement.Exec()

  statement, _ =
    database.Prepare("INSERT INTO people (firstname, lastname) VALUES (?, ?)")
  statement.Exec("Rob", "Schneider")

  rows, _ := database.Query("SELECT id, firstname, lastname FROM people")


  var id int
  var firstname string
  var lastname string
  for rows.Next() {
    rows.Scan(&id, &firstname, &lastname)
    fmt.Println(strconv.Itoa(id) + ": " + firstname + " " + lastname)
  }
  
  
  
}



/*

- import an sql package an create a POC for creating a db...
- create the go implementation of the GearMaster schema
- unit tests in mind!!



*/
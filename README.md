## GearMaster 1000
### Introduction
The overall goal is simply to get started with c++ development.
So, this application should not do any fancy new challenging things...


long term goal:
a gui application in which one can manage outdoor gear.
basically a gui accessor to a database.

### How to build
This project uses CMake to build. Assuming the project is clean (i.e. does not have a build folder setup) perform the following actions:

- create a build output directory `mkdir <build>`
- navigate to the build directory `cd <build>`
- invoke CMake to generate a makefile `cmake --/<build>`
- invoke CMake to build the project `cmake --build .`



### Plan Ahead
Mark IV:
current configuration can be saved to a file

Mark V:
saved files can be opened and continued to work with.


Mile stone 1:
the application is now able to open/save a inventory list to a file.
the application state can be saved and managed.


Possible continuations from Mile stone 1
- proceed to make a gui application
- integrate with an sqlite solution
- invent features such as
  - packinglists
  - hike diaries
  - notes on gear
  - gear wish lists
  - gear log (like current state, when it was used latest, good things/bad things etc)


epic squirrel, devious plan:
migrate GearMaster to a mobile app and build a webshop that sells gear.
integrate the webshop inventory to the app.




stuff:
- a logger
- unit tests
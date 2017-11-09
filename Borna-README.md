# COMP 8551: Assignment 2  
> By: Spencer Pollock, Ridhavraj Singh, Tanja Tong  

## Build on Mac  
Run 	`./build-osx`  
Then	`./run-osx`  
This will run all the files in order:  
- Serial  
- CPU  
- GPU  
- Both  
## Windows
> Working on Intel OpenCL drivers only  
> _NVIDIA drivers have errors picking up the CPU_  
1. Open Visual Studio 20xx (2015, 2017)  
2. Build the solution (all the projects)  
3. Copy the `dftkernel.cl` file from the base directory (`.\`) to the debug (`.\x64\Debug\`)  
4. Open a `cmd` and navigate to the `.exe` files (`.\x64\Debug\`)  
5. Run the programs from the commandline
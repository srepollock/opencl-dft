# OpenCL Discrete Fourier Transform
## Table of Contents
* [Team](#team)
* [Contributing](#contributing)
    * [File Structure](#file-structure)
    * [Files and Naming](#files-and-naming)
    * [Coding Style](#coding-style)
    * [Comment Style](#comment-style)
    * [Commits](#commits)
    * [Branches](#branches)
    * [Pull Requests](#pull-requests)
    * [Issues](#issues)
* [Comments](#comments)
### Team
Team members include:  
- Spencer Pollock
- Raj Singh
- Tanja Tong
### Contributing
Contributing is key in this project.  
Please follow all rules listed, and issues can be resolved quickly and 
efficiently for such a short project timeline.  
#### File Structure
The file structure will be as follows:
```
opencl-dft/
    - Header Files/
    - Resource Files/
        - Libraries/
            - CL/
    - Source Files/
```
Feel free to make subfolders in the `Resource Files/` for assets, but just be 
aware that they should follow some sort of style and logical sense.
#### Files and Naming
Files are to be given Upper Camel Case names.  
>*Example*: MessageSystem.h
>*Example*: MessageSystem.cpp

>**Note**: main.cpp/main.h is the only execption to this rule  

#### Coding Style
Please use the [Allman](https://en.wikipedia.org/wiki/Indent_style#Allman_style) 
Coding style conventions:
```
while (x == y)
{
    something();
    somethingElse();
}
```
#### Comment Style
Comments are important so we know what functions are. Try if you can to use XML 
style comments, however because we are in a time limited contest, just single 
line comments will work.
```
// This is a single line comment in C++
```
```
///
/// <summary>
/// Change the string varable _s to the given string.
/// </summary>
/// <param name="s">String to set as.</param>
/// <return>If the new string is set or not.</return>
///
bool setString(string s)
{
    return _s = s;
}
```
#### Commits
Commit messages are important. It's a quick "here's what's up and what I did" 
without having to read through all the changes and figure out what happened.  
Please use the first 140 characters of the commit message as a message for what 
the main changes in the commit were, and the rest of the message can be a bit 
more detailed. Paragraphs are not expected at all, just a little bit of 
information goes a long way.
#### Branches
Branching. One of the best features of Git. Please, please, please, branch 
using the format below. It will keep everything clean, and make sure the files 
you are working on are not being touched by anyone else on the same branch. It 
helps merge conflicts immensly.
- `feature/[type_of_feature]`: Use `feature` branches for any new updates or 
changes being added to the project.
>*Example*: `feature/engine`
- `hotfix/[issue number from Redmine]`: Use `hotfix` as a fix for any Redmine 
>*Example*: `hotfix/151`
fixes or hotfixes.  

Sticking to proper branching a lot of things can go right.
>Default Branches are: master and develop  
#### Pull Requests
Pull requests are how changes are going to be merged into master.
> **Please do not push to `master` directly as it can cause a lot of issues and 
we are only to push our final updates or releases to `master` branch**  

When making a pull request, type out a message of what was changed overall, 
what was worked on, any bug issues (using Redmine and labelling issue tags) 
that arose during development.
### Comments
Communication is key and keeping ontop of it is what leads to succesful 
projects. Any quick questions or comments are done in Slack. Email and text is 
always valid. Just make sure to update the group on any changes or what is 
going to be worked on by individuals at any time.  

***Good luck and have fun!***```
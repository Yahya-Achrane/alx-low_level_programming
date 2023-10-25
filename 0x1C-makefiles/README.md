# Makefiles and Build Automation

## Table of Contents

- [Introduction](#introduction)
- [Make and Makefiles](#make-and-makefiles)
- [Rules](#rules)
- [Explicit and Implicit Rules](#explicit-and-implicit-rules)
- [Common/Useful Rules](#commonuseful-rules)
- [Variables](#variables)

---

## Introduction

Make and Makefiles are tools used in software development to automate the process of building executable programs or other files from source code. This README provides an overview of Makefiles, rules, and variables and how they are used in software development projects.

## Make and Makefiles

**Make** is a build automation tool that automatically builds executable programs and libraries from source code by reading files called **Makefiles**. A Makefile contains a set of rules and dependencies that describe how to build a target file based on its source files.

## Rules

In a Makefile, **rules** define how to build a target file from its dependencies. A rule has the following syntax:

```make
target: dependencies
    command(s)
```
- 'target' is the file you want to build.
- 'dependencies' are the files that the target depends on.
- 'command(s)' are the shell commands to execute in order to build the target.
## Explicit and Implicit Rules
- Explicit Rules: Explicit rules are rules where you explicitly specify how to build a target. They follow the syntax shown above.

- Implicit Rules: Implicit rules are predefined rules that 'make' uses to build files based on their extensions. For example, 'make' knows how to compile '.c' files into object files.

## Common/Useful Rules
Some common rules used in Makefiles include:

- 'all': This is a default target that builds the entire project.
- 'clean': This target is used to remove generated files (like object files or the final executable).
- 'install': This target installs the built program or files.
- 'uninstall': This target removes the installed files.
- '.PHONY': This is a special target used to declare phony targets, which are targets that don't represent actual files.

## Variables

Variables in Makefiles allow you to define reusable values. They can be used to store file paths, compiler flags, or any other value you might need in multiple places.

Variables are defined using the syntax:

```
VAR_NAME = value
```
And they are used like '$(VAR_NAME)'.

For example:

```
CC = gcc
CFLAGS = -Wall -O2

my_program: main.c utils.c
    $(CC) $(CFLAGS) -o my_program main.c utils.c
```
In this example, 'CC' and 'CFLAGS' are variables storing the compiler and compiler flags respectively.
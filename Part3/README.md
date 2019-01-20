# Reasons for concurrency and parallelism


To complete this exercise you will have to use git. Create one or several commits that adds answers to the following questions and push it to your groups repository to complete the task.

When answering the questions, remember to use all the resources at your disposal. Asking the internet isn't a form of "cheating", it's a way of learning.

 ### What is concurrency? What is parallelism? What's the difference?
 > Concurrency is dealing with multiple tasks at once, often overlapping. Concurrency deals with how we should prioritize tasks to complete all tasks in time. Parallelism is to actually execute multiple tasks at once on mutliple CPUs
 
 ### Why have machines become increasingly multicore in the past decade?
 > Increasing demands for computing power and increasing need for handling multiple tasks at once. We can also fit more transistors onto one chip
 
 ### What kinds of problems motivates the need for concurrent execution?
 (Or phrased differently: What problems do concurrency help in solving?)
 > It helps solve problems consisting of multiple smaller problems with independent timing requirements. I.e a server always need to be ready for new clients, eventhough it is occupied.
 
 ### Does creating concurrent programs make the programmer's life easier? Harder? Maybe both?
 (Come back to this after you have worked on part 4 of this exercise)
 > It's easier to split the programs into seperate smaller (preferably independent) parts, but syncronizing the different parts also introduces new challenges. The programs are harder to test (not deterministic, or at least difficult to interpret)
 
 ### What are the differences between processes, threads, green threads, and coroutines?
 > A process is an instance of an executing program, a thread is a lightweight "process" used for smaller task by the process itself. Consider it a subprocess of the process. A green thread is threads executed by a vm or runtime and the process handles the scheduling itself. A coroutine. Coroutines are similar to threads, but they rely on cooperation by between the coroutines for scheduling (they have to cooperate to share the cpu cycles). 
 
 ### Which one of these do `pthread_create()` (C/POSIX), `threading.Thread()` (Python), `go` (Go) create?
 > pthread creates an os thread (scheduled by the OS), threading.Thread creates a thread, and go creates a couroutine (and a green thread - same thing in this case?)
 
 ### How does pythons Global Interpreter Lock (GIL) influence the way a python Thread behaves?
 > Only one thread can be executed at once. The threads are syncronyzied using the GIL
 
 ### With this in mind: What is the workaround for the GIL (Hint: it's another module)?
 > Tasklets - green threads which are scheudled by python
 
 ### What does `func GOMAXPROCS(n int) int` change? 
 > The number of maximum allowed goroutines at once.

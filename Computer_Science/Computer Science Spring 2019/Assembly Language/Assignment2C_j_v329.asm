##########################################################################
# <Javier Villarreal>, CS 2318-251, Assignment 2 Part 1 Program C
############################
#In this program we create an array and reverse the order of the array
############################ data segment ################################


.data

intArray:	.word 44, 99, 33, 11, 55

display: 	.asciiz "Integer from 1st to 5th element "
display2:      .asciiz "Integer from 5th to 1st "
outputIs:	.asciiz "Output is: "

		.text
		
		li $v0, 4
		la $a0, display
		syscall
		
		la $t0, intArray	#Initialize array
		li $v0, 1
		lw $a0, 0($t0)		#Holds intArray{0} (44)
		syscall
		lw $a0, 4($t0)		#Holds intArray[1] (99)
		syscall
		lw $a0, 8($t0)		#Holds intArray[2]
		syscall
		lw $a0, 12($t0)		#Holds intArray[3] (11)
		syscall
		lw $a0, 16($t0)		#Holds intArray[4] (55)
		syscall
		
		li $v0, 11
		li $a0 '\n'
		syscall
		
		lw $t1, 0($t0)
		lw $t2, 12($t0)
		
		sw $t2, 0($t0)		#swap first and fourth
		sw $t1, 12($t0)
		
		lw $t3, 4($t0)
		lw $t4, 16($t0)
		
		sw $t4, 4($t0)		#swap 2nd and fifth
		sw $t3, 16($t0) 
		
		
		
		li $v0, 4
		la $a0, display2
		syscall
		li $v0, 11
		li $a0, '\n'
		syscall
		
		li $v0, 1
		lw $a0, 16($t0)
		syscall
		lw $a0, 12($t0)
		syscall
		lw  $a0, 8($t0)
		syscall
		lw $a0, 4($t0)
		syscall
		lw $a0, 0($t0)
		syscall
		
		li $v0, 10		#Graceful exit
		syscall
		
		
		li $v0, 10		#Graceful Exit
		syscall
		
		
		

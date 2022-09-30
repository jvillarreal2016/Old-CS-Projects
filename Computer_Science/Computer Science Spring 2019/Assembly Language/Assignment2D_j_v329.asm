##########################################################################					
# Javier Villarreal, CS 2318, Section 251, Assignment 2 Part 1 Program D					
					
#This program asks the use to enter their test scores and then calculates the average and displays it							
############################ data segment ################################					
				
			.data		
exam1Grade:		.asciiz "Enter exam 1 grade: "			
					
exam2Grade:		.asciiz "Enter exam 2 grade: "			
					
finalExamGrade:		.asciiz "Enter final exam grade: "			
					
averageGrade:		.asciiz "Average grade is: "			
									
		.text			
		.globl main			
main:					
		li $v0, 4			
		la $a0, exam1Grade			
		syscall	
				
		li $v0, 5			
		syscall	
				
		move $t0, $v0		# $t0 now has ExamGrade1	
					
		li $v0,4			
		la $a0, exam2Grade			
		syscall	
				
		li $v0, 5		#Read Exam2 input			
		syscall
					
		move $t1, $v0		# $t1 now has Exam2	
					
		li $v0, 4			
		la $a0, finalExamGrade			
		syscall
					
		li $v0, 5			
		syscall			
		
		move $t2, $v0		# $t2 now final grade		
					
		li $t3, 115		# $t3 is 115	
		mult $t0, $t3		# Lo now has $t0/115	
		mflo $t4
		sra $t4, $t4, 9		#Has Exam1 * 115/512		
					
		sll $t1, $t1, 3		# $t1 has Exam2 * 8	
		li $t6, 29				
		div $t1, $t6		
		mflo $t7		#$t7 has Exam2 * 8/29
					
		add $t7, $t7, $t4		#adding Exam1 * 115/512 + Exam2 * 8/29
		
		sra $t2, $t2, 1		#$t2 holds FinalGrade/2
		add $t7, $t7, $t2	#add $t2 + FinalGrade/2		
					
		li $v0, 4			
		la $a0, averageGrade			
		syscall			
				
		li $v0, 1		#Print Average
		syscall			

		move $a0, $t7
		syscall
		
		li $v0, 10
		syscall
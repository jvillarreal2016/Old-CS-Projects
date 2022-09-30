


.data 

exam1Score:	.asciiz "Exam 1's score is: "
exam2Score:	.asciiz "Exam 2's score is: "
finalExamScore: .asciiz "Final Exam's score is: "
averageScore:	.asciiz "Average score is: "
		
.text
		.globl main
		
		main:
		
		li $v0, 4	#Print Exam1Score
		la $a0, exam1Score
		syscall
		
		li $v0, 5	#read int input
		syscall
		
		move $t0, $v0
		
		 li $v0, 4	#Print Exam2Score
		 la $a0, exam2Score
		 syscall
		 
		 li $v0, 5	#read int input
		 syscall
		 
		 move $t1, $v0
		  
		 li $v0, 4	#print finalExamScore
		 la $a0, finalExamScore
		 syscall
		 
		 li $v0, 5	#read int input
		 syscall
		 
		 move $t2, $v0	   
		 
		 li $t3, 115
		 mult $t0, $t3		#Exam1 * 512
		 mflo $t4
		 sra $t4, $t4, 8	#$t4 has E1 * 115/512
		 
		 sll $t1, $t1, 3 	#Exam2 * 8
		 li  $t5, 29
		 div $t1, $t5	
		 mflo $t6		#t6 = E2 * 8/29
		 
		 add $t6, $t6, $t4, 	#$t6 = (E2*8/29)+(E1*115/512)
		 
		 sra $t2, $t2, 1	#t2 = FinalExam/2
		 add $t6, $t6, $t2	#$t6 = ((115/512)Exam1)+((8/29)Exam2)+(FinalScore/2))
		 
		 li $v0, 4 		#Print average
		 la $a0, averageScore
		 syscall
		 
		 li $v0, 1		#Print average
		 move $a0, $t6
		 syscall
		 
		 li $v0, 10		#exit
		 syscall

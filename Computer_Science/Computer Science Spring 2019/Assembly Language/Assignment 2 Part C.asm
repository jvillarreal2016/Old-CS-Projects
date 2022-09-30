.data
		
		
intArray:	.word 20
		
output:		.asciiz "Our new output is: "

		.text

		
		addi $s0, $zero, 44
		addi $s1, $zero, 99
		addi $s2, $zero, 33
		addi $s3, $zero, 11
		addi $s4, $zero, 55
		
		#Index is $t0
		
		addi $t0, $zero, 0
		
		sw $s0, intArray($t0)
		addi $t0, $t0, 4
		sw $s1, intArray($t0)
		addi $t0, $t0, 4
		sw $s2, intArray($t0)
		addi $t0, $t0, 4
		sw $s3, intArray ($t0)
		addi $t0, $t0, 4
		sw $s4, intArray ($t0)
		addi $t0, $t0, 4
		
		 
		lw $t6, intArray($zero)
		
		 li $v0, 1
		 addi $a0, $t6, 0
		 syscall
		  
		
MOV3 R0, #1
MOV3 R1, #1
MOV3 R2, #2
MOV3 R5, #6
MOV3 R3, #1
SUB  R5, R2
JZ   R5, 4
ADD  R1, R0
ADD  R0, R1
SUB  R5, R3
JZ   R4, -5
MOV4 R6, R0

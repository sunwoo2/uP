MOV3 R0, #1
MOV3 R1, #2
MOV3 R2, #3
MOV3 R3, #4
MOV1 [0], R0
MOV1 [1], R1
MOV1 [2], R2
MOV1 [3], R3
MOV3 R0, #5
MOV3 R1, #6
MOV3 R2, #7
MOV3 R3, #8
MOV1 [4], R0
MOV1 [5], R1
MOV1 [6], R2
MOV1 [7], R3
MOV3 R0, #9
MOV3 R1, #10
MOV3 R2, #1
MOV3 R3, #2
MOV1 [8], R0
MOV1 [9], R1
MOV1 [10], R2
MOV1 [11], R3
MOV3 R0, #3
MOV3 R1, #4
MOV3 R2, #5
MOV3 R3, #6
MOV1 [12], R0
MOV1 [13], R1
MOV1 [14], R2
MOV1 [15], R3
MOV3 R0, #7
MOV3 R1, #8
MOV3 R2, #9
MOV3 R3, #10
MOV1 [16], R0
MOV1 [17], R1
MOV1 [18], R2
MOV1 [19], R3
MOV3 R0, #1
MOV3 R1, #2
MOV3 R2, #3
MOV3 R3, #4
MOV1 [20], R0
MOV1 [21], R1
MOV1 [22], R2
MOV1 [23], R3
MOV3 R0, #5
MOV1 [24], R0
MOV3 R0, #1
MOV3 R1, #2
MOV3 R2, #3
MOV3 R3, #4
MOV1 [25], R0
MOV1 [26], R1
MOV1 [27], R2
MOV1 [28], R3
MOV3 R0, #5
MOV3 R1, #6
MOV3 R2, #7
MOV3 R3, #8
MOV1 [29], R0
MOV1 [30], R1
MOV1 [31], R2
MOV1 [32], R3
MOV3 R0, #9
MOV3 R1, #10
MOV3 R2, #1
MOV3 R3, #2
MOV1 [33], R0
MOV1 [34], R1
MOV1 [35], R2
MOV1 [36], R3
MOV3 R0, #3
MOV3 R1, #4
MOV3 R2, #5
MOV3 R3, #6
MOV1 [37], R0
MOV1 [38], R1
MOV1 [39], R2
MOV1 [40], R3
MOV3 R0, #7
MOV3 R1, #8
MOV3 R2, #9
MOV3 R3, #10
MOV1 [41], R0
MOV1 [42], R1
MOV1 [43], R2
MOV1 [44], R3
MOV3 R0, #1
MOV3 R1, #2
MOV3 R2, #3
MOV3 R3, #4
MOV1 [45], R0
MOV1 [46], R1
MOV1 [47], R2
MOV1 [48], R3
MOV3 R0, #5
MOV1 [49], R0

MOV0 R0, [0]
MOV0 R1, [1]
MOV0 R2, [25]
MOV0 R3, [30]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [75], R0
MOV0 R0, [2]
MOV0 R1, [3]
MOV0 R2, [35]
MOV0 R3, [40]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [76], R0
MOV0 R0, [4]
MOV0 R1, [45]
MUL R0, R1
MOV0 R1, [75]
MOV0 R2, [76]
ADD R0, R1
ADD R0, R2
MOV1 [50], R0
MOV0 R0, [0]
MOV0 R1, [1]
MOV0 R2, [26]
MOV0 R3, [31]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [75], R0
MOV0 R0, [2]
MOV0 R1, [3]
MOV0 R2, [36]
MOV0 R3, [41]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [76], R0
MOV0 R0, [4]
MOV0 R1, [46]
MUL R0, R1
MOV0 R1, [75]
MOV0 R2, [76]
ADD R0, R1
ADD R0, R2
MOV1 [51], R0
MOV0 R0, [0]
MOV0 R1, [1]
MOV0 R2, [27]
MOV0 R3, [32]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [75], R0
MOV0 R0, [2]
MOV0 R1, [3]
MOV0 R2, [37]
MOV0 R3, [42]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [76], R0
MOV0 R0, [4]
MOV0 R1, [47]
MUL R0, R1
MOV0 R1, [75]
MOV0 R2, [76]
ADD R0, R1
ADD R0, R2
MOV1 [52], R0
MOV0 R0, [0]
MOV0 R1, [1]
MOV0 R2, [28]
MOV0 R3, [33]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [75], R0
MOV0 R0, [2]
MOV0 R1, [3]
MOV0 R2, [38]
MOV0 R3, [43]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [76], R0
MOV0 R0, [4]
MOV0 R1, [48]
MUL R0, R1
MOV0 R1, [75]
MOV0 R2, [76]
ADD R0, R1
ADD R0, R2
MOV1 [53], R0
MOV0 R0, [0]
MOV0 R1, [1]
MOV0 R2, [29]
MOV0 R3, [34]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [75], R0
MOV0 R0, [2]
MOV0 R1, [3]
MOV0 R2, [39]
MOV0 R3, [44]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [76], R0
MOV0 R0, [4]
MOV0 R1, [49]
MUL R0, R1
MOV0 R1, [75]
MOV0 R2, [76]
ADD R0, R1
ADD R0, R2
MOV1 [54], R0

MOV0 R0, [5]
MOV0 R1, [6]
MOV0 R2, [25]
MOV0 R3, [30]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [75], R0
MOV0 R0, [7]
MOV0 R1, [8]
MOV0 R2, [35]
MOV0 R3, [40]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [76], R0
MOV0 R0, [9]
MOV0 R1, [45]
MUL R0, R1
MOV0 R1, [75]
MOV0 R2, [76]
ADD R0, R1
ADD R0, R2
MOV1 [55], R0
MOV0 R0, [5]
MOV0 R1, [6]
MOV0 R2, [26]
MOV0 R3, [31]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [75], R0
MOV0 R0, [7]
MOV0 R1, [8]
MOV0 R2, [36]
MOV0 R3, [41]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [76], R0
MOV0 R0, [9]
MOV0 R1, [46]
MUL R0, R1
MOV0 R1, [75]
MOV0 R2, [76]
ADD R0, R1
ADD R0, R2
MOV1 [56], R0
MOV0 R0, [5]
MOV0 R1, [6]
MOV0 R2, [27]
MOV0 R3, [32]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [75], R0
MOV0 R0, [7]
MOV0 R1, [8]
MOV0 R2, [37]
MOV0 R3, [42]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [76], R0
MOV0 R0, [9]
MOV0 R1, [47]
MUL R0, R1
MOV0 R1, [75]
MOV0 R2, [76]
ADD R0, R1
ADD R0, R2
MOV1 [57], R0
MOV0 R0, [5]
MOV0 R1, [6]
MOV0 R2, [28]
MOV0 R3, [33]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [75], R0
MOV0 R0, [7]
MOV0 R1, [8]
MOV0 R2, [38]
MOV0 R3, [43]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [76], R0
MOV0 R0, [9]
MOV0 R1, [48]
MUL R0, R1
MOV0 R1, [75]
MOV0 R2, [76]
ADD R0, R1
ADD R0, R2
MOV1 [58], R0
MOV0 R0, [5]
MOV0 R1, [6]
MOV0 R2, [29]
MOV0 R3, [34]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [75], R0
MOV0 R0, [7]
MOV0 R1, [8]
MOV0 R2, [39]
MOV0 R3, [44]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [76], R0
MOV0 R0, [9]
MOV0 R1, [49]
MUL R0, R1
MOV0 R1, [75]
MOV0 R2, [76]
ADD R0, R1
ADD R0, R2
MOV1 [59], R0

MOV0 R0, [10]
MOV0 R1, [11]
MOV0 R2, [25]
MOV0 R3, [30]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [75], R0
MOV0 R0, [12]
MOV0 R1, [13]
MOV0 R2, [35]
MOV0 R3, [40]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [76], R0
MOV0 R0, [14]
MOV0 R1, [45]
MUL R0, R1
MOV0 R1, [75]
MOV0 R2, [76]
ADD R0, R1
ADD R0, R2
MOV1 [60], R0
MOV0 R0, [10]
MOV0 R1, [11]
MOV0 R2, [26]
MOV0 R3, [31]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [75], R0
MOV0 R0, [12]
MOV0 R1, [13]
MOV0 R2, [36]
MOV0 R3, [41]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [76], R0
MOV0 R0, [14]
MOV0 R1, [46]
MUL R0, R1
MOV0 R1, [75]
MOV0 R2, [76]
ADD R0, R1
ADD R0, R2
MOV1 [61], R0
MOV0 R0, [10]
MOV0 R1, [11]
MOV0 R2, [27]
MOV0 R3, [32]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [75], R0
MOV0 R0, [12]
MOV0 R1, [13]
MOV0 R2, [37]
MOV0 R3, [42]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [76], R0
MOV0 R0, [14]
MOV0 R1, [47]
MUL R0, R1
MOV0 R1, [75]
MOV0 R2, [76]
ADD R0, R1
ADD R0, R2
MOV1 [62], R0
MOV0 R0, [10]
MOV0 R1, [11]
MOV0 R2, [28]
MOV0 R3, [33]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [75], R0
MOV0 R0, [12]
MOV0 R1, [13]
MOV0 R2, [38]
MOV0 R3, [43]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [76], R0
MOV0 R0, [14]
MOV0 R1, [48]
MUL R0, R1
MOV0 R1, [75]
MOV0 R2, [76]
ADD R0, R1
ADD R0, R2
MOV1 [63], R0
MOV0 R0, [10]
MOV0 R1, [11]
MOV0 R2, [29]
MOV0 R3, [34]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [75], R0
MOV0 R0, [12]
MOV0 R1, [13]
MOV0 R2, [39]
MOV0 R3, [44]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [76], R0
MOV0 R0, [14]
MOV0 R1, [49]
MUL R0, R1
MOV0 R1, [75]
MOV0 R2, [76]
ADD R0, R1
ADD R0, R2
MOV1 [64], R0

MOV0 R0, [15]
MOV0 R1, [16]
MOV0 R2, [25]
MOV0 R3, [30]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [75], R0
MOV0 R0, [17]
MOV0 R1, [18]
MOV0 R2, [35]
MOV0 R3, [40]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [76], R0
MOV0 R0, [19]
MOV0 R1, [45]
MUL R0, R1
MOV0 R1, [75]
MOV0 R2, [76]
ADD R0, R1
ADD R0, R2
MOV1 [65], R0
MOV0 R0, [15]
MOV0 R1, [16]
MOV0 R2, [26]
MOV0 R3, [31]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [75], R0
MOV0 R0, [17]
MOV0 R1, [18]
MOV0 R2, [36]
MOV0 R3, [41]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [76], R0
MOV0 R0, [19]
MOV0 R1, [46]
MUL R0, R1
MOV0 R1, [75]
MOV0 R2, [76]
ADD R0, R1
ADD R0, R2
MOV1 [66], R0
MOV0 R0, [15]
MOV0 R1, [16]
MOV0 R2, [27]
MOV0 R3, [32]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [75], R0
MOV0 R0, [17]
MOV0 R1, [18]
MOV0 R2, [37]
MOV0 R3, [42]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [76], R0
MOV0 R0, [19]
MOV0 R1, [47]
MUL R0, R1
MOV0 R1, [75]
MOV0 R2, [76]
ADD R0, R1
ADD R0, R2
MOV1 [67], R0
MOV0 R0, [15]
MOV0 R1, [16]
MOV0 R2, [28]
MOV0 R3, [33]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [75], R0
MOV0 R0, [17]
MOV0 R1, [18]
MOV0 R2, [38]
MOV0 R3, [43]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [76], R0
MOV0 R0, [19]
MOV0 R1, [48]
MUL R0, R1
MOV0 R1, [75]
MOV0 R2, [76]
ADD R0, R1
ADD R0, R2
MOV1 [68], R0
MOV0 R0, [15]
MOV0 R1, [16]
MOV0 R2, [29]
MOV0 R3, [34]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [75], R0
MOV0 R0, [17]
MOV0 R1, [18]
MOV0 R2, [39]
MOV0 R3, [44]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [76], R0
MOV0 R0, [19]
MOV0 R1, [49]
MUL R0, R1
MOV0 R1, [75]
MOV0 R2, [76]
ADD R0, R1
ADD R0, R2
MOV1 [69], R0

MOV0 R0, [20]
MOV0 R1, [21]
MOV0 R2, [25]
MOV0 R3, [30]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [75], R0
MOV0 R0, [22]
MOV0 R1, [23]
MOV0 R2, [35]
MOV0 R3, [40]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [76], R0
MOV0 R0, [24]
MOV0 R1, [45]
MUL R0, R1
MOV0 R1, [75]
MOV0 R2, [76]
ADD R0, R1
ADD R0, R2
MOV1 [70], R0
MOV0 R0, [20]
MOV0 R1, [21]
MOV0 R2, [26]
MOV0 R3, [31]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [75], R0
MOV0 R0, [22]
MOV0 R1, [23]
MOV0 R2, [36]
MOV0 R3, [41]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [76], R0
MOV0 R0, [24]
MOV0 R1, [46]
MUL R0, R1
MOV0 R1, [75]
MOV0 R2, [76]
ADD R0, R1
ADD R0, R2
MOV1 [71], R0
MOV0 R0, [20]
MOV0 R1, [21]
MOV0 R2, [27]
MOV0 R3, [32]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [75], R0
MOV0 R0, [22]
MOV0 R1, [23]
MOV0 R2, [37]
MOV0 R3, [42]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [76], R0
MOV0 R0, [24]
MOV0 R1, [47]
MUL R0, R1
MOV0 R1, [75]
MOV0 R2, [76]
ADD R0, R1
ADD R0, R2
MOV1 [72], R0
MOV0 R0, [20]
MOV0 R1, [21]
MOV0 R2, [28]
MOV0 R3, [33]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [75], R0
MOV0 R0, [22]
MOV0 R1, [23]
MOV0 R2, [38]
MOV0 R3, [43]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [76], R0
MOV0 R0, [24]
MOV0 R1, [48]
MUL R0, R1
MOV0 R1, [75]
MOV0 R2, [76]
ADD R0, R1
ADD R0, R2
MOV1 [73], R0
MOV0 R0, [20]
MOV0 R1, [21]
MOV0 R2, [29]
MOV0 R3, [34]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [75], R0
MOV0 R0, [22]
MOV0 R1, [23]
MOV0 R2, [39]
MOV0 R3, [44]
MUL R0, R2
MUL R1, R3
ADD R0, R1
MOV1 [76], R0
MOV0 R0, [24]
MOV0 R1, [49]
MUL R0, R1
MOV0 R1, [75]
MOV0 R2, [76]
ADD R0, R1
ADD R0, R2
MOV1 [74], R0

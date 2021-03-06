##### 该词法分析程序采用LEX词法分析自动生成器产生，可以对标准C语言进行词法分析。该程序具有完备性、用户友好性、使用便捷等特点。支持注释的分析，生成结果清晰易读。  

---
### 1. 文件说明  
scanner.l : 词法规则文件，是LEX生成器的输入。  
lex.yy.c : 词法分析器源文件，是LEX根据scanner.l里的规则产生的输出。
reserve.h ： 保留字定义头文件，包含标准C语言的所有32个保留字。  
constant.c ： 测试用输入文件，用以测试该词法分析器对常量的分析。  
parser : 词法分析器可执行文件。  
tokens.txt ： 词法分析器输出文件，输出源程序的tokens和必要的元信息。
hello.c ： 词法分析器的输入文件，实质上任何文本均可作为输入。  

----------
### 2. 使用说明  
该程序仅在Linux环境下运行，若想更换平台，请重新编译或者联系作者： *yuqs2113@mails.jlu.edu.cn* 。
在当前目录下运行Linux终端，输入：  
        ./parser < hello.c  
        
即可对*hello.c*源程序进行词法分析，分析结果保存在当前目录的tokens.txt文件中。  

----------
### 3. 如果想重新编译  
输入以下指令：   
flex scanner.l     
cc -o parser lex.yy.c  
即可生成可执行文件*parser*.

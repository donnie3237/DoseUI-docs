#include <stdio.h>
#include <stdbool.h>

void main() {
    if (1) {    
        puts("value 1 is true"); 		
        //คำสั่งนี้ถูกดำเนินการ เพราะเงื่อนไขเป็นจริง (1 = true)
    }

    if (0) {
        puts("value 0 is true");		
        //คำสั่งนี้ไม่ถูกดำเนินการ เพราะเงื่อนไขเป็นเท็จ (0 = false)
    }

    bool a = false;
    if (a) {	 
        puts("variable a is true");
        //คำสั่งทั้งหมดในบล็อกนี้ไม่ถูกดำเนินการ
        //เพราะเงื่อนไขเป็นเท็จ (0 = false)
    }

    bool b = (1 == 1); 	//b = true
    if (b) { 	
        puts("variable b is true");
        //คำสั่งทั้งหมดในบล็อก if จะถูกดำเนินการ 
        //เพราะเงื่อนไขเป็นจริง
    }

    bool c = true;       
    if (c) {	
        puts("variable c is true");
        //คำสั่งในบล็อก if จะถูกดำเนินการ 
        //เพราะเงื่อนไขเป็นจริง
    }

    bool d = false;
    if (d) { 			
        puts("variable d is true");
        //คำสั่งในบล็อก if ไม่ถูกดำเนินการ 
        //เพราะเงื่อนไขเป็นเท็จ
    }
}
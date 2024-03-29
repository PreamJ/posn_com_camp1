# posn_com_camp1 
สอวน.คอมพิวเตอร์ ค่าย 1 ศูนย์โรงเรียนสามเสนวิทยาลัย<br>
This is the C code I have written during my academic year 2022 while taking the POSN computer class (camp1).<br><br>
Author: Pream Junnatasna

## เริ่มต้นเขียนภาษา C
### โครงสร้างโปรแกรม

โครงสร้างของโปรแกรมจะประกอบไปด้วย 2 ส่วน ได้แก่
1. Head -> global definitions หมายถึง เมื่อใส่อะไรในนี้แล้ว สิ่งนี้จะสามารถใช้ได้ตลอดทั้งโปรแกรม
2. Body -> local definitions, statement หมายถึง สิ่งนี้จะสามารถใช้ได้แค่ในส่วนใดส่วนหนึ่งของโปรแกรม

#### Head
- คำสั่ง #include ใช้เพื่อนำ (ใครที่คุ้นเคยกับ python จะคล้ายๆกับคำสั่ง import) library ต่างๆที่จะใช้เข้ามา
- โดยทั่วไปจะสั่ง 
- #include <stdio.h> เพื่อให้สามารถเรียกใช้งานฟังก์ชั่นพื้นฐานต่างๆ
- นอกจากนี้ ยังมี library ต่างๆให้นำมาใช้ เช่น math.h, string.h เป็นต้น
- สามารถศึกษา library อื่นๆเพิ่มเติมได้จาก [library](https://cplusplus.com/)
- โดยไฟล์ที่เรียกใช้ต้องอยู่ใน "" หรือ <>
- นอกจากนี้ในส่วนของ head ยังสามารถประกาศ global variable หรือทำอย่างอื่นได้อีกด้วย

### Body
body เป็นส่วนของโปรแกรมที่ทำงานตามคำสั่งที่เราใส่เข้าไป 
main ของ body จะถูกประกาศด้วย
```c
int main(){

  return 0;
}
```
ในภาษา C แต่ละคำสั่งจะจบด้วย ; 
<br>
___
### คำสั่งพื้นฐาน จาก stdio.h
## คำสั่งแสดงผล
```c
printf("control string", variable,...);
```
เช่น
```c
a = 2
printf("The output is : ", a);
// The output is : 2
```
control string ประกอบด้วย 
1. ข้อความอธิบาย ex. "this is c program"
2. %format ex. %d (integer), %c (character), %f (float)
3. escape sequence ex. \n (new line), \t (tab)
comment ในภาษา C จะมี 2 ประเภท คือ
   single line comment ใช้เครื่องหมาย //
   multiple line comment ใช้เครื่องหมาย /* */
---
#### data type and variable
- ตัวแปร เป็นชื่อของหน่วยความจำที่ตำแหน่งต่างๆ สามารถกำหนดได้โดยผู้เขียนตัวแปร สามารถใช้ในการเก็บข้อมูลต่างๆได้
- หลักการคือ เราต้องประกาศชนิดของตัวแปรก่อนเรียกใช้
- แต่ในภาษา C จำเป็นต้องระบุประเภทของข้อมูลที่ต้องการเก็บ เนื่องจากข้อมูลแต่ละประเภทนั้นมีขนาดไม่เท่ากัน เช่น
    - ข้อมูลประเภท จำนวนเต็ม ประกาศตัวแปร int  ขนาด 4 byte 
    - ข้อมูลประเภท ตัวอักขระ  ประกาศตัวแปร char ขนาด 1 byte
    - นอกจากนี้ยังมีตัวแปรประเภทอื่นอีกมากมาย เช่น unsigned int, long int, bool (boolean เป็นข้อมูลที่มีได้เพียงแค่ true(1) และ false(0))
    - ตัวแปรสามารถกำหนดค่าได้โดยใช้เครื่องหมาย = (= ในนี้จะมีหน้าที่เป็น assignment operator)
    - มีรูปแบบคือ variable = ค่าที่ต้องการตั้ง
    - ตัวอย่าง
```c
int a, b=2;
char s;
a = 1;
s = 'c'
b = a // b=1, a=1
```
- ข้อความชนิด string คือ ตัวแปรชนิดอักขระ (char) หลายๆตัวมาต่อกัน มีรูปแบบคำสั่ง
```c
char name[n] = "str"
// name คือ ชื่อตัวแปร
// n    คือ ขนาดของข้อความ
// str  คือ ข้อความที่กำหนดค่าให้กับตัวแปร
```
---
#### นิพจน์และตัวดำเนินการ
 เราเชื่อว่าทุกคนคงจะเคยรู้กันมาบ้าง เรื่องตัวดำเนินการทางคณิตศาสตร์ ดังนั้นเราจะขอข้ามส่วนนั้นไป  แต่อยากจะขอเตือนทุกคนไว้ว่า ถ้าตัวแปรที่นำมาดำเนินการกันไม่ใช่ตัวแปรชนิดเดียวกัน ภาษานี้จะเปลี่ยนให้เป็นประเภทเดียวกันก่อนคำนวน เช่น 7/2 จะได้ค่าเป็น 3 ถ้าอยากได้ 3.5 ต้องใช้ตัวแปร float
 
- ตัวดำเนินการ Unary
มีหลักการใข้ 2 แบบ ได้แก่
1. prefix mode จะนำค่าไปดำเนินการก่อนนำไปใช้
   - ++a  เพิ่มค่าทีละ 1 เขียนอีกแบบได้ว่า x = x+1
   - --a  ลดค่าทีละ  1 เขียนอีกแบบได้ว่า x = x-1
2. postfix mode จะนำค่าไปใช้ก่อนนำไปดำเนินการ
   - a++  เพิ่มค่าทีละ 1 เขียนอีกแบบได้ว่า x = x+1
   - a--  ลดค่าทีละ  1 เขียนอีกแบบได้ว่า x = x-1
---

## คำสั่งรับข้อมูล
คำสั่งที่ใช้งานบ่อยๆจะมี 
```c
scanf("control string", argument list); //หากเว้นวรรคข้อมูล โปรแกรมจะมองว่าเป็นตัวแปรมากกว่า 1 ตัว 
gets(string variable) //เก็บข้อความ string สามารถเก็บข้อมูลที่เว้นวรรคได้
```
เช่น
```c
scanf("%d", &a); // รับค่าข้อมูลจากคีบอร์ด ซึ่งเป็นตัวแปรประเภท integer มาเก็บในตัวแปรชื่อว่า a
```

## คำสั่งควบคุม
1. คำสั่งควบคุมแบบทางเลือก
  - if-else
    หากเงื่อนไขเป็นจริง จะทำคำสั่งใน {}
```c
switch(condition){
  case 1:
    statement;
  case 2:
    statement;
  case 3: 
    statement; 
    break;
    // คำสั่ง break เป็นการสั่งหยุดการทำงานต่อไปของชุดคำสั่ง
  default: //ไม่ตรงกับ case ไหนเลย
    statement;
}
```

2. คำสั่งควบคุมแบบวนซ้ำ
อยากจะเตือนการควบคุมแบบวนซ้ำว่า !! ต้องมีจุดจบที่ทำให้ออกจาก loop ได้ ไม่งั้นโปรแกรมจะรันตลอดไป เรียกว่า infinite loop
  - while
```c
while(condition){
  statement;
}
// ตรวจสอบ condition ถ้าเป็นจริง จะทำชุดคำสั่งซ้ำ แต่ถ้าเป็นเท็จ จะออกจากการวนซ้ำ
```
    - break เอาไว้ออกจากการ loop
    - return ส่งค่าออกและจบ loop
    - continue สั่งให้ไปตรวจสอบเงื่อนไขของ loop อีกครั้ง ถ้าเป็นจริงก็ทำคำสั่งใน loop ต่อไป
  - do-while
```c
do{
  statement;
 }
 while(condition);
 // ทำชุดคำสั่งก่อน แล้วค่อยมาเช็คเงื่อนไข
```
  - for
```c
for(i=0; i<10; i++){
  printf("&d", i); // output : 0123456789
}
// เงื่อนไขของ for loop ประกอบไปด้วย 3 ส่วน คือ
// 1. ส่วนกำหนดค่าเริ่มต้น เป็นจุดเริ่มต้นว่าต้องการเริ่มวนที่เท่าไหร่ นิยมใช้เป็น 0
// 2. ส่วนเงื่อนไขที่ต้องการตรวจสอบ หากเป็นเท็จก็จะจบ loop นั้น
// 3. ส่วนของการปรับค่าตัวแปร เป็นส่วนที่เปลี่ยนค่าตัวแปรที่ใช้ใน loop
```
---
### ประเภทของตัวแปร
1. local variable 
  - คือ ตัวแปรที่ใช้ใน function ที่ได้ประกาศตัวแปรนั้นๆนั้นๆ
2. global variable
  - คือ ตัวแปรที่ประกาศไว้นอก function หลัก สามารถเรียกใช้ได้ทุกที่

```c
#include<stdio.h>
int g; //g คือ global variable
int main(){
int l; //l คือ local variable
l = 1;
g = 2;
printf("%d", l+g); // output : 3;
}
```
loop สามารถใช้ซ้อนกันได้ เช่น
```c
#include<stdio.h>
int main(){
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
      statement;
    }
  }
  // เรื่องนี้จะมีประโยชน์มากเมื่อต้องการสร้าง array 2d หรือมากกว่า
}
```
---
### array
- array เป็นตัวแปรที่ใช้ชื่อเดียว แต่สามารถเก็บข้อมูลชนิดเดียวกันเป็นกลุ่มได้
- array ต้องจองพื้นที่ตามขนาดที่ระบุ แต่ละข้อมูลเรียกว่า element และถ้าต้องการอ้างถึงข้อมูลแต่ละตัว จะใช้ index บอก
- เราเคยเจอ array ของ char ที่เรียกว่า string ไปแล้วในก่อนหน้า
```c
int arr[10]; // ประกาศตัวแปรชื่อ arr เก็บข้อมูลจำนวนเต็มได้ 10 คัว
int n[] = {1,2,3,4,5}; // ถ้าไม่ระบุขนาดต้องระบุ element ใน array โปรแกรมจะจองพื้นที่ให้เอง เช่นในที่นี้จองไว้ 5
int twoDarr[3][2] = {{1,2},{3,4},{5,6}}; // ตัวอย่างการประกาศ array 2d
printf("%d", twoDarr[0][1]); // จะได้ข้อมูลตำแหน่งที่ [0][1] นั่นคือ 2
```
อ่านมาซักพักอาจจะเริ่มมีข้อมูลอยู่ในหัวเยอะเกินไป เราลองมาดูตัวอย่างกันดีกว่า
```c
/* โจทย์: เขียนโปรแกรมรับเลขจำนวนเต็ม แล้วแสดงผลดังนี้
input: 3
output:
  *
 ***
*****
input: 4
output:
   *
  ***
 *****
*******
*/
#include<stdio.h> //เรียกใช้ library จาก stdio.h
int main(){
	int n; // ประกาศตัวแปรชื่อ n
	printf("Enter number : ");
  scanf("%d", &n); // รับค่าจากคีบอร์ด เก็บไว้ในตัวแปรที่ชื่อ n
	for(int i=1; i<=n; i++){ // loop จาก 1 จนถึง n โดยในแต่ละครั้งที่วน จะเพิ่มค่า i ทีละ 1
		for(int j=1; j<=n-i; j++){ // loop จาก 1 จนถึง n-i
			printf(" "); 
		}
		for(int j=1; j<=2*i-1;j++){ // loop จาก 1 และเพิ่มขึ้นทีละ 1 จนกว่าจะมีค่ามากกว่า 2i-1
			printf("*");
		}
		printf("\n"); // ขึ้นบรรทัดใหม่
	}
}
```

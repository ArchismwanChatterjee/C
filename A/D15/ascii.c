// Write a C program to print the ASCII chart. Show the output page wise, I. e., show 25
// rows at a time where each row contain a. ASCII value and the corresponding character
// value. The user can press any key to see the next page.

#include <stdio.h>
#include <conio.h>
int main()
{
    char input;
    int page = 1;
    int index = 0;
    while (1)
    {
        printf("\tPAGE : %d\n", page);
        for (int i = 0; i < 25 && index < 256; i++)
        {
            printf("%d: %c\n", index, index);
            index++;
        }
        printf("\n\nEnter any key to continue,X to exit\n");
        if (getch() == 'x')
            break;
        if (!(index < 256))
            break;
        page++;
    }
    printf("\n\n Ended printing characters");
}
/*
        PAGE : 1
0:
1: ☺
2: ☻
3: ♥
4: ♦
5: ♣
6: ♠
7:
8:
9:
10:

11:

12:

13:
14:
15:
16: ►
17: ◄
18: ↕
19: ‼
20: ¶
21: §
22: ▬
23: ↨
24: ↑


Enter any key to continue,X to exit
        PAGE : 2
25: ↓
26: →
27:

8: ∟
29: ↔
30: ▲
31: ▼
32:
33: !
34: "
35: #
36: $
37: %
38: &
39: '
40: (
41: )
42: *
43: +
44: ,
45: -
46: .
47: /
48: 0
49: 1


Enter any key to continue,X to exit
        PAGE : 3
50: 2
51: 3
52: 4
53: 5
54: 6
55: 7
56: 8
57: 9
58: :
59: ;
60: <
61: =
62: >
63: ?
64: @
65: A
66: B
67: C
68: D
69: E
70: F
71: G
72: H
73: I
74: J


Enter any key to continue,X to exit
        PAGE : 4
75: K
76: L
77: M
78: N
79: O
80: P
81: Q
82: R
83: S
84: T
85: U
86: V
87: W
88: X
89: Y
90: Z
91: [
92: \
93: ]
94: ^
95: _
96: `
97: a
98: b
99: c


Enter any key to continue,X to exit
        PAGE : 5
100: d
101: e
102: f
103: g
104: h
105: i
106: j
107: k
108: l
109: m
110: n
111: o
112: p
113: q
114: r
115: s
116: t
117: u
118: v
119: w
120: x
121: y
122: z
123: {
124: |


Enter any key to continue,X to exit
        PAGE : 6
125: }
126: ~
127:
128: Ç
129: ü
130: é
131: â
132: ä
133: à
134: å
135: ç
136: ê
137: ë
138: è
139: ï
140: î
141: ì
142: Ä
143: Å
144: É
145: æ
146: Æ
147: ô
148: ö
149: ò


Enter any key to continue,X to exit
        PAGE : 7
150: û
151: ù
152: ÿ
153: Ö
154: Ü
155: ¢
156: £
157: ¥
158: ₧
159: ƒ
160: á
161: í
162: ó
163: ú
164: ñ
165: Ñ
166: ª
167: º
168: ¿
169: ⌐
170: ¬
171: ½
172: ¼
173: ¡
174: «


Enter any key to continue,X to exit
        PAGE : 8
175: »
176: ░
177: ▒
178: ▓
179: │
180: ┤
181: ╡
182: ╢
183: ╖
184: ╕
185: ╣
186: ║
187: ╗
188: ╝
189: ╜
190: ╛
191: ┐
192: └
193: ┴
194: ┬
195: ├
196: ─
197: ┼
198: ╞
199: ╟


Enter any key to continue,X to exit
        PAGE : 9
200: ╚
201: ╔
202: ╩
203: ╦
204: ╠
205: ═
206: ╬
207: ╧
208: ╨
209: ╤
210: ╥
211: ╙
212: ╘
213: ╒
214: ╓
215: ╫
216: ╪
217: ┘
218: ┌
219: █
220: ▄
221: ▌
222: ▐
223: ▀
224: α


Enter any key to continue,X to exit
        PAGE : 10
225: ß
226: Γ
227: π
228: Σ
229: σ
230: µ
231: τ
232: Φ
233: Θ
234: Ω
235: δ
236: ∞
237: φ
238: ε
239: ∩
240: ≡
241: ±
242: ≥
243: ≤
244: ⌠
245: ⌡
246: ÷
247: ≈
248: °
249: ∙


Enter any key to continue,X to exit
        PAGE : 11
250: ·
251: √
252: ⁿ
253: ²
254: ■
255:  


Enter any key to continue,X to exit


 Ended printing characters
 */
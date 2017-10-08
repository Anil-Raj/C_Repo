 uc 	9.4.0.342ÿÿÿÿÿÿÿÿÿÿ Rhttp://www.planet-source-code.com/vb/scripts/ShowCode.asp?txtCodeId=71909&lngWId=1               ÿÿÿÿ    £Ä             %   7   <   H   N   U   Z   `   m   y            §   ²   ¸   ¿   È   Ú   ï  
    4  9  L  O  h  s  y    ˆ  ‹  ’  ¡  ·  ¼  Ì  Ô  Ş  ì  õ          /  M  R  Y  u  ‡  ˜  ¢  ¹  Î  õ  	    1  U  v  –  º  Ã  Ç  ç  
  ,  T  w  {  œ  Á  Ú  Ş    $  I  a  g  Œ  “  ±  ¿  Ş  ñ    
  /  O  j    Ÿ  ©  °  Ô  ã  ö  	    .  B  X  j  €  ”  ±  Ã  İ      7  I  V  Z  e  ƒ     ­  ³  Ù  è  	  	  	/  	E  	a  	}  	š  	º  	Â  	Ì  	Ğ  	İ  	á  	í  	õ  	ø  	û  
  
  
,  
D  
T  
X  
f  
y  
—  
¥  
³  
À  
Ä  
Ğ  
à  
æ  
ñ  
ú           (  E  ^  v  „  “  —  ¨  Â  Õ  ñ       3  O  f  j  y  ˜  ¥  ²  ½  Ö  Ü  ß  â  ï  ş      #  4  Q  j  ‚  ˆ  ‹  •  ˜  ©  ­  µ  É  Í  ä  ù    ,  /  2  N  R  d      »  Ó  ë      .  ?  C  O  \  i      š  §  À  Ã  Ü  à  ì      0  9  =  I  b  u  ƒ  ‘  ”  «  Ô  ù    7  A  M  X  €  •  ½  Ï  á  ì  ò  û  
        1  4  I  _  b  i  ‰  ¯  ·  Â  Æ  Ù  ş  !  G  p    º  Ù  ò  ş  	  )  0  3  <  D  g  w    ¡  ²  Å  È  Õ  Ø  ï      !  '  *  7  :  P  b  y  |  ‰  Œ  ¢  ·  Å  Ù  Ü  é  ì  ú        *  -  @  W  `  c  p  s  ‚  •  ˜  ¥  ¨  ²  Ç  Û  î  ñ  ş      *  =  X  g  {  ~  ‹    §  ±  È  Ñ  Ô  á  ä  ú      "  %  2  5  N  b  e  r  u    ˜  ›  ¨  «  ¸  Ï  Ò  ß  â  ÷      ,  /  <  ?  M  a  d  q  t    œ  ³  ¹  ¼  É  Ì  İ  ï            6  G  ^  a  n  q  ‰  •  ¬  ¯  ¼  ¿  Ö  í  ğ  ı       !  <  Q  j  €  ‡    ¤  §  ´  ·  È  ß  å  è  õ  ø    &  , next Dream it. Code it. â„¢ Login .Net (VB and C#) PHP 
Javascript Java C/C++ SQL Perl ASP classic 
VB classic Delphi Cold Fusion Code/Articles Top Code 	Community Jobs Other Gotoâ€¦ Important alert: (current site time  1/30/2014 7:53:18 AM EDT) *. $They're finally here! Check out our  new 7 Source Code CDs ! MOUSE SHOOTING GAME IN  	TURBO C++ Like Submit Share 1 Email Submitted on: 3/27/2009 8:39:41 AM By: riddhi Agarwal Level: Beginner User Rating: Unrated Compatibility: VB 3.0 Views: 8654 (About the author) MOUSE SHOOTING GAME IN TURBO C++ code: Can't Copy and Paste this? Click here for a copy-and-paste  friendly version of this code! Terms of Agreement: %By using this code, you agree to the  following terms... 1. "You may use this code in your own  "programs (and may compile it into  a program and distribute it in  compiled format for languages  "that allow it) freely and with no  charge. 2. You MAY NOT redistribute this  !code (for example to a web site)   without written permission from  &the original author. Failure to do so  !is a violation of copyright laws. 3. You may link to this code from  #another website, but ONLY if it is  not wrapped in a frame. 4. !You will abide by any additional  !copyright restrictions which the  #author may have placed in the code  or code's description. 				 #
'********************************* ***** ' Name: MOUSE SHOOTING GAME  IN TURBO C++ ' Description:MOUSE SHOOTING  GAME IN TURBO C++ ' By: riddhi Agarwal ' #'This code is copyrighted and has'  limited warranties.Please see  http://www.Planet-Source- Code.com/vb/scripts /ShowCode.asp?txtCodeId=71909& lngWId=1 'for  "details.'************************* ************* #include<stdio.h> #include<conio.h> #include<stdlib.h> #include<dos.h> #include<stdlib.h> #include<graphics.h> #include<time.h> #include<iostream.h> union REGS in,out; void player(int x1,int y1); void bk(int d1); void showmouseptr(void); &void getmousepos(int *button, int *x,  int *y); &void restrictmouseptr(int x1, int y1,  int x2, int y2); void main() { 	clrscr(); int gdriver = DETECT, gmode; initgraph(&gdriver, &gmode, "..\\bgi"); int  $stop=1,a,b,x,r,y,button,i=1,d=1,p=0; textcolor(0); cout<<"WELCOME TO SHOOTING  GAME\n"; cout<<"SHOOT ALL THE INCOMING  BOMBS BY USING LEFT  CLICK\nGET MORE POINTS TO  DESTROY THEM EARLY\nPRESS  ANY KET TO CONTINUE\nPRESS  ENTER AT ANY POINT TO EXIT THE GAME"; while(1) { if(kbhit()) { 
a=getch(); break; } } 	clrscr(); a=1; restrictmouseptr(0,0,635,430); cout<<"points:: 0000"; while(stop==1) { setcolor(2); //showmouseptr(); getmousepos(&button,&x, &y); player(x,y); setcolor(1); if(kbhit()) { 
a=getch(); if(a+100==172) d++; 	if(a==13) stop=0; a=1; } bk(i); if(i%72==1) r=random(200);  circle(200+r-(i%72)*(i%72) /16,100+r-(i%72)*(i%72) /16,(i%72)*(i%72)/40); setcolor(3); if(button==1) { circle(x,y,10); if(x<200+r-(i%72)*(i%72) /16+(i%72)*(i%72) /40&&x>200+r-(i%72)*(i%72) /16-(i%72)*(i%72) /40&&y<100+r-(i%72)*(i%72) /16+(i%72)*(i%72) /40&&y>100+r-(i%72)*(i%72) /16-(i%72)*(i%72)/40) { p=p+100-i%72; cout<<"NICE SHOT shot point=" <<100-i%72; delay(800); 	clrscr(); cout<<"points:: 00"<<p; i=0; } } delay(100); setcolor(16); bk(i); player(x,y); if(button==1) circle(x,y,10);  circle(200+r-(i%72)*(i%72) /16,100+r-(i%72)*(i%72) /16,(i%72)*(i%72)/40); i++; } getch(); } void bk(int d1) { int i; for(i=1;i<=18;i++) { rectangle(150-(i+d1%5 /2)*i/2,100-(i+d1%5 /2)*i/2,500+(i+d1%5 /2)*i/2,300+(i+d1%5/2)*i/2); } } void player(int x1,int y1) { circle(x1,y1,1); rectangle(300,300,330,330); rectangle(280,330,340,380); rectangle(300,380,330,430); line(315,380,315,430); line(335,330,345-(335- x1)/5,330-(330-y1)/5); } &void restrictmouseptr(int x1, int y1,  int x2, int y2) { 
in.x.ax=7; in.x.cx=x1; in.x.dx=x2; int86(0x33,&in, &out); 
in.x.ax=8; in.x.cx=y1; in.x.dx=y2; int86(0x33, &in, &out); } void showmouseptr(void) { 
in.x.ax=1; int86(0x33, &in, &out); } &void getmousepos(int *button, int *x,  int *y) { 
in.x.ax=3; int86(0x33, &in, &out); *button=out.x.bx; *x=out.x.cx; *y=out.x.dx; } Report Bad Submission 'Use this form to tell us if this entry  #should be deleted (i.e contains no  code, is a virus, etc.). "This submission should be removed  because: 
Report it! 	Your Vote &What do you think of this code (in the Beginner category)? &(The code with your highest vote will  win this month's coding contest!) 	Excellent Good Average Below Average Poor Rate It! ( See voting log ... ) Other User Comments 4/1/2009 12:43:45 AM : Rohit Superb code. Plz keep posting. $(If this comment was disrespectful,  please 	report it .) Add Your Feedback #Your feedback will be posted below  !and an email sent to the author.  $Please remember that the author was  'kind enough to share this with you, so  any criticisms must be stated  (politely, or they will be deleted. (For  feedback not related to this  particular code, please 
click here 	instead.) To post feedback, first please login . Search: Search !Newest postings for Visual Basic. Dynamic Block  Allocation algorithm  (experiments and  implementation) By BioMeg on 1/30 ( Screen Shot ) Ascii Art - One Line  Ascii Art Software  Program By Dave Murray on  1/30 ( Screen Shot ) Show sticky subform  aligned to right By Eddie Bole on 1/30 ( Screen Shot ) Previous Spacecraft  Project vb6 and dx  transparence By Epiktet on 1/29 ( Screen Shot ) Racetrack 3D By European good man  on 1/29 ( Screen Shot ) Demo landscape 3D By European good man  on 1/29 ( Screen Shot ) XML Functions By Mr.305 on 1/29 ( Screen Shot ) Console  Converter(Forme ly  Console Functions) By Mr.305 on 1/29 ( Screen Shot ) Win32API Texts ( Defintly Last Update) By Mr.305 on 1/29 DX Light Filtr to Picture (quasi flare) By Epiktet on 1/29 ( Screen Shot ) Warrior's Blade II - A  REAL RPG By European good man  on 1/28 ( Screen Shot ) Balancing Vibration  
Calculator By Fabian Alaniz on  1/27 ( Screen Shot ) DM Text Analyzer v1.0.1 By DreamVB on 1/27 ( Screen Shot ) 
Elite Type By likith sai on 1/27 ( Screen Shot ) Web Browser By likith sai on 1/27 ( Screen Shot ) Get Album Art From  Windows Media Player  (OCX) By likith sai on 1/27 ( Screen Shot ) DrakeCluster By Epiktet on 1/26 ( Screen Shot ) Spigot algorithm for PI  (VB6 - 2014) By Captain Picard on  1/26 ( Screen Shot ) Longest Common  Substring - 2014 By Captain Picard on  1/26 ( Screen Shot ) Antialias Points and  Lines on picbox By Eddie Bole on 1/25 ( Screen Shot ) LineDraw using arrays  
and ZOrder By Eddie Bole on 1/25 ( Screen Shot ) Text to PDF converter By likith sai on 1/25 ( Screen Shot ) PDF To Text By DreamVB on 1/25 Bring back Classic Visual Basic, an improved  version of VB6 (update  - 3,200 votes on MS  site) By Captain Picard on  1/25 ( Screen Shot ) Make Trail V2.0 By Captain Picard on  1/25 ( Screen Shot ) Add this ticker to my site Daily code email next                  "/RentACoder/images/placeholder.gif   &/vb/2010Redesign/images/nav1-right.png   -/vb/2010Redesign/images/nav1-right-active.png   /vb/images/vbiconbg2.gif   =http://m-static.ak.fbcdn.net/rsrc.php/v2/yK/r/uGFy9lAuh_c.png   U/images/IconExperience2011/v_collection/v_collection_png/16x16/plain/mail_forward.png   9/Upload_PSC/AuthorPhotos/AUTHOR_PHOTO2008112426376740.gif   B/images/IconExperience/ApplicationBasics/16x16/shadow/document.png   */vb/2010Redesign/images/bg_sidebar-box.gif   ./vb/2010Redesign/images/bg_marquee-topmask.png   ./vb/2010Redesign/images/bg_marquee-botmask.png   /vb/images/ScreenShotIcon.gif   A/images/IconExperience/ApplicationBasics/16x16/shadow/refresh.png   >/images/IconExperience/ApplicationBasics/16x16/shadow/add2.png          Y‰PNG

   IHDR         Ø¿Å¯   bKGD  ª#2   IDAT×cüÏÀÀÀÄÀÀÀ  	÷=Pa    IEND®B`‚   z‰PNG

   IHDR         ä÷®   PLTE7:=ûŸ\§   IDATc 9``   d ;BĞ   tEXtSoftware Adobe ImageReadyqÉe<    IEND®B`‚   ¤‰PNG

   IHDR         ŞÕeí   bKGD ÿ ÿ ÿ ½§“   4IDATHÇc|pïÁAxL,^y&R$ŒJøLCy‡Œ÷G5tÔĞQCG¥ƒ¡ Ïßí@ù   tEXtSoftware Adobe ImageReadyqÉe<    IEND®B`‚   ½‰PNG

   IHDR   ã      [ntÃ   *PLTEÿÿÿÁĞ×ûüüÎÓ×öö÷ÓÜàÓÛßĞÙİÚàãöõöÊÏÔññòÍÑÖÿÿÿXEŞR   tRNSÿÿÿÿÿÿÿÿÿÿÿÿÿ EÀÜÈ   bKGD ˆH   'IDATc¤7` p—ŞàÂ¨•£VZ9jå¨•£V1+ï^  ä-¼u}"    IEND®B`‚  H‰PNG

   IHDR   ¾   
   =ñÌ   ?PLTEğïğğïğğïğğïğğïğğïğğïğğïğğïğğïğğïğğïğğïğğïğğïğğïğğïğğïğğïğğïğÿÿÿ£øª   tRNS&'AB_`€Ÿ ½¾ØÙîïş—öí*   bKGD’ßÉ5  sIDATN[‚ƒ ,U*Ep÷şw]$OĞö£)%É0áïûú½¿7ù¢à8êQk=V_z‡W>Œx»V]+ûTìµò®*‹¸GUSq%	kaç*ûng<ˆ–"x‘­ìeRŠCaVãë«ŞêvÉŸ>dŸÒ4¢ä×«®lú¯˜ò³ê22³3İ¯7ÚdL0TV	’Œ[ÚRÚ†Jı·¥Òû]¥O@š ›™4v–§7æ¼B|Æg;±ß\Qi8	%"‡Ş,;qåŒˆIı‡ÈiOòêzÒšŸíÖ=`mµ¬«ic-×'-ò²ÜÊûÃ²N¤åŞxøTháó¶©Â„Û†Çî“úZlÊ"4w	lÂğ¡mƒŸV¾İÖ‰g2Ã,¼p¼SÙÍ[¢…¼¢ŞK¾g­ùİ Àk§uÇô' æp?¡Î¨„Ø­:ÅÚsG4•ãœ&8–’Ì	ãşÆFÙãÊj   tEXtSoftware Adobe ImageReadyqÉe<    IEND®B`‚  I‰PNG

   IHDR   ¾   
   =ñÌ   ?PLTEğïğğïğğïğğïğğïğğïğğïğğïğğïğğïğğïğğïğğïğğïğğïğğïğğïğğïğğïğğïğÿÿÿ£øª   tRNS&'AB_`€Ÿ ½¾ØÙîïş—öí*   bKGD’ßÉ5  tIDATN‹’ƒ U+Eğüÿ=$OĞvæšR’,û ¸zjw<A[qjùêŒJˆÍªQ¬1wdAQ9Îi‚c)Éœ0ü©åëñØmXy&3ÌÂÇ{¡1•İ¼%ZÈ+ê½ä{ÖšOÑÂ#<çÿlC…¶uÍ&ôµØDh<îØ8„îCës­iMëkº>Yh’—éVŞ¦y M÷ÆcÄ§BXË³¥İ\¢ÒpÊ‚z³<ìÄQ”3Lj<,œö$¯¦'©ùÙnÍÖ¸Æ¸vÛo¤÷»ŠŸ€8@63jì(oÌy…ôzÕÃ•ì‚@»ÓS~R]BfRb¢ûÕñz›„	†Ê
Ã1A’‘`ãÊÛfg<ˆæ,x–-oyPŠCfVådë«ŞêvÉ>dÒ4¢ì{ÙK)gÃjKëáĞğÂ‡qwa—¢kaŸ‚½ŞÕAew/j*®$a-ß×ïíø½É¿ë8ş 9îFÙ1°Vå   tEXtSoftware Adobe ImageReadyqÉe<    IEND®B`‚  @‰PNG

   IHDR         l"   BPLTEÿÿÿ     f  ™ ™Ì ÌÕ ÿÿ æR™™_]_aO f™f™ Ì™™f™™Ì™ÌÙ¨¡™Ì™ÙÓÓĞİ îÿ ÿÿÿÿĞêW   tRNS @æØf   bKGDÿ-Ş   ŸIDATeÃ „‰?³ºN‘Ú÷Õ´uM÷abrÜA‘üCÄô$›È¥|Jáã‘@©$Îûä½3Š9bJiUĞ)æd·¡˜Sò‡qŒŞ[ˆáp"qåâ/îİºmí&Úv”‹—xnWÍLáŠïµW}•Qğ,W÷D.'N°+è‰›Éùd9¿™{w´s¾İŠ;J¤Kãe^’Û,f"ú
1‡7    IEND®B`‚  ×‰PNG

   IHDR         (-S   gAMA  ±üa   	pHYs    d_‘   iPLTE    "9    9 'P ;   TM¯K– 6|	{æ A|nËe¹_Ê,k¼,•õ,„×+yÌH•Ö‰ê,•õ<¤ÿO®ÿo¸û|Âÿ”Ëÿ§×ÿºâÿÇåÿåóÿÿÿÿ[ğ¬   tRNS 	,rˆ‰‹’•Ÿ¢©¼½ÑããïõùşõÀ.İ   bKGD"]e\¬   œIDATMa‚ EiB9Ê†ÅLÁıÿ?™`Z÷ÛîÎy{S"fgÔ—î5N!Ò`sÔY}÷a¦¦ï«!½n´‚ÂU@ÅD‘\sºS™ÑpJyQ4OOS^rnWáŞKN³m7E,)y}®9—r—³HĞp ¼8‰\âÖÂ])¶Ñì-4…0£Vcz²íş
ü±¿û›•ú Á1	]m)   +tEXtCreation Time Do 14 Nov 2002 23:31:44 +0100„PH    IEND®B`‚  `‰PNG

   IHDR         íİâR   gAMA  ±üa   	pHYs    d_‘   -PLTE      qŒ	Œ	0ª#]Ä3iÏ;tÚE|áM}ÜT…æY’ìl¨öÿÿÿİ0   tRNS :ÔÖ‹q&   bKGDo½0O   vIDATc``0d Û3‹ ŒÓM £ ˆ!(À`ll»»YÉH!öîİİ§—2ÄœÙ½³£½ÈØ½{FG9İÑÙÑ^–"È`¬dİQ¤¤$È (¨İ$(bX—ƒŒ‚V † Ğl'ˆ]‚ 	ƒ X’ ;×Ëë   *tEXtCreation Time Mi 1 Okt 2003 00:09:14 +0100×˜$¹    IEND®B`‚   f‰PNG

   IHDR   	      ®KV³   PLTEÿÿÿ–/•>%Hš   tRNS @æØf   IDATxœc`  06   Á ‚£,kû    IEND®B`‚  6‰PNG

   IHDR         íİâR   gAMA  ±üa   	pHYs  
ğ  
ğB¬4˜   !PLTE      ALaj{šj{šv‡ª °Ğ¹ÃÜÈÎá÷ûıÿÿÿv´»R   tRNS :z²jĞE    bKGD
hĞôV   WIDATc`CÖ™3gN„2ZDAŒĞ@cæL "Ñåå•0GAÑéå  cFyyY%T¤,™!gÀt±¸€ ĞFA0€1 —²(_¸ ¿   +tEXtCreation Time Mo 15 Aug 2005 11:31:14 +0100Ùşz    IEND®B`‚  
‰PNG

   IHDR   r   J   •Ú   !PLTEÿÿÿ    €  ©© ÿ € €€€ €€€ËËËÿ ÿÿÿ ¦ÃïÖ   tRNS @æØf   bKGDÿ-Ş  ŠIDATíÑ=nƒ@àÙH	”<"»ùœ   HICáÊTl‰+ö.rœ2Ã‚-+‘¢İ)\DLˆOo~h­µş,D2g¤òŠ$€8…r³i,š4.Š7¤©E‘f¢Ğ§¢Èä¡Â“ò¤ï"HÄÛ9{R¡¦E–ÛqkÑ%_Mô2Ö€Drä¶áĞ<Ï=±:Ö,ë×Ü–V¦HÍÆ7V1¬cÌpÃp?'4KÓZ9ai–Zbİ"õl¯û(C3ç}ädúĞPhñƒ$›éiÆ²'›f_B-–®™
KQ˜ØQÙºÉ ›¼˜Ä9ƒù’¦­Jí%{ºÿîªK™ôä%ÏÀ.DûqÙpËsöd¬Ü|B(÷*Ø‘ÃiÕ‘ƒçn÷e5KÍ3wİÉAÀù^g©øú—$'9İâ‡läî*Ëä&vh+Ÿyµ7yr»ÊÙJ…ĞÆôüÜE÷´’ˆø“t‰$¥m‡®øä$±ÔõÃıóZk­õ¿‹èÊ$IÁ    IEND®B`‚  Í‰PNG

   IHDR         (-S   xPLTE      &7 x{ƒMPT\bgknq}‚ˆŒ“£¨"MD
"M1i7l&7‚=ƒ$H‹2U®5[l_\bgf…_knqrİL}‚ˆîZŒ“òl”£š£¨§÷‹®²¶º½Â¾ÁÄÏÑÔÚİäİáççéî÷øüÿÿÿ€_šÄ   tRNS ]j¦µêõùúŞrÅØ   bKGD'-¨#   ´IDATÍÂ0ƒŸªL'ŞÿÕ8hc[Ûà’Sl}±#YˆØ†>rhÑê[•ÃÕ; ¿ßFœ$ZÀ³”{jˆ˜Ì†nTjµ:eĞˆğ/oT–u4oÌC5”%§Æ¢^/±ÎéğIÒf¶æ(O¼i¸ä±ˆ§œ•TÀÀ4Ÿ“²Umq¾º… ñ©‹)ê'ò¶©˜Â$\0¥í|û}ÄÉîh?ÁòSÊzm#   +tEXtCopyright Copyright © 2008-2011 INCORS GmbH!O    IEND®B`‚  ‰PNG

   IHDR   ê   Ö   èòîª   `PLTE&#)/1YEG•F]¤JŠ¹L17Z°ï[X^_]§c»ıea«tÃş†zÏ‘‚~™ÎŸÕü¢Ÿ´¯ÖµX?Â½İÆÅÚÑÏæÒ5íâæî¬õÆ»üƒIş=şU+şİÕşşşzæ  kIDATİÑ‹bãª®`	§ÇuŒ¡$3¿ÿ[n	|¿¤NêtÖ9ZkRÛ O?Ôÿ¦‚wÖ¥¤DàB”R)c¬óáEGşj dCœ²Ø…ÿÔàŒÂV%?GE·”±!üÇ¨á¡¼‘	I°?‹•Ä‰[Xç÷©6íâEİ^p9ß<«í^´šÊoË‰ëÌ¡Ûpmå}Ølàª4hœÁúÚkG^ó¯Yf¥×h¹ÒL÷Û¬^qóæßX¿©ÒÕĞÃE¥y¨;¤;¦VMS6¤ô|Ğñ„øGsÈñŞ¶ïkÛüİ¨Á9tşı»÷áÊ„emõİl©”i¤úÊWuO¥ìl´µT¯Cûş—PÉĞ?w«ãFğ0ZQD­û–vLuÜ?ı«œMéV|ç}Å&ÛÅg=/où–÷îş)N}jwÚˆÍ“öØYª^SÛU©ÁVLÔTô—/©Ò1aZ¦~ÿª¡fåér¸ŸŒEQ%kŸÆÎRQa«D³ü¼·qÿø,ÇjCàğÚ]ªßéJ¸m²HÉßÀÎRMiZ_ßR½u‰Jq†‡©N>é@;Â~~€ÈŠˆ­Â.R½f*9¬Ôª¥ÖÎ>J5øh¤­õw_Iû)›'¬{»HD¯Ù<N5ú¢î"`1+òˆõcgÔ[×Í¿2R]¤Z†Y­[©@>%R	ÛK¹¥ÖÕ£ÖÕk›˜q!R÷‰İÑ:¤ºu*KÿüÙ‡Úa1OXê+|/UË)Ùf%Ff­ÕªSízªŸÍt‘ÚY3¶ZÛ‡¬CjğUsUU*?P[µn'âüÒŞŸÎt™ÊÖ?Ÿ Ú`±¨¡§²0pûZÏ©n@mˆvéÄ  ?ÿìf¥•¿É*[+ë¶c‡TßRmXéèJWTª×ñ g—¶6 Iú÷ïÖ´SkÅÖZm¶Â0TocéôÇëø£Ktá+•ßdfEGy«C• ûö¾oı3Û'Y³h-µİjP=Åå¸|ü}ºvi¡¹ *%à«ªò‹;Û*õû,udm7i¬ØZ‹ÍÖµ­Ê}Q³ÍÙÆ‹ª	õyi„µÒÉ.C«Şf…A³nsMYqNãÅ€ßµÕrÍ–É
ê!ë€ê§’ÔZ;:ĞE*‡òMêZ=œëˆZ=OµZ[ïKğµÔ±µ¨ì©Úañ[¦†•¤¿ÿüy¡5Ô\ (W›jŸÕ„JVz1ü$õï_²B²æd.\ØêG©ú6Út×~=å;|qªU•2Íµöa*1¸,mÇ÷Áë*­øªÿ~¼±Cx1õ÷ï¿$€*²şÒºÚ¶¯ëÚ;ººMÓ­m$Qÿn ~"ÈÏoX1Çm¡í}ëË¨µ™¨ïKJ>+} I3¥ŒÛ¨„X£†ß°cj oªÕO€±›†úù)©>gùIÊàóIëß8*,r<2Tv;¢®”·VÓ–Š¨¶¥VZ[ë×6–õ3¶ÂU´şùŸ¦Òæ’„ïB(¥¨»¯¨õ:ÕyÏÃ²ô‡^s¾¡:­«õz‹ ÛX?%t…ŸSê7Rmb¥Y¥v«³Q}µŠí©é]w5PM¥•VQÅít‘¦¹$H¤÷Ö<ŸŸŸw©b¢yK[6PïÄºJåéCª16x­ó+÷#GÒq®Ÿ-~ÅJƒ ù¹F¥x­ô®†íù-Ô0¢Fiem5²ouQˆÆğ÷¬Z?eóßEk3%yW
YÑ•v~5l¡mj¨lKk;šf”6¨Ï	µï<6Š©ñ%ë'GÊã˜çú—?àG´EŞSK½ë€ºk5 zÛR-ñh[ï˜ªéºßÈé’ÍëŒÚtUØÈ)¤¿óPeúşsîü›¥©…¶+Ö!•­ÕW©’¬¡š„´ #Õù~›j´r“±%N[*Mà“WQ]o†Ÿ%ë‘íÈÈ/¶ß;ú‡T¶n ¿ê"5å×§ÚÍ²“&+9dÇ˜JÊØ¨¹Q+	ÛVü eœLTşşİ¼ò'-~?¥–z9ÖuÍz—Rº=58]vçæ"ººX>»`A®·T&ä³Á6œ.V*~ö'şÄµäDuI_O¨Åpì«T¶’å1jğ•µÕb¨\"âH’ªÍÍ­/«x…ş$Ú™ø}Oâ?q‡ä4İ  ‹bbİ@MÖjN¥ÒŞSx6]Û¶Ò'Ş‡.Ô±”ƒí“ìİmXF&Q7’–‰'cd÷Q7—Á§3j©—bR“uVP²•ñ:2«ª
é›Z¯ËbZ¹Hm"QÔé”V·qÙ“œ¥JÙ›ö	í NfüáiF¥Xıj‹&Û%¼KyVK£«ı4Ô›+@ã8ÊË¯×mVÎœ”ÄTR)cšä;©lW†¥@³X]ØBå|Ô¶Ü*JSt”l›Ö~>»à¥TdÓÛåû6·medŸóuüèz]¦.ÆºDXÖ²·4B)Óg7Ïu%ÔHUmƒÅm«MĞ«‚A©ÔBWa5aÇ•–Gš]Øj}Œ—ßÚ-‘âP
è¶Rç±®QÇÚ~m(ÍiÃ°5Ôàzë­,8}•0)5§Ê%ê¼µ{Ô¥"J©¹h/*ÛÌ.|j‘Z¼ü¢¶åP§p*ÅEª*¶Ä
=¢éÛÙxÅ÷ÖºokWÅÇT:şúôšöÍëT1’].Š¿Üt
Eyr·9©óX;ªuŞY¾ĞÊÖÖÇ¿º™­ø.x§ãƒÈã?ŞÆ—t ñıš´ ††M^~ätª¦Î_¿/ÓÙÜ§ú5j \b|éÎ6aë4›x[ùĞĞ+k«ø2¥:Ğ”<=q«ÔÁŒš¼œ`”sZm/œEŠêDÎËœz‰ÔlñH]…ûT_¨uåzªwUU·Ôh¶ü:QkkSõ5÷y¹H@·B58ŒS"órEŸ:‰uFu¡¥&sûkyP!ĞE¼ªÛTëZë»Trâºœ8h7ÌÚÄÖoFõPù+:¯sfKu y±%Ö5|	¶E6ò´šÊé´àšTé‡¨Õ*U€šµù‹ÖÌªÌår»ª>ÏÓïUåê8Ö%j`ZKMHïj^NÔTqÁÙ–Zû{Ôá4íór‘Ò©aÖF]8ë§:İg¶T³J-­w©Ô4_ò5¿˜&Sù:ø)Õñ :j|íÕÌûü…§QÖWy’)OvŞ¾®DÅ*ÅzÊÿØ©uÇhZ¾³ºr–çEm7Q3@w[ˆu2 ¿Nu©x¨f©NTæKªÿ‚jc~Íº³ÍSÏ9FjÔQ¤z•šçyÖ—RJ ¶ı¥R±$ğ¤ÿSa¤J\(X(u»O-tÖ©¶âèêÅÔÀTZñ=•ÆAÿV¨Ùbg»—¤øÃ]ê0Ö15„Š…¨AëšV#ªÓñ6£›>ÕŸ¡R¡”w¨¥uËTÊËêfn’jZ(7ÒÚÁ ş•KÅz¬a™Ê)5¼nÖ£Ò»5]ÔjRK-Ä†êW©vj©*şi?Ğv0€˜~GõôûŸ£–Ö­S9Pjºµø˜£mc³ÚuTÏnßQ­Õ¡£fÏ¶ã©pøÆAl§R¬aNµ—¶ıGÿk¾ãö›‡–b£ÇNÇù1-ğ{şÑ’Öšµíms˜²Ã!şë{ØTúöNu>ŸßSS†°÷DÅ5Ï³<_¤ú5ø®†×¡{êø¬^xş:§i[İQE×ØñÃ‡p>«‹EL©ğFÏt¢}0¦â”š«¸ŠlnµnFı^ù˜§îSU]LGkøvşÖ…8•‚ ÇqÇó*õmğ-JI?ÑÕœjÃ¾TgËñ	y«8|„Yçï¢ï¥ú5€à{CÏf0“Ã¡§JlVÆ8g0ŸRµõ»RƒµÓ#D×»Ÿt~hûCùëôûB5´Ç3½ï£ÊúY¼‰fD‘|¿x“Ëõæ$ˆ9ÕíLÕÓ#ºæg?5fªN'séJc=ŸÏcê{ëá-ı•DT§ßWG¿Í.×›YˆÕÚ]©~N-°ëıãcÜø;A^oƒ2ƒX³ãR5YBöŞ\(Tîv½\/½^+‚šÇ6SCğÎùpïgËUµ½‹wnõmØø"1C«Xß­ïˆÙû¡ DÖ5cñ5í#æT¿ŒR’Î@©ìúKÖÎ¤EÃŞßß=á3Yì©H£y_
Vˆ·wìBM¼k·Ç·¨äÄAnªçÔ>Ö”ÓÛáğöoY–1V¹Şz$â[c-Jˆìí]4½¨8©ëe0.²^à¬k¿¦ZnQ¤B0k/úEj.º!½5İÆÊ™Ü´XL¬ooo­–¦C_ñgí–åmV×ËÕ,RÃÔ`hĞ(²¢,sŠ!»Cu¶\ Yßüá½Áf”íKcŒ¦©ÓÀgGC`ú“4;¼wR”`©K©jëïSƒŠĞ,ËK­:Ğ­Æo‹Åƒ ŞRBMNoí£k–^c-õÀfŠÛ§
Ôm…*¦²”¡\¥.™*ÃÚ»kÔ\›?4LŠKtMÃQC+Š·ø.	ßˆù~|$B½]©yiİ]ªé¥œkNTµª·ºX±"ŒÛ§=…,¢ö:Ê5jÉõvL%,I‰z“©ÖŞ£:ì¥k!˜Ç©E6¶ÎJ›5³×i:b4ZÂég]¨7z´Dw¨
0SìÕ­S¿°C]´.|4^û«…jóyúuj¢bX£Z[¬W¶Ú1ÂB:N}mU®’êziêv£„©~jF¡µ Ÿ£Š•~¥¤s›×—ÁæCÎkK¥€±ĞÂ]ª…z TÔš4|AUFÎ•
a)ÔXj‹´ÇCIš¸pM.†Z”Ö­RÃ˜šë2C0ëT½.¥™›b¥”¨–C‚,F«ÊŞ&T Ùìs‚ÅP‹ÂÚuªQ¢º5ª¿G¥¹9g†İSÛæª@ŞVëjäè}úy<—ÉL"•^P§x€ÈW¨a#µÔ¥ ¢*šQjË™“¢`P*ehÉá4TsİÒtF\?›R¯P4¯áŠ´ĞPª~Š*ÆÙ9×¶{š†z2³l3ætRêt2æâÂOÔ<WB ÙZ›©¹Ö9E°Ju¶¼GU·Å’€›;Is{¼jñEiëW©jH-t™¸Uje‹{ÔÓr—•‰Q9£¤ºŞ¦ß Ö
°§–º€a•jïQÖÒr PJ‰ˆOEš¨§oRÍ˜JÙ¨Uix’JÁ*‰‘û$”©·ˆoQ@'Íu™SÃ/ R²Ös¹İ¾AU¨¥u«Ô€ Zj¡ËĞİ¡ê§©ß­mÔüµV€-µÔ¥ şS‹ÂVëTĞSsêYªø‚z¹r½8ÕÂÚuj@Išë2£hê§©ê‹f/—ëí_Rk˜¨…. }õö|¤‰*¿Mµm¬¥Î‰¥f€ß±Ü-g”Dø65¨–Z(™úi*‚y!“ë»ÔÚ °ô KîöÕß¥4§W1ÅÁªïSk	HÔ\|‡Ê_ïé4'™Rç~ªŠ±1U´ëÔpŸZ ÈıœMœÄ|öñHîç¨!„öÒ ¢Ê²`«{šJ_«=˜Î¨–Ùıñ†¼’?F´U,c™khZyÆU@=M-ì`íapöÇ{\G‘o¦wj
•³d‘¥*4wk»¸İƒTşú´Ó‡ñÙÇsjı.vHuŠwBùK’feCÍJ#¨ææQjş­\’É9arÇó9xÃoˆìµj¨ã‹e©uYPğEŞQs]
@ÛH§~Çj$7CyÖKEÔãñãì½Á;ØJ‘ŠB÷U––ÊšÑ%ÅÊ,Ãç>L-
ÚPš'Åµ<Ô¤Éb–/QKë"Õ0+æÉËô‡­8 %áe§BÔ0¡Úû‘Òä„à>³º*Ov©çëw‡j¡…†ê,óÎ•—:'Ùš3ƒ§½¨ié·Pó<Ï”ˆĞ—´ûÚRé§Éöìmúh–¬NTÅÒC6¬rJÍè’B‘$å'î.5O1öF”J)c}§ë¦@ù(ÆÕ_”g*ıi¢=ŸVäS*§y‘Í
x ımÁ+ÈR6ÛñyUKmbì„$¢ó³	’w@óµôÄĞ¯m©Í[öƒ°|²Z¢Ì¡«Šr¸"xƒ,ËË‚™¤ª‹QŒ$¤õã^-¢3Èaİuš˜‹rõ–
Ç£ïØm´ód;ªX’‚ÈË)Ò¥¨TïŒQJö12ÑX–9
µç™ßÁF¨4Û Dıè©t×Fû°*7ŠÃÊfRØÅhEªuI—Ê;KFÙçHÄã¢±ş|>E‘L˜e(m¦L¨7×ù¨¼ßF;N¶¡ZdEoŠíÊn6¿R´Ìy­SŒÎ¯5‘éğw ©ÊÅ6N³h¤eeëGê|Ìø£·‰¶IVE¬MÔÚğ
®>&ŒŞÁ8Ò²84¡sÆX2®"ÏŒLJ®s	Èë
Í>µa¦PC¨¤¾ÉØiûhÓ±Zñƒ,RëHM/ÕĞZ”E{	`î442N÷ƒn½s$Q‰jâ[f¬M‰úúÑ:Ï´%D€T¶ë+vğ¡ã!Yi]C%¬IXÊ6‹‰¹cì¡W¸uäDé½³F)Éû³1ÈD¥+û'KPîV¹º~Šj óLğ	8ĞÏ	KËJû–¢UQ–º¯2Ãq°maÛm_ã$¤w„Ä4DŞŸ)Ñö³‰Ñ‚”ÏB{jL'ek\h›¢VÎŒE5¨˜A‹¢Œ™–É\ ¥¿DU½qŠä`ÉÊ†ˆBd¹ ÅÇ9Œâvôµ‹Úg¡t>QBÛ.šl•iöçÎ>Î†FÉ•ÙÓôòhÍa)W‘¨ddú£”½ReyìÁğGe ÙJÓGK¸Pƒê²"Ë"6OZi»Ô)Xwâ`‰j–8Éšq»TœÒ‘eÑU†ƒ3.Íl½K15H¢"v§QƒÀÇ¤IöÃ;
Ö ÍdAšeD-¸ãêû0Éi”¢‹²/jøEµ5||ÔA‘ `8XÂšz,¿ƒ„…l™ZŠåG´üvüXrL%›‚SíøUö±•6Ô—c?K¢yÆLÅ%Ï¡¤×—óÎtƒTØc”Åjaš2×Ğ© ı~T“šè¡ÔÚ&öFÊĞ*g·"%ªê¢DTÊ­‹»•A¢	v_êù#Ä	×Nšú4íãVª8\	v, R#RÒ…(°_P_Dh:Û™ŠÔ”ˆ‰rë¨|i”Ÿµ¢GC¬‰"Ö¤8R’IYo¡æiÊˆjã ÂNÔ£¯cZLÍUì]Ù´¹ÿˆÒp¢LÉuPqÊ"UbŞ·
“F+{—š!Úø¤b;õ~ÔÀTAóÆxrİ£ãñÃ×^ÅL™Jù*©S´b3ÕßUµôËÇ™¨©’ÍbëÊ´5‘ÖV¦Ã˜ZÛhc¸Ù¡(Ëp-V@÷U´!šxádóˆJ³å‰äC=ˆ”¥[i¢ÒŠÓì1eI q¬ƒ ;9ĞÚ;ÒÛUs±”ê£¡Ò<ñÜ#¥'X¢í:éÈ•—y†İR^dtG‰7÷]ë]U÷¨4š0¦îXg¢ğÖXÏ,¥V(íGT3‘R¬Ğ²£;VJAMôV¯SÈ&|»;õÌícìJÙÎG–R~²6Œ¨8•
‘ó,©rA7Æ(ŒX‘‰5Ü£"œš ºWP]LE ¾“0A)REùå¥íNŒÔĞØK™ŸS§Ú„¤ôš7*F‹mLª]•æ &½eı+¨ŞÇimÚú)u’*}Ö-ñµj?M¶ar¢_Ul¾6 Ã‹¨Ü,Ùyüğµ£LsÒ6Œ¨µX…ÀàŠ03è08#Ü,ÖUª ZªÚê™*#U ¾ÇLC)•­&TK0ÑFœRĞÖš\ŞÌ©vEš#˜æ%joiÎqã˜ÀSß5ÅÃµõõ˜J#ô6E’`””(•2Û‚ğk±f€Í\‚êĞ;V¢"S²ãñıĞEÊÔ0¥ÖÁ¥ˆÆ6×<Á‡°õÄUª Ùî'5ìN5‰* S¤ª=ÜÚzFıvg—©ª†Ê×)T{R}¤B¢‚DÊ¡úP×bÍÚÉ:D_ıÊ.3;GjFNÊ·?\Ûğ
jX¦f€íq/u»Æš¨¢5ïÏ.‡¡îH­İ¢U€j©$ÿPÉ°/5È:È”B}Õ/QsSwTJS‘ÑíLU‰šQºƒÃu^CÎÎ©ô,ÕQåÎÔº¥
ÀµP÷¤.Æ*@†¾ó*ªl¨¨áUÔP-QU÷™j"5ìOM±"ˆ•Pw¥.Äš#Øn¦C¢ª¥µ àX1_u_j˜Q3Àî<¯ƒ¢¦ìŞÔ ©™-‡º/u« 5˜¼d¶WÒÔ»S”¹b9Ô©ÓXs„e@ÅÃC¨÷/	ŠËX‹9]Z÷Zê$ÖĞ©õËJµaæBä)T_¿’:U€ƒnÌP›"ix-µÇ*@u†—Rà„:•îNÕ€š# ê
Aª—©jıjê(Ö~²ò!µ
¯§§Ë.Õ4q¯Š6Øü~¨ûSG±6â—†™³*µ?A3«x)UÌ©‹¡¾€Z‡jLUğÚÊ¤ág¨õ8Ö_LÅªİ’ô%ÔàõÀ*^,Ìg¡Ö?EÅšÁËKM¥áç¨k¯§b-µ[–¾ˆ¼n¬àgc¥PëŸ¤ÖÁé’V?!IÃÏRko9Ö„
Y'Õ«Ò—Q[sñ3RÀ<IKí|ıÓT²jıSR Õ„j×C}•¬ÅæNÅâPP<ë]é©µÃíªÅäÛc,Õ÷¤¯LU>Ğg¾4U<kö•ô…Tµ=’¼XBa^dÄZjwWú:ªÁB-
µ¸œoß
çëBµÛ›¤ôQY±öê6®ş'Ôğ@ê*M`û6 ş	5(x,ÔÔÊîldşõiC*
œ¬gqõ‘0ü<ÕÀÃ¡ÎòkÃÆöR?N5øD¨E†‹ëâ½Àü0Õ="Å¬¥Nòk×³G¨è~”‘ö¡…5½2/J†¤õHk÷Ô|yâ¡ıÔºş­tê•-Oàë2õQ”b6¤fƒyñd¬`ˆjàùP‹<6=şG¨J!Qûü†¡'°Í~€jñ;¡E¶ü@<8@õzª“ö”M¨]~jy[Ë¼šêÌtj—æãeÜÅº5<šé,TŠuyâÑÑ½’|;Ô…ÓäÇŠæuÔÇ¤(UQèrNÍ3ª<Ÿ.gBà·s…Ÿ–"*cCŞZ«u±¹ò\=Ä•şETµ1Kcºiï»Q[jM³±F©­^é^B5›˜Î‡ÑW)Zâ–_8ut¦Ïƒ3JnâÊğªùZ–¿l´œny/M;S xñK¯ò»SÍú¡¨Ö™½ÖYÛ‚ÇÕ¬{¿°…·_Æ«ÂÎTs/Ì°mà;ï¸Ü"³ÿÌ(u‡+Ã®Ô…LYiÃÃ;
8–KÂ¶A·¯r;RN™†Â¬¶qÍb¼ƒ\aÇL9LÿÓÊÑØâE·Õb¯ü·Ì6_o&^´»Pí‰¨Nÿ	åÀ†ù¢Ùê”RÆı§”C°5*Í÷©ş?ËäË`²Öõÿ úóH”È0    IEND®B`‚   ç‰PNG

   IHDR         µAåZ   bKGD ÿ‡Ì¿    IDATÓu=
Â@…¿Y–hB
S	"Xè­õ>¹Ar[µ0Á0d,B4»êkæığ†a‡ÇãÑ£($Me?ĞT$}ù÷a¹pá­<meuØà Ÿ–<s–ffäQHÎÜ®#¯T`1ŠI(…¤tt’Jñ<Gá®ÜÏÖ şãÙ${ŒZvôüCïĞ¶®Õ´5*Áã•HğÃã_;Fr¨l–K    IEND®B`‚                    @   5/vb/scripts/ShowCode.asp?txtCodeId=71909&lngWId=1????             
   page 1 0  (   
   page 2 1      	   <   ,http://www.facebook.com/plugins/like/connect utf-8                                         n   ^/vb/scripts/ReportBadItem.asp?lngWId=1&txtCodeDescription=MOUSE+SHOOTING+GAME+IN+TURBO+C%2B%2B utf-8                                 @   0/vb/scripts/voting/VoteOnCodeRating.asp?lngWId=1 utf-8                                                 ‚   r/vb/scripts/includes/TranslateFormVarsToURLString.asp?txtURL=%2Fvb%2Fscripts%2FBrowseCategoryOrSearchResults%2Easp utf-8              
   Choose language â€¦        
   .Net 10      
   ASP / VbScript 4      
   C / C++ 3      
   Cold Fusion 9      
   Delphi 7      
   Java 2      
   
Javascript 14      
   Perl 6      
   PHP 8      
   SQL 5      
   Visual Basic 1  (          @   5/vb/scripts/ShowCode.asp?txtCodeId=71909&lngWId=1????             
   page 1 0  (   
   page 2 1              ÿÿÿÿ       A V p a J E f wÿÿÿÿ      R h t t p : / / w w w . P l a n e t - S o u r c e - C o d e . c o m / v b / s c r i p t s / S h o w C o d e . a s p ? t x t C o d e I d = 7 1 9 0 9 & l n g W I d = 1ÿÿÿÿ       l i k eÿÿÿÿ       ÿÿÿÿ      R h t t p : / / w w w . p l a n e t - s o u r c e - c o d e . c o m / v b / s c r i p t s / S h o w C o d e . a s p ? t x t C o d e I d = 7 1 9 0 9 & l n g W I d = 1ÿÿÿÿ       ÿÿÿÿ       ÿÿÿÿ       ÿÿÿÿ       ÿÿÿÿ       t r u eÿÿÿÿ       7 1 9 0 9ÿÿÿÿ        M O U S E   S H O O T I N G   G A M E   I N   T U R B O   C + +ÿÿÿÿ       v bÿÿÿÿ       ÿÿÿÿ      
 R e p o r t   i t !ÿÿÿÿ       7 1 9 0 9ÿÿÿÿ        M O U S E   S H O O T I N G   G A M E   I N   T U R B O   C + +ÿÿÿÿ       0ÿÿÿÿ       0ÿÿÿÿ       0ÿÿÿÿ       0ÿÿÿÿ       0ÿÿÿÿ       0ÿÿÿÿ       0ÿÿÿÿ       R a t e   I t !ÿÿÿÿ       ÿÿÿÿ       ÿÿÿÿ       ÿÿÿÿ        ÿÿÿÿ    !                                     "  ¯  E  Å  P  Û  f  V  $‘  $¯    ğ ğ ğ ğ ğ ğ ğ ğ ğ ğ ğ      "    –  €  ‹  ‹  ‹  ğ  ;      "            ÿÿ ÿ      ÿÿ ÿÿ    ÿÿ      ÿÿ ÿ W    ÿÿ ÿÿ    ÿÿ       A   8/vb/scripts/ShowCode.asp?txtCodeId=71909&lngWId=1??p=1??      ÿÿÿÿÿÿÿÿ        
       ÿÿ          	  p 1              Ÿ           Ÿÿÿ  „ÿÿÿ Êÿ  ÿÿ ÿ ” •ÿÿ ­ÿ  ÿÿ ÿ f gÿÿ ÿ  ÿÿ ÿ Q Rÿÿ jÿ  ÿÿ ¨ÿ  ÿÿ ÿ m nÿÿ †ÿ  ÿÿ ÿ Nÿÿ Xÿ ÿÿ ÿÿÿ zÿÿÿ ÿÿÿ hÿÿÿ ˜ÿÿÿ ÿ   ÿ  k ÿ   ÿÿ 'ÿ ¡ÿ ?ÿÿ   %  ÿ & R Vÿ ^ÿÿ •ÿÿ Ö Æ ë Æ Æÿ ÿÿÿ ÿÿ ” ÿ >ÿÿ Wÿÿ H p   Ÿ ÿÿ ÿÿ       ÿÿ ÿÿ ÿÿ    ÿÿ   #   * ÿÿ ÿÿ   * ÿÿ   #   * ÿÿ ÿÿ   * ÿÿ   E   F ÿÿ ÿÿ   F ÿÿ   E   F ÿÿ ÿÿ   F ÿÿ   a   b ÿÿ ÿÿ   b ÿÿ   a   b ÿÿ ÿÿ   b ÿÿ   a   b ÿÿ ÿÿ   b ÿÿ   }   ~ ÿÿ ÿÿ   ~ ÿÿ   }   ~ ÿÿ ÿÿ   ~ ÿÿ   ™   š ÿÿ ÿÿ   š ÿÿ   ™ ÿÿ ÿÿ   š ÿÿ   µ ÿÿ ÿÿ   ¶ ÿÿ ÿÿ ÿÿ   ¶ ÿÿ ÿÿ ÿÿ   Ë ÿÿ ÿÿ ÿÿ   Ë ÿÿ ÿÿ ÿÿ   Ë ÿÿ ÿÿ ÿÿ   à ÿÿ   ô   û   û ÿÿ   ü   ü   ÿÿ  &  ;  P ÿÿ ÿÿ  P ÿÿ  P ÿÿ  m ÿÿ ÿÿ  ¿  Ø  ü  ü    ÿÿ  ü  ü  ı ÿÿ   ÿÿ ÿÿ   ÿÿ ÿÿ    ü  ü  ü   ÿÿ  ! ÿÿ ÿÿ ÿÿ   ÿÿ ÿÿ  6  L ÿÿ  b ÿÿ ÿÿ  b ÿÿ ÿÿ  x  x   Ÿÿÿ ~ ÿÿÿ "ÿ ‘ ÿÿ mÿ Y ÿÿ ÿ c ÿÿ ?ÿ ‡ ÿÿ ÿ N ÿÿ *ÿ > ÿÿ ÿ ^ ÿÿ ÿ j ÿÿ Fÿ € ÿÿ @ÿ K ÿÿ 'ÿ Ÿÿÿ Gÿ êÿÿ Xÿÿÿ 9ÿÿÿ Fÿÿÿ ÿÿÿ #ÿÿÿ )ÿ ê ê êÿ d r Äÿ 
 ß ÿÿ wÿ ÿ rÿÿ æ Y -  ÿ  t <ÿ ,ÿÿ #ÿÿ 	   & &ÿ ÿÿÿ #ÿÿ W  ÿ ÿÿ [ÿÿ % 8   Ÿ ÿÿ ÿÿ       ÿÿ ÿÿ ÿÿ    ÿÿ   "    ÿÿ ÿÿ    ÿÿ   "    ÿÿ ÿÿ    ÿÿ       ÿÿ ÿÿ    ÿÿ       ÿÿ ÿÿ    ÿÿ       ÿÿ ÿÿ    ÿÿ       ÿÿ ÿÿ    ÿÿ       ÿÿ ÿÿ    ÿÿ       ÿÿ ÿÿ    ÿÿ       ÿÿ ÿÿ    ÿÿ       ÿÿ ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ   F ÿÿ ÿÿ    ÿÿ ÿÿ ÿÿ    ÿÿ ÿÿ ÿÿ    ÿÿ ÿÿ ÿÿ    ÿÿ ÿÿ ÿÿ    ÿÿ ÿÿ ÿÿ    ÿÿ     ’   s ÿÿ          ÿÿ          ÿÿ ÿÿ    ÿÿ    ÿÿ   J ÿÿ ÿÿ                ÿÿ          ÿÿ    ÿÿ ÿÿ    ÿÿ ÿÿ                ÿÿ    ÿÿ ÿÿ ÿÿ    ÿÿ ÿÿ       ÿÿ    ÿÿ ÿÿ    ÿÿ ÿÿ          &   /PlanetSourceCode/default.asp      ÿÿÿÿÿÿÿÿ        
     ÿÿ    !     MOUSE,GAME,TURBO,SHOOTING          }   t/vb/authentication/Login.asp?lngWId=1&txtReturnURL=%2Fvb%2Fscripts%2FShowCode%2Easp%3FtxtCodeId%3D71909%26lngWId%3D1      ÿÿÿÿÿÿÿÿ        
     ÿÿ                          "   /vb/default.asp?lngWId=10      ÿÿÿÿÿÿÿÿ        
     ÿÿ                          !   /vb/default.asp?lngWId=8      ÿÿÿÿÿÿÿÿ        
     ÿÿ                          "   /vb/default.asp?lngWId=14      ÿÿÿÿÿÿÿÿ        
     ÿÿ                          !   /vb/default.asp?lngWId=2      ÿÿÿÿÿÿÿÿ        
     ÿÿ                          !   /vb/default.asp?lngWId=3      ÿÿÿÿÿÿÿÿ        
     ÿÿ                          !   /vb/default.asp?lngWId=5      ÿÿÿÿÿÿÿÿ        
     ÿÿ                          !   /vb/default.asp?lngWId=6      ÿÿÿÿÿÿÿÿ        
     	ÿÿ                          !   /vb/default.asp?lngWId=4      ÿÿÿÿÿÿÿÿ        
     
ÿÿ                          !   /vb/default.asp?lngWId=1      ÿÿÿÿÿÿÿÿ        
     ÿÿ                          !   /vb/default.asp?lngWId=7      ÿÿÿÿÿÿÿÿ        
     ÿÿ                 !   /vb/default.asp?lngWId=9      ÿÿÿÿÿÿÿÿ        
     ÿÿ                 ;   2/vb/scripts/ShowCode.asp?txtCodeId=71909&lngWId=1#      ÿÿÿÿÿÿÿÿ        
     ÿÿ          ;   2/vb/scripts/ShowCode.asp?txtCodeId=71909&lngWId=1#      ÿÿÿÿÿÿÿÿ        
     ÿÿ          ;   2/vb/scripts/ShowCode.asp?txtCodeId=71909&lngWId=1#      ÿÿÿÿÿÿÿÿ        
     ÿÿ          ;   2/vb/scripts/ShowCode.asp?txtCodeId=71909&lngWId=1#      ÿÿÿÿÿÿÿÿ        
     ÿÿ          ;   2/vb/scripts/ShowCode.asp?txtCodeId=71909&lngWId=1#      ÿÿÿÿÿÿÿÿ        
     ÿÿ          ;   2/vb/scripts/ShowCode.asp?txtCodeId=71909&lngWId=1#      ÿÿÿÿÿÿÿÿ        
     ÿÿ                                   
    	 ÿÿ    
    
 ÿÿ    
    
 ÿÿ        
    
 ÿÿ    
    
 ÿÿ    
    
 ÿÿ    @   7http://www.exhedra.com/exhedra/PlanetSourceCode/CD.aspx      ÿÿÿÿÿÿÿÿ        
     ÿÿ          
    
 ÿÿ       img      ÿÿÿÿÿÿÿÿ        VB icon              
     ÿÿ    
     ÿÿ             533                            
     ÿÿ             534 	                  
     ÿÿ   
   üjavascript:var popup = require("PopupWindow");popup.open("\/sharer.php?u=http\u00253A\u00252F\u00252Fwww.Planet-Source-Code.com\u00252Fvb\u00252Fscripts\u00252FShowCode.asp\u00253FtxtCodeId\u00253D71909\u002526lngWId\u00253D1&display=popup", 340, 670); i=535    ÿÿÿÿÿÿÿÿ        
      ÿÿ              
     !ÿÿ                                Ğ   Ç/vb/scripts/EmailToFriend.asp?lngWId=1&txtCodeId=71909&txtCodeName=MOUSE%2520SHOOTING%2520GAME%2520IN%2520TURBO%2520C%2B%2B&txtCodeDescription=MOUSE%2520SHOOTING%2520GAME%2520IN%2520TURBO%2520C%2B%2B      ÿÿÿÿÿÿÿÿ                   Ğ   Ç/vb/scripts/EmailToFriend.asp?lngWId=1&txtCodeId=71909&txtCodeName=MOUSE%2520SHOOTING%2520GAME%2520IN%2520TURBO%2520C%2B%2B&txtCodeDescription=MOUSE%2520SHOOTING%2520GAME%2520IN%2520TURBO%2520C%2B%2B      ÿÿÿÿÿÿÿÿ        
     "ÿÿ              
    	 #ÿÿ    
    
 $ÿÿ        
    	 %ÿÿ    A   8/vb/authors/ShowBio.asp?lngAuthorId=77467759986&lngWId=1      ÿÿÿÿÿÿÿÿ        
     &ÿÿ              
    	 'ÿÿ    
    
 (ÿÿ ?           ? ÿ 7 ‡ÿ 4 ÿ Q {ÿ ÿ ÿÿ ÿ ÿ ÿ ÿ ÿÿ iÿ ÿ ;ÿ ÿ  ÿ       ÿ      ÿ    ÿ        ?     ÿÿ       ÿÿ       ÿÿ   -   - ÿÿ   E ÿÿ   ÿÿ ÿÿ  0 ÿÿ  E ÿÿ  \ ÿÿ  q ÿÿ  † ÿÿ ÿÿ  † ÿÿ  › ÿÿ  › ÿÿ  ° ÿÿ  Å  Ú ÿÿ  ï  ï      .  C  X ÿÿ  m  ‚  —  ¬  Á  Ö ÿÿ  ë  ë      ÿÿ  *  ?  T  i  ~   ? êÿ M 2ÿ Y ,ÿ ' $ÿ êÿ sÿÿ çÿ ÿ !ÿ ©ÿ bÿÿ hÿ 4ÿ €ÿ …ÿ ã kÿ  Ö Ø ¼ Æ Ê -ÿ  Ã Ì Ì Ş Âÿ  Ã Õ “ÿ  É Ê Ş …   ?  – ÿÿ       ÿÿ       ÿÿ       ÿÿ   Ö ÿÿ    ÿÿ ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ       ÿÿ                      ÿÿ                   ÿÿ             ÿÿ                              
    	 )ÿÿ    
    
 *ÿÿ        
    	 +ÿÿ    
    
 ,ÿÿ        
    	 -ÿÿ    
    
 .ÿÿ    A   8/vb/authors/ShowBio.asp?lngAuthorId=77467759986&lngWId=1      ÿÿÿÿÿÿÿÿ        author picture        
     /ÿÿ              
     0ÿÿ        
     1ÿÿ        
    
 2ÿÿ        
    
 3ÿÿ        
    
 4ÿÿ    @   7/vb/scripts/ShowCodeAsText.asp?txtCodeId=71909&lngWId=1      ÿÿÿÿÿÿÿÿ        
     5ÿÿ        
     6ÿÿ          
    
 7ÿÿ        
    
 8ÿÿ        
    
 9ÿÿ    
    
 :ÿÿ        
    
 ;ÿÿ    
    
 <ÿÿ    
    
 =ÿÿ    
    
 >ÿÿ    
    
 ?ÿÿ    
    
 @ÿÿ    
    
 Aÿÿ        
    
 Bÿÿ    
    
 Cÿÿ    
    
 Dÿÿ    
    
 Eÿÿ    
    
 Fÿÿ    
    
 Gÿÿ        
    
 Hÿÿ    
    
 Iÿÿ    
    
 Jÿÿ    
    
 Kÿÿ        
    
 Lÿÿ    
    
 Mÿÿ    
    
 Nÿÿ    
    
 Oÿÿ    
    
 Pÿÿ @           @ ÿ  ÿ  ÿ  ÿ  ÿ ÿ  ÿ  ÿÿ ÿ ÿ ÿ ÿ B  ÿ ÿ ÿ ÿ ÿ ÿ ÿ ÿ ÿ ÿ ÿ ÿ ÿ  ÿ   ì    @     ÿÿ    ÿÿ   	    ÿÿ   3   H ÿÿ   ]   r ÿÿ   ‡ ÿÿ   ™ ÿÿ      ³ ÿÿ ÿÿ   È ÿÿ   İ ÿÿ   ò ÿÿ   ÿÿ      1 ÿÿ  F ÿÿ  [ ÿÿ  p ÿÿ  … ÿÿ  š ÿÿ  ¯ ÿÿ  Ä ÿÿ  Ù ÿÿ  î ÿÿ   ÿÿ   ÿÿ  - ÿÿ  B  W ÿÿ  l               @ êÿ  ÿ ç #ÿ Ö ]ÿ Ê ‰ÿ yÿ ÿ Ò ·ÿÿ ­ÿ „ÿ ãÿ :ÿ  á [ÿ _ÿ `ÿ dÿ Uÿ dÿ tÿ \ÿ vÿ lÿ ™ÿ Zÿ •ÿ à -ÿ İ   ê   @  € ÿÿ    ÿÿ       ÿÿ       ÿÿ       ÿÿ    ÿÿ    ÿÿ       ÿÿ ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ          ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ       ÿÿ     €  €                  
    
 Qÿÿ        
    
 Rÿÿ    
    
 Sÿÿ        
    
 Tÿÿ    
    
 Uÿÿ        
    
 Vÿÿ    
    
 Wÿÿ        
    
 Xÿÿ        
    
 Yÿÿ        
    
 Zÿÿ    
    
 [ÿÿ    [   Rhttp://www.Planet-Source-Code.com/vb/scripts/ShowCode.asp?txtCodeId=71909&lngWId=1  	    ÿÿÿÿÿÿÿÿ        
    
 \ÿÿ        
    
 ]ÿÿ        
    
 ^ÿÿ        
    
 _ÿÿ      	    
    
 `ÿÿ    
    
 aÿÿ    
    
 bÿÿ        
    
 cÿÿ        
    
 dÿÿ        
    
 eÿÿ        
    
 fÿÿ        
    
 gÿÿ        
    
 hÿÿ        
    
 iÿÿ        
    
 jÿÿ        
    
 kÿÿ        
    
 lÿÿ        
    
 mÿÿ        
    
 nÿÿ        
    
 oÿÿ    
    
 pÿÿ        
    
 qÿÿ                      E           E  ÿ ÿ  ÿ ÿ ÿ ÿ ÿ  ÿ ÿ  ÿ      ÿ ÿ ÿ  ÿ ÿ  ÿ ÿ ÿ  ÿ  ÿ ÿ ÿ ÿ ÿ ÿ  ÿ ÿ ÿ ÿ   ì   E        ÿÿ    ÿÿ   ( ÿÿ   + ÿÿ   @ ÿÿ   U ÿÿ   j ÿÿ      ” ÿÿ   © ÿÿ   ¾   Ó ÿÿ   è   ı    '  <  Q ÿÿ  f ÿÿ  { ÿÿ   ÿÿ   ÿÿ  ¢ ÿÿ  ¥ ÿÿ  º ÿÿ  Ì ÿÿ  Ì ÿÿ  Ï ÿÿ  ä ÿÿ  ù ÿÿ   ÿÿ  # ÿÿ  5 ÿÿ  8 ÿÿ  M ÿÿ  b ÿÿ  w           E ê Zÿ >ÿ 	ÿ +ÿ ·ÿ °ÿ =ÿ  Øÿ Iÿ Ç Aÿ Ø  Ê Ò Ô ãÿ 2ÿ )ÿ 	ÿ <ÿ 	ÿ 8ÿ ÿ ÿ ÿ +ÿ ÿ Âÿ ƒÿ Qÿ 	ÿ Cÿ lÿ ·ÿ ?     E  ‹    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ       ÿÿ    ÿÿ       ÿÿ                   ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ     ‹  ‹           
    
 rÿÿ        
    
 sÿÿ        
    
 tÿÿ        
    
 uÿÿ        
    
 vÿÿ        
    
 wÿÿ        
    
 xÿÿ        
    
 yÿÿ    
    
 zÿÿ        
    
 {ÿÿ        
    
 |ÿÿ    
    
 }ÿÿ        
    
 ~ÿÿ    
    
 ÿÿ    
    
 €ÿÿ    
    
 ÿÿ    
    
 ‚ÿÿ    
    
 ƒÿÿ        
    
 „ÿÿ        
    
 …ÿÿ        
    
 †ÿÿ        
    
 ‡ÿÿ        
    
 ˆÿÿ        
    
 ‰ÿÿ        
    
 Šÿÿ        
    
 ‹ÿÿ        
    
 Œÿÿ        
    
 ÿÿ        
    
 ÿÿ        
    
 ÿÿ        
    
 ÿÿ        
    
 ‘ÿÿ        
    
 ’ÿÿ        
    
 “ÿÿ        
    
 ”ÿÿ        
    
 •ÿÿ        
    
 –ÿÿ               ?           ? ÿ ÿ ÿ  ÿ ÿ ÿ ÿ ÿ ÿ ÿ  ÿ ÿ ÿ ÿ   ÿ ÿ ÿ  ÿ ÿ        ÿ  ÿ ÿ  ÿ ÿ ÿ   ì   ?     ÿÿ    ÿÿ    ÿÿ   ( ÿÿ   + ÿÿ   @ ÿÿ   U ÿÿ   j ÿÿ    ÿÿ   ” ÿÿ   ¦ ÿÿ   © ÿÿ   ¾ ÿÿ   Ó ÿÿ   è   ı   ÿÿ  ' ÿÿ  < ÿÿ  N ÿÿ  Q ÿÿ  f  {    ¥  º  Ï  ä  ù ÿÿ   ÿÿ   ÿÿ  #  8 ÿÿ  M ÿÿ  b ÿÿ  w           ? êÿ Cÿ <ÿ 	ÿ 8ÿ eÿ ÿ 9ÿ (ÿ ÿ ÿ ÿ Lÿ ^ÿ º ¯ ¡ÿ Cÿ Rÿ 	ÿ Pÿ ª ƒ Í ƒ Ï ƒ Ï ¢ÿ 	ÿ `ÿ ¹ Tÿ Cÿ +ÿ ‚     ?  ‹ ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ          ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ                         ÿÿ    ÿÿ    ÿÿ       ÿÿ    ÿÿ    ÿÿ     ‹  ‹               
    
 —ÿÿ        
    
 ˜ÿÿ        
    
 ™ÿÿ        
    
 šÿÿ        
    
 ›ÿÿ        
    
 œÿÿ        
    
 ÿÿ        
    
 ÿÿ        
    
 Ÿÿÿ        
    
  ÿÿ        
    
 ¡ÿÿ        
    
 ¢ÿÿ        
    
 £ÿÿ        
    
 ¤ÿÿ    
    
 ¥ÿÿ    
    
 ¦ÿÿ        
    
 §ÿÿ        
    
 ¨ÿÿ        
    
 ©ÿÿ        
    
 ªÿÿ        
    
 «ÿÿ    
    
 ¬ÿÿ    
    
 ­ÿÿ    
    
 ®ÿÿ    
    
 ¯ÿÿ    
    
 °ÿÿ    
    
 ±ÿÿ    
    
 ²ÿÿ        
    
 ³ÿÿ        
    
 ´ÿÿ        
    
 µÿÿ    
    
 ¶ÿÿ        
    
 ·ÿÿ        
    
 ¸ÿÿ        
    
 ¹ÿÿ               P           P ÿ ÿ  ÿ  ÿ ÿ ÿ ÿ ÿ ÿ ÿ   ÿ ÿ  ÿ ÿ  ÿ ÿ  ÿ ÿ ÿ  ÿ    ÿ  ÿ  ÿ ÿ  ÿ ÿ ÿ ÿ ÿ ÿ  ÿ  ÿ  ÿ  ÿ ÿ   ì   P     ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ   + ÿÿ   @ ÿÿ   U ÿÿ   j ÿÿ    ÿÿ   ”   ©   ¾ ÿÿ   Ó ÿÿ   å ÿÿ   è ÿÿ   ú ÿÿ   ı ÿÿ   ÿÿ   ÿÿ  ' ÿÿ  9 ÿÿ  <  Q  f  { ÿÿ   ÿÿ   ÿÿ   ÿÿ  ¢ ÿÿ  ¥ ÿÿ  º ÿÿ  Ï ÿÿ  ä ÿÿ  ù ÿÿ    # ÿÿ  5 ÿÿ  8  M ÿÿ  _ ÿÿ  b ÿÿ  w           P êÿ ÿ ÿ ÿ Cÿ Lÿ ÿ ?ÿ Rÿ Pÿ º ¯ ¡ÿ ÿ ÿ )ÿ ÿ Vÿ 	ÿ ÿ iÿ 	ÿ •   Ëÿ ÿ ÿ •ÿ 	ÿ Yÿ ¸ÿ ¸ÿ ¸ÿ •ÿ  £ÿ ÿ İ Vÿ 	ÿ 4ÿ :     P  ‹ ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ          ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ             ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ       ÿÿ    ÿÿ       ÿÿ    ÿÿ    ÿÿ     ‹  ‹               
    
 ºÿÿ        
    
 »ÿÿ        
    
 ¼ÿÿ        
    
 ½ÿÿ        
    
 ¾ÿÿ        
    
 ¿ÿÿ        
    
 Àÿÿ        
    
 Áÿÿ        
    
 Âÿÿ        
    
 Ãÿÿ    
    
 Äÿÿ    
    
 Åÿÿ        
    
 Æÿÿ        
    
 Çÿÿ        
    
 Èÿÿ        
    
 Éÿÿ        
    
 Êÿÿ        
    
 Ëÿÿ        
    
 Ìÿÿ        
    
 Íÿÿ        
    
 Îÿÿ        
    
 Ïÿÿ    
    
 Ğÿÿ    
    
 Ñÿÿ    
    
 Òÿÿ        
    
 Óÿÿ        
    
 Ôÿÿ        
    
 Õÿÿ        
    
 Öÿÿ        
    
 ×ÿÿ        
    
 Øÿÿ        
    
 Ùÿÿ        
    
 Úÿÿ        
    
 Ûÿÿ        
    
 Üÿÿ    
    
 İÿÿ        
    
 Şÿÿ        
    
 ßÿÿ    
    
 àÿÿ        
    
 áÿÿ        
    
 âÿÿ        
    
 ãÿÿ               ]           ] ÿ ÿ ÿ ÿ ÿ ÿ ÿ  ÿ ÿ  ÿ ÿ ÿ  ÿ  ÿ  ÿ ÿ ÿ ÿ ÿ ÿ     ì ÿ ÿ   ÿ       ÿ ÿ ÿ ÿ  ÿÿ jÿ ÿ  T i  ¢ Ø  b w – ˜  Úÿÿ ÿ k   ]     ÿÿ    ÿÿ    ÿÿ   + ÿÿ   @ ÿÿ   U ÿÿ   j ÿÿ   | ÿÿ    ÿÿ   ‘ ÿÿ   ” ÿÿ   © ÿÿ   » ÿÿ   ¾   Ó ÿÿ   å ÿÿ   è ÿÿ   ı ÿÿ   ÿÿ  ' ÿÿ  < ÿÿ  N  c          O ÿÿ  e ÿÿ  ‚  —  ¬ ÿÿ  Á  Ö  ë    
    . ÿÿ  0 ÿÿ  L ÿÿ  ` ÿÿ  u  Š ÿÿ ÿÿ  Š ÿÿ  Ÿ ÿÿ  Ÿ  Ÿ  Ÿ  Ÿ  Ÿ  Ÿ  ¸  ¸  ¸  ´  ¶  ¸  ¸ ÿÿ ÿÿ  Ñ ÿÿ  Ñ   ] êÿ ;ÿ ÿ 4ÿ <ÿ =ÿ ‘ÿ ÿ ‘ÿ 	ÿ 4ÿ ‘ÿ ÿ à )ÿ 	ÿ 4ÿ ‘ÿ bÿ >ÿ Aÿ  ê   êÿ ÿ å Ñ ÿ Ú 5 è M I = êÿ =ÿ éÿ ‚ÿ ç dÿÿ eÿ ÿ 9  !  3  \   A = 1 ÿÿ eÿ    ]  ğ ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ       ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ        P  P    ÿÿ    ÿÿ          ÿÿ                      ÿÿ    ÿÿ    ÿÿ    ÿÿ       ÿÿ ÿÿ    ÿÿ    ÿÿ                                        ÿÿ ÿÿ    ÿÿ                  
    
 äÿÿ        
    
 åÿÿ        
    
 æÿÿ        
    
 çÿÿ        
    
 èÿÿ        
    
 éÿÿ        
    
 êÿÿ        
    
 ëÿÿ        
    
 ìÿÿ        
    
 íÿÿ        
    
 îÿÿ        
    
 ïÿÿ        
    
 ğÿÿ    
    
 ñÿÿ        
    
 òÿÿ        
    
 óÿÿ        
    
 ôÿÿ        
    
 õÿÿ        
    
 öÿÿ        
    
 ÷ÿÿ        
    
 øÿÿ                                    
    	 ùÿÿ        
    
 úÿÿ    
    
 ûÿÿ    
    
 üÿÿ        
    
 ıÿÿ    
    
 şÿÿ       	txtReason 537                     cmSubmit 538                      
     ÿÿÿ               
    	 ÿÿ        
    
ÿÿ        
    
ÿÿ        
    
ÿÿ    
    
ÿÿ    )    /vb/contest/contest.asp?lngWId=1      ÿÿÿÿÿÿÿÿ        
    ÿÿ          &   optCodeRatingValue 540   5                 
    
ÿÿ    &   optCodeRatingValue 541   4             
    
ÿÿ    &   optCodeRatingValue 542   3             
    
ÿÿ    &   optCodeRatingValue 543   2             
    
	ÿÿ    &   optCodeRatingValue 544   1         	    
    

ÿÿ      	cmdRateIt 545           
           
    ÿÿ    
    
ÿÿ    ¢   ™/vb/scripts/voting/VoteLog.asp?txtCodeId=71909&txtCodeName=MOUSE%20SHOOTING%20GAME%20IN%20TURBO%20C++&intUserRatingTotal=0&intNumOfUserRatings=0&lngWid=1      ÿÿÿÿÿÿÿÿ        
    ÿÿ          
    
ÿÿB          B  ÿ ÿ ÿÿ  ºÿÿ Áÿÿ ÿ  ÿÿ -ÿ e ÿ ÿ        ÿÿ ’ÿ ÿ ÿÿ Âÿ ãÿ  5  Ÿÿ § ÿ    ÿ 	ÿÿ 	ÿÿÿ 	ÿ 	ÿ 	ÿ 	ÿÿ 	ÿ „ÿÿ Œÿ Ùÿ 	ÿÿ 	ÿÿÿ 	ÿ 	ÿ 	ÿÿ 	 	ÿ „ÿÿ Œÿ Ùÿ 	ÿÿ 	ÿÿÿ 	ÿ 	ÿÿ 	ÿ „ÿÿ Œÿ Ùÿ 	ÿÿ 	ÿÿÿ 	ÿ 	ÿ 	ÿÿ 	ÿ „ÿÿ Œÿ Ùÿ 	ÿÿ 	ÿÿÿ 	ÿÿ 	 	ÿ „ÿÿ Œÿ Ùÿ 	ÿÿ 	ÿÿÿ 	ÿÿ 	 	ÿ „ÿÿ Œÿ Ùÿ 	ÿÿ 	ÿÿÿ 	ÿÿ 	ÿ „ÿÿ Œÿ Ùÿ 	ÿÿ 	ÿÿÿ 	ÿ 	ÿ 	ÿÿ 	ÿ „ÿÿ Œÿ Ùÿ 	ÿÿÿ 	 wÿ 	ÿÿ 	ÿ 	ÿÿ 	ÿÿÿ 	ÿ 	ÿÿ 	ÿ „ÿÿ Œÿ Ùÿ 	ÿÿ 	ÿÿÿ 	ÿ 	ÿÿ 	 	ÿ „ÿÿ Œÿ Ùÿ 	ÿÿ 	ÿÿÿ 	ÿ 	ÿÿ 	 	ÿ „ÿÿ Œÿ Ùÿ 	ÿÿ 	ÿÿÿ 	ÿÿ 	ÿ „ÿÿ Œÿ Ùÿ 	ÿÿ 	ÿÿÿ 	ÿÿ 	ÿ „ÿÿ Œÿ Ùÿ 	ÿÿ 	ÿÿÿ 	ÿÿ 	ÿ „ÿÿ Œÿ Ùÿ 	ÿÿ 	ÿÿÿ 	ÿ 	ÿ 	ÿÿ 	ÿ „ÿÿ Œÿ Ùÿ 	ÿÿ 	ÿÿÿ 	ÿÿ 	ÿ „ÿÿ Œÿ Ùÿ 	ÿÿ 	ÿÿÿ 	ÿ 	ÿÿ 	 	ÿ „ÿÿ Œÿ Ùÿ 	ÿÿ 	ÿÿÿ 	ÿ 	ÿÿ 	 	ÿ „ÿÿ Œÿ Ùÿ 	ÿÿ 	ÿÿÿ 	ÿ 	ÿÿ 	ÿ „ÿÿ Œÿ Ùÿ 	ÿÿ 	ÿÿÿ 	ÿ 	ÿÿ 	ÿ „ÿÿ Œÿ Ùÿ 	ÿÿ 	ÿÿÿ 	ÿÿ 	ÿ „ÿÿ Œÿ Ùÿ 	ÿÿÿ 	ÿÿ 	ÿ 	ÿÿ 	ÿÿÿ 	ÿ 	ÿ 	ÿ 	ÿ 	ÿÿ 	 	ÿ „ÿÿ Œÿ Ùÿ 	ÿÿ 	ÿÿÿ 	ÿÿ 	 	ÿ „ÿÿ Œÿ Ùÿÿ Cÿ  B        ÿÿ    ÿÿ   $ ÿÿ ÿÿ   #   # ÿÿ ÿÿ   # ÿÿ ÿÿ   8 ÿÿ   M   b ÿÿ ÿÿ   b ÿÿ   b   } ÿÿ    ÿÿ   œ   ±   Æ   Û   ğ      / ÿÿ ÿÿ  / ÿÿ  D ÿÿ  Y ÿÿ ÿÿ  Y ÿÿ  Y ÿÿ  ƒ    œ  œ ÿÿ     Î ÿÿ  ò      " ÿÿ  4 ÿÿ ÿÿ  F ÿÿ ÿÿ ÿÿ  _ ÿÿ  t ÿÿ  ‰ ÿÿ   ÿÿ ÿÿ  · ÿÿ  Ì ÿÿ ÿÿ  Ì ÿÿ  Ì ÿÿ  ò ÿÿ ÿÿ   ÿÿ ÿÿ ÿÿ   ÿÿ  2 ÿÿ  G ÿÿ ÿÿ  `  u ÿÿ  Š ÿÿ ÿÿ  Š ÿÿ  Š ÿÿ  ° ÿÿ ÿÿ  Â ÿÿ ÿÿ ÿÿ  Û ÿÿ  ğ ÿÿ ÿÿ  	 ÿÿ   ÿÿ ÿÿ   ÿÿ   ÿÿ  D ÿÿ ÿÿ  V ÿÿ ÿÿ ÿÿ  o ÿÿ  „ ÿÿ  ™ ÿÿ ÿÿ  ² ÿÿ  Ç ÿÿ ÿÿ  Ç ÿÿ  Ç ÿÿ  í ÿÿ ÿÿ  ÿ ÿÿ ÿÿ ÿÿ   ÿÿ ÿÿ  1  F ÿÿ  [ ÿÿ ÿÿ  [ ÿÿ  [ ÿÿ   ÿÿ ÿÿ  “ ÿÿ ÿÿ ÿÿ  ¬ ÿÿ ÿÿ  Å  Ú ÿÿ  ï ÿÿ ÿÿ  ï ÿÿ  ï ÿÿ   ÿÿ ÿÿ  ' ÿÿ ÿÿ ÿÿ  @ ÿÿ ÿÿ  Y ÿÿ  n ÿÿ ÿÿ  n ÿÿ  n ÿÿ  ” ÿÿ ÿÿ  ¦ ÿÿ ÿÿ ÿÿ  ¿ ÿÿ  Ô ÿÿ  é ÿÿ ÿÿ   ÿÿ   ÿÿ ÿÿ   ÿÿ   ÿÿ  = ÿÿ ÿÿ ÿÿ  W  V ÿÿ  n ÿÿ ÿÿ  ‡ ÿÿ  ­ ÿÿ ÿÿ  ¿ ÿÿ ÿÿ ÿÿ  Ø ÿÿ  í ÿÿ ÿÿ   ÿÿ   ÿÿ ÿÿ   ÿÿ   ÿÿ  A ÿÿ ÿÿ  S ÿÿ ÿÿ ÿÿ  l ÿÿ   ÿÿ ÿÿ  š  ¯ ÿÿ  Ä ÿÿ ÿÿ  Ä ÿÿ  Ä ÿÿ  ê ÿÿ ÿÿ  ü ÿÿ ÿÿ ÿÿ  	 ÿÿ  	* ÿÿ ÿÿ  	C  	X ÿÿ  	m ÿÿ ÿÿ  	m ÿÿ  	m ÿÿ  	“ ÿÿ ÿÿ  	¥ ÿÿ ÿÿ ÿÿ  	¾ ÿÿ ÿÿ  	× ÿÿ  	ì ÿÿ ÿÿ  	ì ÿÿ  	ì ÿÿ  
 ÿÿ ÿÿ  
$ ÿÿ ÿÿ ÿÿ  
= ÿÿ ÿÿ  
V ÿÿ  
k ÿÿ ÿÿ  
k ÿÿ  
k ÿÿ  
‘ ÿÿ ÿÿ  
£ ÿÿ ÿÿ ÿÿ  
¼ ÿÿ ÿÿ  
Õ ÿÿ  
ê ÿÿ ÿÿ  
ê ÿÿ  
ê ÿÿ   ÿÿ ÿÿ  " ÿÿ ÿÿ ÿÿ  ; ÿÿ  P ÿÿ  e ÿÿ ÿÿ  ~ ÿÿ  “ ÿÿ ÿÿ  “ ÿÿ  “ ÿÿ  ¹ ÿÿ ÿÿ  Ë ÿÿ ÿÿ ÿÿ  ä ÿÿ ÿÿ  ı ÿÿ   ÿÿ ÿÿ   ÿÿ   ÿÿ  8 ÿÿ ÿÿ  J ÿÿ ÿÿ ÿÿ  c ÿÿ  x ÿÿ ÿÿ  ‘  ¦ ÿÿ  » ÿÿ ÿÿ  » ÿÿ  » ÿÿ  á ÿÿ ÿÿ  ó ÿÿ ÿÿ ÿÿ   ÿÿ  ! ÿÿ ÿÿ  :  O ÿÿ  d ÿÿ ÿÿ  d ÿÿ  d ÿÿ  Š ÿÿ ÿÿ  œ ÿÿ ÿÿ ÿÿ  µ ÿÿ  Ê ÿÿ ÿÿ  ã ÿÿ  ø ÿÿ ÿÿ  ø ÿÿ  ø ÿÿ   ÿÿ ÿÿ  0 ÿÿ ÿÿ ÿÿ  I ÿÿ  ^ ÿÿ ÿÿ  w ÿÿ  Œ ÿÿ ÿÿ  Œ ÿÿ  Œ ÿÿ  ² ÿÿ ÿÿ  Ä ÿÿ ÿÿ ÿÿ  İ ÿÿ ÿÿ  ö ÿÿ   ÿÿ ÿÿ   ÿÿ   ÿÿ  1 ÿÿ ÿÿ ÿÿ  J ÿÿ ÿÿ  c ÿÿ  ‰ ÿÿ ÿÿ  › ÿÿ ÿÿ ÿÿ  ´ ÿÿ  É ÿÿ  Ş ÿÿ  ó ÿÿ   ÿÿ ÿÿ  !  6 ÿÿ  K ÿÿ ÿÿ  K ÿÿ  K ÿÿ  q ÿÿ ÿÿ  ƒ ÿÿ ÿÿ ÿÿ  œ ÿÿ ÿÿ  µ  Ê ÿÿ  ß ÿÿ ÿÿ  ß ÿÿ  ß ÿÿ ÿÿ    ÿÿ  B ê êÿ ‡ÿ ÿÿ   ÿÿ !ÿÿ ¹ÿ á &ÿÿ 5ÿ  êÿ xÿ ß Ç ê ê ¼ ç ´ ‹ÿÿ <ÿ 5ÿ »ÿÿ ÿ ÿ . ® ˜ :ÿ * ãÿ Ï ¾ ¾ êÿ ÿÿ ÿÿÿ aÿ ‚ÿ mÿ dÿÿ ~ÿ ÿÿ Jÿ ÿ ÿÿ ÿÿÿ €ÿ yÿ 5ÿÿ | #ÿ ÿÿ Jÿ ÿ ÿÿ ÿÿÿ †ÿ aÿÿ “ÿ ÿÿ Jÿ ÿ ÿÿ ÿÿÿ ‚ÿ zÿ Pÿÿ }ÿ ÿÿ Jÿ ÿ ÿÿ ÿÿÿ Vÿÿ ’ 5ÿ ÿÿ Jÿ ÿ ÿÿ ÿÿÿ zÿÿ ’ 5ÿ ÿÿ Jÿ ÿ ÿÿ ÿÿÿ [ÿÿ ~ÿ ÿÿ Jÿ ÿ ÿÿ ÿÿÿ 3ÿ ~ÿ sÿÿ ~ÿ ÿÿ Jÿ ÿ ÿÿÿ k 	ÿ Šÿÿ ~ÿ ÿÿ ÿÿÿ šÿ Nÿÿ }ÿ ÿÿ Jÿ ÿ ÿÿ ÿÿÿ Œÿ Cÿÿ ’ 5ÿ ÿÿ Jÿ ÿ ÿÿ ÿÿÿ ÿ @ÿÿ ~ #ÿ ÿÿ Jÿ ÿ ÿÿ ÿÿÿ šÿÿ ‹ÿ ÿÿ Jÿ ÿ ÿÿ ÿÿÿ @ÿÿ „ÿ ÿÿ Jÿ ÿ ÿÿ ÿÿÿ Pÿÿ „ÿ ÿÿ Jÿ ÿ ÿÿ ÿÿÿ „ÿ Œÿ %ÿÿ „ÿ ÿÿ Jÿ ÿ ÿÿ ÿÿÿ Rÿÿ }ÿ ÿÿ Jÿ ÿ ÿÿ ÿÿÿ –ÿ Zÿÿ ‡ #ÿ ÿÿ Jÿ ÿ ÿÿ ÿÿÿ mÿ pÿÿ ‡ #ÿ ÿÿ Jÿ ÿ ÿÿ ÿÿÿ ~ÿ ]ÿÿ “ÿ ÿÿ Jÿ ÿ ÿÿ ÿÿÿ ÿ Fÿÿ “ÿ ÿÿ Jÿ ÿ ÿÿ ÿÿÿ Šÿÿ „ÿ ÿÿ Jÿ ÿ ÿÿÿ Lÿÿ ‹ÿ ÿÿ ÿÿÿ œÿ xÿ –ÿ …ÿ ÿÿ ‡ #ÿ ÿÿ Jÿ ÿ ÿÿ ÿÿÿ cÿÿ ‡ #ÿ ÿÿ Jÿ ÿÿ  ÿ  B  ;    ÿÿ    ÿÿ    ÿÿ ÿÿ       ÿÿ ÿÿ    ÿÿ ÿÿ    ÿÿ       ÿÿ ÿÿ    ÿÿ       ÿÿ    ÿÿ                         ÿÿ ÿÿ    ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ    ÿÿ             ÿÿ       ÿÿ      
   
  ì ÿÿ    ÿÿ ÿÿ    ÿÿ ÿÿ ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ ÿÿ ÿÿ    ÿÿ    ÿÿ    ÿÿ ÿÿ       ÿÿ    ÿÿ ÿÿ    ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ ÿÿ ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ ÿÿ ÿÿ    ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ ÿÿ ÿÿ    ÿÿ ÿÿ       ÿÿ    ÿÿ ÿÿ    ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ ÿÿ ÿÿ    ÿÿ ÿÿ       ÿÿ    ÿÿ ÿÿ    ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ ÿÿ ÿÿ    ÿÿ ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ ÿÿ ÿÿ    ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ    ÿÿ    ÿÿ ÿÿ ÿÿ       ÿÿ    ÿÿ ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ ÿÿ ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ ÿÿ ÿÿ    ÿÿ    ÿÿ ÿÿ       ÿÿ    ÿÿ ÿÿ    ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ ÿÿ ÿÿ    ÿÿ    ÿÿ ÿÿ       ÿÿ    ÿÿ ÿÿ    ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ ÿÿ ÿÿ    ÿÿ ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ ÿÿ ÿÿ    ÿÿ ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ ÿÿ ÿÿ    ÿÿ ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ ÿÿ ÿÿ    ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ ÿÿ ÿÿ    ÿÿ ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ ÿÿ ÿÿ    ÿÿ    ÿÿ ÿÿ       ÿÿ    ÿÿ ÿÿ    ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ ÿÿ ÿÿ    ÿÿ    ÿÿ ÿÿ       ÿÿ    ÿÿ ÿÿ    ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ ÿÿ ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ ÿÿ ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ ÿÿ ÿÿ    ÿÿ ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ    ÿÿ    ÿÿ ÿÿ ÿÿ    ÿÿ ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ ÿÿ ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ    ÿÿ ÿÿ       ÿÿ    ÿÿ ÿÿ    ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ ÿÿ ÿÿ    ÿÿ ÿÿ       ÿÿ    ÿÿ ÿÿ    ÿÿ    ÿÿ ÿÿ    ÿÿ                      
    	ÿÿ       img      ÿÿÿÿÿÿÿÿ                       
    ÿÿ    
    ÿÿ    Ç   ¾/vb/feedback/EmailUser.asp?lngWId=1&lngToPersonId=88496771247&txtReferralPage=http%3A%2F%2Fwww%2Eplanet%2Dsource%2Dcode%2Ecom%2Fvb%2Fscripts%2FShowCode%2Easp%3FtxtCodeId%3D71909%26lngWId%3D1      ÿÿÿÿÿÿÿÿ        
    ÿÿ              
    ÿÿ        
    ÿÿ    
    ÿÿ    E   7javascript:toggle('ReportBadItem_326865');return false; i=546    ÿÿÿÿÿÿÿÿ        
    ÿÿ          
    ÿÿ               
    	ÿÿ        
    
ÿÿ    
    
ÿÿ    
    
ÿÿ    
    
ÿÿ    
    
ÿÿ    
    
ÿÿ    
    
ÿÿ    
    
 ÿÿ    >   5/vb/feedback/feedback.asp?lngWId=1&intTypeOfInquiry=3      ÿÿÿÿÿÿÿÿ        
    !ÿÿ          
    
"ÿÿ        
    
#ÿÿ       „/vb/authentication/Login.asp?lngWId=1&txtReturnURL=%2Fvb%2Fscripts%2FShowCode%2Easp%3FtxtCodeId%3D71909%26lngWId%3D1#AddYourFeedback      ÿÿÿÿÿÿÿÿ        
    $ÿÿ          
    
%ÿÿ        
    
&ÿÿ    "  txtCriteria 548                   	  lngWId 549                   550                   
    'ÿÿ                 
    	(ÿÿ       	         
             8   //Upload_PSC/ScreenShots/PIC2014127034538364.jpg      ÿÿÿÿÿÿÿÿ    4    ,Click here to see a screenshot of this code!          i   [javascript:ShowPopupWindowXYWithScrollbars('/vb/misc/NewUpdateIconExplanation.asp',200,300) i=551    ÿÿÿÿÿÿÿÿ                   :   1/vb/scripts/ShowCode.asp?txtCodeId=75164&lngWId=1  	    ÿÿÿÿÿÿÿÿ        
    )ÿÿ        
    *ÿÿ        
    +ÿÿ        
    ,ÿÿ      	        
    -ÿÿ        
    .ÿÿ    8   //Upload_PSC/ScreenShots/PIC2014127034538364.jpg      ÿÿÿÿÿÿÿÿ        
    /ÿÿ          
    0ÿÿ    8   //Upload_PSC/ScreenShots/PIC2014130331324741.gif      ÿÿÿÿÿÿÿÿ    4    ,Click here to see a screenshot of this code!          i   [javascript:ShowPopupWindowXYWithScrollbars('/vb/misc/NewUpdateIconExplanation.asp',200,300) i=552    ÿÿÿÿÿÿÿÿ                   :   1/vb/scripts/ShowCode.asp?txtCodeId=75175&lngWId=1      ÿÿÿÿÿÿÿÿ        
    1ÿÿ        
    2ÿÿ        
    3ÿÿ              
    4ÿÿ    
    5ÿÿ        
    6ÿÿ    8   //Upload_PSC/ScreenShots/PIC2014130331324741.gif      ÿÿÿÿÿÿÿÿ        
    7ÿÿ          
    8ÿÿ    7   ./Upload_PSC/ScreenShots/PIC201413022219570.JPG      ÿÿÿÿÿÿÿÿ    4    ,Click here to see a screenshot of this code!          i   [javascript:ShowPopupWindowXYWithScrollbars('/vb/misc/NewUpdateIconExplanation.asp',200,300) i=553    ÿÿÿÿÿÿÿÿ                   :   1/vb/scripts/ShowCode.asp?txtCodeId=75174&lngWId=1      ÿÿÿÿÿÿÿÿ        
    9ÿÿ        
    :ÿÿ              
    ;ÿÿ        
    <ÿÿ    7   ./Upload_PSC/ScreenShots/PIC201413022219570.JPG      ÿÿÿÿÿÿÿÿ        
    =ÿÿ          
    >ÿÿ    8   //Upload_PSC/ScreenShots/PIC2014129164558071.JPG      ÿÿÿÿÿÿÿÿ    4    ,Click here to see a screenshot of this code!          i   [javascript:ShowPopupWindowXYWithScrollbars('/vb/misc/NewUpdateIconExplanation.asp',200,300) i=554    ÿÿÿÿÿÿÿÿ                   :   1/vb/scripts/ShowCode.asp?txtCodeId=75173&lngWId=1      ÿÿÿÿÿÿÿÿ        
    ?ÿÿ        
    @ÿÿ        
    Aÿÿ              
    Bÿÿ        
    Cÿÿ    8   //Upload_PSC/ScreenShots/PIC2014129164558071.JPG      ÿÿÿÿÿÿÿÿ        
    Dÿÿ          
    Eÿÿ    8   //Upload_PSC/ScreenShots/PIC2014128228126455.jpg      ÿÿÿÿÿÿÿÿ    4    ,Click here to see a screenshot of this code!          i   [javascript:ShowPopupWindowXYWithScrollbars('/vb/misc/NewUpdateIconExplanation.asp',200,300) i=555    ÿÿÿÿÿÿÿÿ                   :   1/vb/scripts/ShowCode.asp?txtCodeId=75169&lngWId=1      ÿÿÿÿÿÿÿÿ        
    Fÿÿ              
    Gÿÿ    
    Hÿÿ        
    Iÿÿ    8   //Upload_PSC/ScreenShots/PIC2014128228126455.jpg      ÿÿÿÿÿÿÿÿ        
    Jÿÿ          
    Kÿÿ    9   0/Upload_PSC/ScreenShots/PIC20141282257571965.jpg      ÿÿÿÿÿÿÿÿ    4    ,Click here to see a screenshot of this code!          i   [javascript:ShowPopupWindowXYWithScrollbars('/vb/misc/NewUpdateIconExplanation.asp',200,300) i=556    ÿÿÿÿÿÿÿÿ                   :   1/vb/scripts/ShowCode.asp?txtCodeId=75171&lngWId=1      ÿÿÿÿÿÿÿÿ        
    Lÿÿ              
    Mÿÿ    
    Nÿÿ        
    Oÿÿ    9   0/Upload_PSC/ScreenShots/PIC20141282257571965.jpg      ÿÿÿÿÿÿÿÿ        
    Pÿÿ          
    Qÿÿ    9   0/Upload_PSC/ScreenShots/PIC20141161121246764.jpg      ÿÿÿÿÿÿÿÿ    4    ,Click here to see a screenshot of this code!          i   [javascript:ShowPopupWindowXYWithScrollbars('/vb/misc/NewUpdateIconExplanation.asp',200,300) i=557    ÿÿÿÿÿÿÿÿ                   :   1/vb/scripts/ShowCode.asp?txtCodeId=75122&lngWId=1      ÿÿÿÿÿÿÿÿ        
    Rÿÿ              
    Sÿÿ        
    Tÿÿ    9   0/Upload_PSC/ScreenShots/PIC20141161121246764.jpg      ÿÿÿÿÿÿÿÿ        
    Uÿÿ          
    Vÿÿ    7   ./Upload_PSC/ScreenShots/PIC201412067547958.jpg      ÿÿÿÿÿÿÿÿ    4    ,Click here to see a screenshot of this code!          i   [javascript:ShowPopupWindowXYWithScrollbars('/vb/misc/NewUpdateIconExplanation.asp',200,300) i=558    ÿÿÿÿÿÿÿÿ                   :   1/vb/scripts/ShowCode.asp?txtCodeId=75118&lngWId=1      ÿÿÿÿÿÿÿÿ        
    Wÿÿ        
    Xÿÿ        
    Yÿÿ              
    Zÿÿ        
    [ÿÿ    7   ./Upload_PSC/ScreenShots/PIC201412067547958.jpg      ÿÿÿÿÿÿÿÿ        
    \ÿÿ          
    ]ÿÿ    i   [javascript:ShowPopupWindowXYWithScrollbars('/vb/misc/NewUpdateIconExplanation.asp',200,300) i=559    ÿÿÿÿÿÿÿÿ                   :   1/vb/scripts/ShowCode.asp?txtCodeId=75123&lngWId=1      ÿÿÿÿÿÿÿÿ        
    ^ÿÿ         Ù
        
    _ÿÿ              
    `ÿÿ    9   0/Upload_PSC/ScreenShots/PIC20141291045431542.JPG      ÿÿÿÿÿÿÿÿ    4    ,Click here to see a screenshot of this code!          i   [javascript:ShowPopupWindowXYWithScrollbars('/vb/misc/NewUpdateIconExplanation.asp',200,300) i=560    ÿÿÿÿÿÿÿÿ                   :   1/vb/scripts/ShowCode.asp?txtCodeId=75172&lngWId=1      ÿÿÿÿÿÿÿÿ        
    aÿÿ        
    bÿÿ              
    cÿÿ        
    dÿÿ    9   0/Upload_PSC/ScreenShots/PIC20141291045431542.JPG      ÿÿÿÿÿÿÿÿ        
    eÿÿ          
    fÿÿ    9   0/Upload_PSC/ScreenShots/PIC20141282226203611.jpg      ÿÿÿÿÿÿÿÿ    4    ,Click here to see a screenshot of this code!          i   [javascript:ShowPopupWindowXYWithScrollbars('/vb/misc/NewUpdateIconExplanation.asp',200,300) i=561    ÿÿÿÿÿÿÿÿ                   :   1/vb/scripts/ShowCode.asp?txtCodeId=75170&lngWId=1      ÿÿÿÿÿÿÿÿ        
    gÿÿ        
    hÿÿ              
    iÿÿ    
    jÿÿ        
    kÿÿ    9   0/Upload_PSC/ScreenShots/PIC20141282226203611.jpg      ÿÿÿÿÿÿÿÿ        
    lÿÿ          
    mÿÿ    9   0/Upload_PSC/ScreenShots/PIC20141272018285973.jpg      ÿÿÿÿÿÿÿÿ    4    ,Click here to see a screenshot of this code!          i   [javascript:ShowPopupWindowXYWithScrollbars('/vb/misc/NewUpdateIconExplanation.asp',200,300) i=562    ÿÿÿÿÿÿÿÿ                   :   1/vb/scripts/ShowCode.asp?txtCodeId=75168&lngWId=1      ÿÿÿÿÿÿÿÿ        
    nÿÿ        
    oÿÿ              
    pÿÿ    
    qÿÿ        
    rÿÿ    9   0/Upload_PSC/ScreenShots/PIC20141272018285973.jpg      ÿÿÿÿÿÿÿÿ        
    sÿÿ          
    tÿÿ    9   0/Upload_PSC/ScreenShots/PIC20141272017115510.jpg      ÿÿÿÿÿÿÿÿ    4    ,Click here to see a screenshot of this code!          i   [javascript:ShowPopupWindowXYWithScrollbars('/vb/misc/NewUpdateIconExplanation.asp',200,300) i=563    ÿÿÿÿÿÿÿÿ                   :   1/vb/scripts/ShowCode.asp?txtCodeId=75157&lngWId=1      ÿÿÿÿÿÿÿÿ        
    uÿÿ              
    vÿÿ        
    wÿÿ    9   0/Upload_PSC/ScreenShots/PIC20141272017115510.jpg      ÿÿÿÿÿÿÿÿ        
    xÿÿ          
    yÿÿ    8   //Upload_PSC/ScreenShots/PIC2014127915148301.jpg      ÿÿÿÿÿÿÿÿ    4    ,Click here to see a screenshot of this code!          i   [javascript:ShowPopupWindowXYWithScrollbars('/vb/misc/NewUpdateIconExplanation.asp',200,300) i=564    ÿÿÿÿÿÿÿÿ                   :   1/vb/scripts/ShowCode.asp?txtCodeId=75167&lngWId=1      ÿÿÿÿÿÿÿÿ        
    zÿÿ              
    {ÿÿ        
    |ÿÿ    8   //Upload_PSC/ScreenShots/PIC2014127915148301.jpg      ÿÿÿÿÿÿÿÿ        
    }ÿÿ          
    ~ÿÿ    8   //Upload_PSC/ScreenShots/PIC2014127844455333.jpg      ÿÿÿÿÿÿÿÿ    4    ,Click here to see a screenshot of this code!          i   [javascript:ShowPopupWindowXYWithScrollbars('/vb/misc/NewUpdateIconExplanation.asp',200,300) i=565    ÿÿÿÿÿÿÿÿ                   :   1/vb/scripts/ShowCode.asp?txtCodeId=75166&lngWId=1      ÿÿÿÿÿÿÿÿ        
    ÿÿ              
    €ÿÿ        
    ÿÿ    8   //Upload_PSC/ScreenShots/PIC2014127844455333.jpg      ÿÿÿÿÿÿÿÿ        
    ‚ÿÿ          
    ƒÿÿ    6   -/Upload_PSC/ScreenShots/PIC20141278331567.jpg      ÿÿÿÿÿÿÿÿ    4    ,Click here to see a screenshot of this code!          i   [javascript:ShowPopupWindowXYWithScrollbars('/vb/misc/NewUpdateIconExplanation.asp',200,300) i=566    ÿÿÿÿÿÿÿÿ                   :   1/vb/scripts/ShowCode.asp?txtCodeId=75165&lngWId=1      ÿÿÿÿÿÿÿÿ        
    „ÿÿ        
    …ÿÿ        
    †ÿÿ              
    ‡ÿÿ        
    ˆÿÿ    6   -/Upload_PSC/ScreenShots/PIC20141278331567.jpg      ÿÿÿÿÿÿÿÿ        
    ‰ÿÿ          
    Šÿÿ    8   //Upload_PSC/ScreenShots/PIC2014126853542961.JPG      ÿÿÿÿÿÿÿÿ    4    ,Click here to see a screenshot of this code!          i   [javascript:ShowPopupWindowXYWithScrollbars('/vb/misc/NewUpdateIconExplanation.asp',200,300) i=567    ÿÿÿÿÿÿÿÿ                   :   1/vb/scripts/ShowCode.asp?txtCodeId=75163&lngWId=1      ÿÿÿÿÿÿÿÿ        
    ‹ÿÿ              
    Œÿÿ        
    ÿÿ    8   //Upload_PSC/ScreenShots/PIC2014126853542961.JPG      ÿÿÿÿÿÿÿÿ        
    ÿÿ          
    ÿÿ    8   //Upload_PSC/ScreenShots/PIC2014126254397457.jpg      ÿÿÿÿÿÿÿÿ    4    ,Click here to see a screenshot of this code!          i   [javascript:ShowPopupWindowXYWithScrollbars('/vb/misc/NewUpdateIconExplanation.asp',200,300) i=568    ÿÿÿÿÿÿÿÿ                   :   1/vb/scripts/ShowCode.asp?txtCodeId=75162&lngWId=1      ÿÿÿÿÿÿÿÿ        
    ÿÿ        
    ‘ÿÿ              
    ’ÿÿ    
    “ÿÿ        
    ”ÿÿ    8   //Upload_PSC/ScreenShots/PIC2014126254397457.jpg      ÿÿÿÿÿÿÿÿ        
    •ÿÿ          
    –ÿÿ    7   ./Upload_PSC/ScreenShots/PIC201412625169849.jpg      ÿÿÿÿÿÿÿÿ    4    ,Click here to see a screenshot of this code!          i   [javascript:ShowPopupWindowXYWithScrollbars('/vb/misc/NewUpdateIconExplanation.asp',200,300) i=569    ÿÿÿÿÿÿÿÿ                   :   1/vb/scripts/ShowCode.asp?txtCodeId=75161&lngWId=1      ÿÿÿÿÿÿÿÿ        
    —ÿÿ        
    ˜ÿÿ              
    ™ÿÿ    
    šÿÿ        
    ›ÿÿ    7   ./Upload_PSC/ScreenShots/PIC201412625169849.jpg      ÿÿÿÿÿÿÿÿ        
    œÿÿ          
    ÿÿ    9   0/Upload_PSC/ScreenShots/PIC20141252346158477.JPG      ÿÿÿÿÿÿÿÿ    4    ,Click here to see a screenshot of this code!          i   [javascript:ShowPopupWindowXYWithScrollbars('/vb/misc/NewUpdateIconExplanation.asp',200,300) i=570    ÿÿÿÿÿÿÿÿ                   :   1/vb/scripts/ShowCode.asp?txtCodeId=75160&lngWId=1      ÿÿÿÿÿÿÿÿ        
    ÿÿ        
    Ÿÿÿ              
     ÿÿ        
    ¡ÿÿ    9   0/Upload_PSC/ScreenShots/PIC20141252346158477.JPG      ÿÿÿÿÿÿÿÿ        
    ¢ÿÿ          
    £ÿÿ    9   0/Upload_PSC/ScreenShots/PIC20141252336467058.JPG      ÿÿÿÿÿÿÿÿ    4    ,Click here to see a screenshot of this code!          i   [javascript:ShowPopupWindowXYWithScrollbars('/vb/misc/NewUpdateIconExplanation.asp',200,300) i=571    ÿÿÿÿÿÿÿÿ                   :   1/vb/scripts/ShowCode.asp?txtCodeId=75159&lngWId=1      ÿÿÿÿÿÿÿÿ        
    ¤ÿÿ        
    ¥ÿÿ              
    ¦ÿÿ        
    §ÿÿ    9   0/Upload_PSC/ScreenShots/PIC20141252336467058.JPG      ÿÿÿÿÿÿÿÿ        
    ¨ÿÿ          
    ©ÿÿ    9   0/Upload_PSC/ScreenShots/PIC20141252321292667.jpg      ÿÿÿÿÿÿÿÿ    4    ,Click here to see a screenshot of this code!          i   [javascript:ShowPopupWindowXYWithScrollbars('/vb/misc/NewUpdateIconExplanation.asp',200,300) i=572    ÿÿÿÿÿÿÿÿ                   :   1/vb/scripts/ShowCode.asp?txtCodeId=75158&lngWId=1      ÿÿÿÿÿÿÿÿ        
    ªÿÿ              
    «ÿÿ        
    ¬ÿÿ    9   0/Upload_PSC/ScreenShots/PIC20141252321292667.jpg      ÿÿÿÿÿÿÿÿ        
    ­ÿÿ          
    ®ÿÿ    i   [javascript:ShowPopupWindowXYWithScrollbars('/vb/misc/NewUpdateIconExplanation.asp',200,300) i=573    ÿÿÿÿÿÿÿÿ                   :   1/vb/scripts/ShowCode.asp?txtCodeId=75156&lngWId=1      ÿÿÿÿÿÿÿÿ        
    ¯ÿÿ              
    °ÿÿ    8   //Upload_PSC/ScreenShots/PIC2014122184354051.GIF      ÿÿÿÿÿÿÿÿ    4    ,Click here to see a screenshot of this code!          i   [javascript:ShowPopupWindowXYWithScrollbars('/vb/misc/NewUpdateIconExplanation.asp',200,300) i=574    ÿÿÿÿÿÿÿÿ                   :   1/vb/scripts/ShowCode.asp?txtCodeId=75150&lngWId=1      ÿÿÿÿÿÿÿÿ        
    ±ÿÿ        
    ²ÿÿ        
    ³ÿÿ        
    ´ÿÿ        
    µÿÿ              
    ¶ÿÿ    
    ·ÿÿ        
    ¸ÿÿ    8   //Upload_PSC/ScreenShots/PIC2014122184354051.GIF      ÿÿÿÿÿÿÿÿ        
    ¹ÿÿ          
    ºÿÿ    9   0/Upload_PSC/ScreenShots/PIC20141211025313437.jpg      ÿÿÿÿÿÿÿÿ    4    ,Click here to see a screenshot of this code!          i   [javascript:ShowPopupWindowXYWithScrollbars('/vb/misc/NewUpdateIconExplanation.asp',200,300) i=575    ÿÿÿÿÿÿÿÿ                   :   1/vb/scripts/ShowCode.asp?txtCodeId=75143&lngWId=1      ÿÿÿÿÿÿÿÿ        
    »ÿÿ              
    ¼ÿÿ    
    ½ÿÿ        
    ¾ÿÿ    9   0/Upload_PSC/ScreenShots/PIC20141211025313437.jpg      ÿÿÿÿÿÿÿÿ        
    ¿ÿÿ          
    Àÿÿ    8   //vb/LinkToUs/default.asp?lngWId=1#NewCodeTicker      ÿÿÿÿÿÿÿÿ        
    Áÿÿ                   ÿ         ÿÿ   	    êÿ g       ÿÿ                  
    	Âÿÿ            ÿÿ ÿ      ÿÿ ÿÿ    ÿÿ      ÿÿ ÿ W    ÿÿ ÿÿ    ÿÿ       A   8/vb/scripts/ShowCode.asp?txtCodeId=71909&lngWId=1??p=1??      ÿÿÿÿÿÿÿÿ        
     Ãÿÿ          	  p 1               ğ  $ã   2 M O U S E   S H O O T I N G   G A M E   I N   T U R B O   C + +   b y   r i d d h i   A g a r w a l   Ëİå ÿÿSR0          
       îÿ    
     g fÿ     7:=   
     ÿÿÿÿ    
      P´ÿ     àŞà   
     7:=ÿ     ÿÿÿ    ğğğ   
     ???ÿ   
     ???ÿ    
     ???ÿ    Liº   
     ÿÿÿÿ   
     jq€ÿ     ÌÏÔ   
        ÿ     ³³³    €€€    ğïğ   
     Fb~ÿ                                     
                     	
#include <stdio.h>
#include <conio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <dirent.h>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <thread>
#include "MemoryToolsWork64.h"

int handle;
void crash();
typedef int8_t BYTE;
typedef char PACKAGENAME;
long int get_module_base(int pid, const char *module_name)
{
	FILE *fp;
	long addr = 0;
	char *pch;
	char filename[32];
	char line[1024];
	snprintf(filename, sizeof(filename), "/proc/%d/maps", pid);
	fp = fopen(filename, "r");
	if (fp != NULL)
	{
		while (fgets(line, sizeof(line), fp))
		{
			if (strstr(line, module_name))
			{
				pch = strtok(line, "-");
				addr = strtoul(pch, NULL, 16);
				break;
			}
		}
		fclose(fp);
	}
	return addr;
}
int FERRARI_FLOAT(long int addr, float value)
{
	pwrite64(handle, &value, 4, addr);
	return 0;
}

int FERRARI_DWORD(long int addr, int value)
{
	pwrite64(handle, &value, 4, addr);
	return 0;
}

int FERRARI_BYTE(long int addr, BYTE value)
{
	pwrite64(handle, &value, 4, addr);
	return 0;
}

int FERRWRI_QWORD(long int addr, int value)
{
	pwrite64(handle, &value, 4, addr);
	return 0;
}





FILE *file; 
int main(int argc, char **argv)
{
char *pkg;
void *jg;
int gs; 
  int pkg_taiwan; 
  int pkg_korea; 
  int pkg_vietnam; 
  int pkg_global; 
  int pkg_india; 
  int pkg_us; 
  int pkg_lite; 
  
pkg_global  = isapkrunning("com.tencent.ig");
  pkg_vietnam = isapkrunning("com.vng.pubgmobile");
  pkg_korea = isapkrunning("com.pubg.krmobile");
  pkg_taiwan = isapkrunning("com.rekoo.pubgm");
  pkg_india = isapkrunning("com.pubg.imobile");
  pkg_us = isapkrunning("com.vng.pubgmobile");
  pkg_lite = isapkrunning("com.vng.pubgmobile");


if ( pkg_global == 1 )
  {
    pkg = "com.tencent.ig";
   // printf("Package name : %s");
  }
  else if ( pkg_vietnam == 1 )
  {
    pkg = "com.vng.pubgmobile";
    //printf("Package name : %s");
  }
  else if ( pkg_korea == 1 )
  {
    pkg = "com.pubg.krmobile";
    //printf("Package name : %s");
  }
  else if ( pkg_india == 1 )
  {
    pkg = "com.pubg.imobile";
    //printf("Package name : %s");
  }
  else if ( pkg_us == 1 )
  {
    pkg = "com.vng.pubgmobile";
    //printf("Package name : %s");
  }
  else if ( pkg_lite == 1 )
  {
    pkg = "com.vng.pubgmobile";
    //printf("Package name : %s");
  }
  else
  {
    if ( pkg_taiwan != 1 )
    {
      puts("PUBGM is not running");
      return 0;
    }
    pkg = "com.rekoo.pubgm";
    //printf("Package name : %s");
  }
puts("\n\n\n تلجرام: @FERRARIVIP\ لا تخمط شغل غيرك يا حلو اتعب على نفسك لكي (تنجح) @\n");
	int SOUFIANE = atoi(argv[1]);
	{
		int ipid = getPID("com.tencent.ig");
		if (ipid == 0)
		{
			ipid = getPID("com.pubg.krmobile");
			if (ipid == 0)
			{
				ipid = getPID("com.rekoo.pubgm");
				if (ipid == 0)
				{
				ipid = getPID("com.vng.pubgmobile");
			if (ipid == 0)
			{
			ipid = getPID("com.vng.pubgmobile");
			if (ipid == 0)
			{
				ipid = getPID("com.pubg.imobile");
				if (ipid == 0)
				{
					ipid = getPID("com.vng.pubgmobile");
					if (ipid == 0)
					{
					puts("\n\n\n تلجرام: @FERRARIVIP\ لا تخمط شغل غيرك يا حلو اتعب على نفسك لكي (تنجح) @\n");
						puts(" Game Not Running!");
						exit(1);
					}
				}
			}
	   	}
				}
			}
		}
		
		char lj[64];
		sprintf(lj, "/proc/%d/mem", ipid);
		handle = open(lj, O_RDWR);
		if (handle == -1)
		{
			exit(1);
		}
		
		
		char mname[] = "libUE4.so";
		long int libbase = get_module_base(ipid, mname);
		
	 	char mnamen[] = "libanogs.so";
         long int libanogs = get_module_base(ipid, mnamen);
		
		switch (SOUFIANE)
		
		{
			
			//تفعيلات 64
			
		case 1:                //  lesssafe64
             FERRARI_DWORD(libbase + 0x265CEAC, 335544357); 
            close(handle);
			break;
			case 2:                //  lesssafe64
             FERRARI_DWORD(libbase + 0x265CEAC, 1275067224); 
            close(handle);
			break;
	
	    case 3:                //  aimbot64on ايم بوت
             FERRARI_DWORD(libbase + 0x3BB814C, 505421832);
            close(handle);
			break;
			
			case 4:                //  aimbot64off ايم بوت
             FERRARI_DWORD(libbase + 0x3BB814C, 505509889);
            close(handle);
			break;
	
			case 5:                //  headshot-on64 هيدشوت
             FERRARI_DWORD(libbase + 0x6D89080, 1110704128);
            close(handle);
			break;
			
			case 6:                //  headshot-off64 هيدشوت
             FERRARI_DWORD(libbase + 0x6D89080, 1036831949);
            close(handle);
			break;
		
			case 7:               //SmallCroshair-on-64 تصغير مأشر
             FERRARI_DWORD(libbase + 0x26609C4, 505425152);  
            close(handle);
			break;
			case 8:               //SmallCroshair-off-64 تصغير مأشر
             FERRARI_DWORD(libbase + 0x26609C4, 505481216);  
            close(handle);
			break;
			
		    case 9:               //Remove Fog64 ازالة ضباب 
             FERRARI_DWORD(libbase + 0x441A854, 706675684); 
            close(handle);
			break;
			case 10:               //Remove Fog64 ازالة ضباب 
             FERRARI_DWORD(libbase + 0x441A854, 505428000); 
            close(handle);
			break;
			
			case 11:               //Instant-on Hit64 اينستاهيد
             FERRARI_DWORD(libbase + 0x516AEC0, 925448456);
            close(handle);
			break;
				
			case 12:               //Instant-off Hit64 اينستاهيد
             FERRARI_DWORD(libbase + 0x516AEC0, 506018056);
            close(handle);
			break;
			case 13:            //ipadon64 منظور ايباد
             FERRARI_DWORD(libbase + 0x70A9C58, 1073741824);
            close(handle);
			break;
			case 14:            //ipadon64off منظور ايباد
             FERRARI_DWORD(libbase + 0x70A9C58, 1065353216);
            close(handle);
			break;
			
			case 15:            //speed-on64 فلاش سبيد
             FERRARI_DWORD(libbase + 0x512F4CC, -788479041);
            close(handle);
			break;
			case 16:          //speed-off64 فلاش سبيد
             FERRARI_DWORD(libbase + 0x512F4CC, 505453824);
            close(handle);
			break;
			
            case 105:            //magic-on64 ماجك بولت
             FERRARI_DWORD(libbase + 0x6D89080, 335544357);
            close(handle);
			break;
			case 106:          //magic-off64 ماجك بولت 
             FERRARI_DWORD(libbase + 0x6D89080, 1036831949);
            close(handle);
			break;
			case 107:            //منظور ايباد تشغيل 64
             FERRARI_DWORD(libbase + 0x6e04b68,0x40000000);
            close(handle);
			break;
			case 108:          //منظور ايباد ايقاف 64
             FERRARI_DWORD(libbase + 0x6e04b68,0x3f800000);
            close(handle);
			break;
			case 109:            //سماء سوداء تشغيل 64
             FERRARI_DWORD(libbase + 0x6e04b6c,-0x48d83a54);
            close(handle);
			break;
			case 110:          // سماء سوداء ايقاف 64
             FERRARI_DWORD(libbase + 0x6e04b6c,0);
            close(handle);
			break;
					
	
		//	تفعيلات 32
		
		
            case 301:            //ثبات سلاح
             FERRARI_FLOAT(libbase + 0x13B7004, 0);
             FERRARI_FLOAT(libbase + 0x3C21938, 0);
            close(handle);
			break;
			
			case 302:          //ثبات سلاح ايقاف 
             FERRARI_FLOAT(libbase + 0x13B7004, -2.786982e28);
             FERRARI_FLOAT(libbase + 0x13B7004, -1.1144502e28);
            close(handle);
			break;
			
			case 304:            //ايم بوت تشغيل 
             FERRARI_FLOAT(libbase + 0x2877280, 0);
             FERRARI_FLOAT(libbase + 0x287728C, 0);
             FERRARI_FLOAT(libbase + 0x28773C0, 0);
            close(handle);
			break;
			
			case 305:          //ايم بوت ايقاف
             FERRARI_FLOAT(libbase + 0x2877280, -2.7898917e28);
             FERRARI_FLOAT(libbase + 0x287728C, 2015175168);
             FERRARI_FLOAT(libbase + 0x28773C0, 0.0001);
            close(handle);
			break;
			
			case 306:            //تصغير مأشر تشغيل 
             FERRARI_FLOAT(libbase + 0x13B75C4, 90);            
            close(handle);
			break;
			
			case 307:          //تصغير مأشر ايقاف
             FERRARI_FLOAT(libbase + 0x13B75C4, -1.1144502e28);            
            close(handle);
			break;			
			
			case 308:            //منظور ايباد تشغيل 
             FERRARI_FLOAT(libbase + 0x3C24C14, 265);            
            close(handle);
			break;
			
			case 3309:          // بيباس لوجو 
            FERRARI_DWORD(libbase + 0x0, -0x29a0fc40);
            FERRARI_DWORD(libbase + 0x238, -0x29a0fc40);  
            FERRARI_DWORD(libbase + 0x200, -0x29a0fc40);
            FERRARI_DWORD(libbase + 0x7033AE0, -0x29a0fc40);  
            FERRARI_DWORD(libbase + 0x7033B00, -0x29a0fc40);
            FERRARI_DWORD(libbase + 0x7033CAC, -0x29a0fc40);  
            FERRARI_DWORD(libbase + 0x7033E00, -0x29a0fc40);
            FERRARI_DWORD(libbase + 0x7033F00, -0x29a0fc40);  
            FERRARI_DWORD(libbase + 0x7034000, -0x29a0fc40);
            FERRARI_DWORD(libbase + 0x70340A0, -0x29a0fc40);  
            FERRARI_DWORD(libbase + 0x70340B0, -0x29a0fc40);
            FERRARI_DWORD(libbase + 0x7034100, -0x29a0fc40);  
            FERRARI_DWORD(libbase + 0x6F4680, -0x29a0fc40);                                     FERRARI_DWORD(libbase + 0x72F06A0, -0x29a0fc40);
            FERRARI_DWORD(libbase + 0x72F06A8, -0x29a0fc40);  
            FERRARI_DWORD(libbase + 0x72F06AC, -0x29a0fc40);
            FERRARI_DWORD(libbase + 0x72F06B0, -0x29a0fc40);  
            FERRARI_DWORD(libbase + 0x72F06C4, -0x29a0fc40);
            FERRARI_DWORD(libbase + 0x72F1D14, -0x29a0fc40);  
            FERRARI_DWORD(libbase + 0x72F1FF0, -0x29a0fc40);
            FERRARI_DWORD(libbase + 0x72F1D14, -0x29a0fc40);  
            FERRARI_DWORD(libbase + 0x72F1FA0, -0x29a0fc40);
            FERRARI_DWORD(libbase + 0x72F1FC8, -0x29a0fc40); 
            FERRARI_DWORD(libbase + 0x1F5CC90, -0x29a0fc40);  
            FERRARI_DWORD(libbase + 0x2281B08, -0x29a0fc40);                                    FERRARI_DWORD(libbase + 0x1F5A3C0, -0x29a0fc40);
            FERRARI_DWORD(libbase + 0x1F5A4E0, -0x29a0fc40);
            FERRARI_DWORD(libbase + 0x1F5B680, -0x29a0fc40);
            FERRARI_DWORD(libbase + 0x1F5BDE0, -0x29a0fc40);
            FERRARI_DWORD(libbase + 0x1F5C040, -0x29a0fc40);
            FERRARI_DWORD(libbase + 0x1F5C020, -0x29a0fc40);
            FERRARI_DWORD(libbase + 0x1F5C450, -0x29a0fc40);
            FERRARI_DWORD(libbase + 0x1F5C540, -0x29a0fc40);          
            FERRARI_DWORD(libanogs + 0x49E0CC, -0x29a0fc40);
            FERRARI_DWORD(libanogs + 0x49E0D0, -0x29a0fc40);  
            FERRARI_DWORD(libanogs + 0x49E0D4, -0x29a0fc40);
            FERRARI_DWORD(libanogs + 0x49E0D8, -0x29a0fc40);  
            FERRARI_DWORD(libanogs + 0x49E144, -0x29a0fc40);
            FERRARI_DWORD(libanogs + 0x49E148, -0x29a0fc40);  
            FERRARI_DWORD(libanogs + 0x49E14C, -0x29a0fc40);
            FERRARI_DWORD(libanogs + 0x49E150, -0x29a0fc40);  
            FERRARI_DWORD(libanogs + 0x49E15C, -0x29a0fc40);
            FERRARI_DWORD(libanogs + 0x49E164, -0x29a0fc40);  
            FERRARI_DWORD(libanogs + 0x49E16C, -0x29a0fc40);
            FERRARI_DWORD(libanogs + 0x49E174, -0x29a0fc40);  
            FERRARI_DWORD(libanogs + 0x49E17C, -0x29a0fc40);
            FERRARI_DWORD(libanogs + 0x49E184, -0x29a0fc40);  
            FERRARI_DWORD(libanogs + 0x49E18C, -0x29a0fc40);
            FERRARI_DWORD(libanogs + 0x49E19C, -0x29a0fc40);  
            FERRARI_DWORD(libanogs + 0x49E1A0, -0x29a0fc40);
            FERRARI_DWORD(libanogs + 0x49E194, -0x29a0fc40);  
            FERRARI_DWORD(libanogs + 0x49E1C8, -0x29a0fc40);
            FERRARI_DWORD(libanogs + 0x49E1B8, -0x29a0fc40);  
            FERRARI_DWORD(libanogs + 0x49E1E8, -0x29a0fc40);
            FERRARI_DWORD(libanogs + 0x49E04C, -0x29a0fc40);  
            FERRARI_DWORD(libanogs + 0x49E050, -0x29a0fc40);
            FERRARI_DWORD(libanogs + 0x49E208, -0x29a0fc40);  
            FERRARI_DWORD(libanogs + 0x49E220, -0x29a0fc40);
            FERRARI_DWORD(libanogs + 0x49E228, -0x29a0fc40);  
            FERRARI_DWORD(libanogs + 0xa6240, -0x29a0fc40);

                                                                                                   
            close(handle);                         
            break;                        
            case 311:          //   خلطة هيدشوت ليب                                                                  
            
            
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               
            close(handle);
			break;	
																				
//تفعيلات خطيرة
case 17:  //  speed-on سرعة وسط
ClearResults();
SetSearchRange(A_ANONMYOUS);
MemorySearch(pkg,"1",&gs,FLOAT);
MemoryOffset(pkg,"20",16,&gs,FLOAT);
MemoryWrite(pkg,"1.5",0,FLOAT);
ClearResults();
close(handle);
break;	

case 18:  //  speed-off سرعة وسط
ClearResults();
SetSearchRange(A_ANONMYOUS);
MemorySearch(pkg,"1.5",&gs,FLOAT);
MemoryOffset(pkg,"20",16,&gs,FLOAT);
MemoryWrite(pkg,"1",0,FLOAT);
ClearResults();
close(handle);
break;	

																																																
case 19:  //  headshot-on هيدشوت 
ClearResults();
SetSearchRange(A_ANONMYOUS);
SetSearchRange(ALL);
MemorySearch(pkg,"9.201618194580078",&gs,FLOAT);
MemoryOffset(pkg,"25.0",28,&gs,FLOAT);
MemoryOffset(pkg,"30.5",32,&gs,FLOAT);
MemoryWrite(pkg,"150.0",28,FLOAT);
MemoryWrite(pkg,"150.0",32,FLOAT);
close(handle);
break;
case 20:  //  headshot-off هيدشوت
ClearResults();
SetSearchRange(A_ANONMYOUS);
MemorySearch(pkg,"9.201618194580078",&gs,FLOAT);
MemoryOffset(pkg,"150.0",28,&gs,FLOAT);
MemoryOffset(pkg,"150.0",32,&gs,FLOAT);
MemoryWrite(pkg,"25.0",28,FLOAT);
MemoryWrite(pkg,"30.5",32,FLOAT);
ClearResults();		
close(handle);
break;
			
case 21:   //  xhiton تاثير قتل
ClearResults();
SetSearchRange(A_ANONMYOUS);
MemorySearch(pkg,"10",&gs,FLOAT);
MemoryOffset(pkg,"46",4,&gs,FLOAT);
MemoryOffset(pkg,"45",28,&gs,FLOAT);
MemoryOffset(pkg,"45",32,&gs,FLOAT);
MemoryWrite(pkg,"7777",0,FLOAT);
MemorySearch(pkg,"10",&gs,FLOAT);
MemoryOffset(pkg,"46",4,&gs,FLOAT);
MemoryOffset(pkg,"135",28,&gs,FLOAT);
MemoryOffset(pkg,"135",32,&gs,FLOAT);
MemoryWrite(pkg,"7777",0,FLOAT);
MemorySearch(pkg,"10",&gs,FLOAT);
MemoryOffset(pkg,"46",4,&gs,FLOAT);
MemoryOffset(pkg,"225",28,&gs,FLOAT);
MemoryOffset(pkg,"225",32,&gs,FLOAT);
MemoryWrite(pkg,"7777",0,FLOAT);
MemorySearch(pkg,"10",&gs,FLOAT);
MemoryOffset(pkg,"46",4,&gs,FLOAT);
MemoryOffset(pkg,"315",28,&gs,FLOAT);
MemoryOffset(pkg,"315",32,&gs,FLOAT);
MemoryWrite(pkg,"7777",0,FLOAT);
ClearResults();
close(handle);
break;

case 22:   //  xhitoff تاثير قتل
ClearResults();
SetSearchRange(A_ANONMYOUS);
MemorySearch(pkg,"7777",&gs,FLOAT);
MemoryOffset(pkg,"46",4,&gs,FLOAT);
MemoryOffset(pkg,"45",28,&gs,FLOAT);
MemoryOffset(pkg,"45",32,&gs,FLOAT);
MemoryWrite(pkg,"10",0,FLOAT);
MemorySearch(pkg,"7777",&gs,FLOAT);
MemoryOffset(pkg,"46",4,&gs,FLOAT);
MemoryOffset(pkg,"135",28,&gs,FLOAT);
MemoryOffset(pkg,"135",32,&gs,FLOAT);
MemoryWrite(pkg,"10",0,FLOAT);
MemorySearch(pkg,"7777",&gs,FLOAT);
MemoryOffset(pkg,"46",4,&gs,FLOAT);
MemoryOffset(pkg,"225",28,&gs,FLOAT);
MemoryOffset(pkg,"225",32,&gs,FLOAT);
MemoryWrite(pkg,"10",0,FLOAT);
MemorySearch(pkg,"7777",&gs,FLOAT);
MemoryOffset(pkg,"46",4,&gs,FLOAT);
MemoryOffset(pkg,"315",28,&gs,FLOAT);
MemoryOffset(pkg,"315",32,&gs,FLOAT);
MemoryWrite(pkg,"10",0,FLOAT);
ClearResults();
close(handle);
break;

						
case 23:   //  majckon ماجك بولت
ClearResults();
SetSearchRange(A_ANONMYOUS);
MemorySearch(pkg,"25;30.5",&gs,FLOAT);
MemoryOffset(pkg,"90",-12,&gs,FLOAT);
MemoryWrite(pkg,"300",0,FLOAT);
ClearResults();
SetSearchRange(A_ANONMYOUS);
MemorySearch(pkg,"9.201618194580078",&gs,FLOAT);
MemoryOffset(pkg,"25.0",28,&gs,FLOAT);
MemoryOffset(pkg,"30.5",32,&gs,FLOAT);
MemoryWrite(pkg,"180",28,FLOAT);
MemoryWrite(pkg,"180",32,FLOAT);
ClearResults();
close(handle);
break;
case 24:   //  majckoff ماجك بولت
ClearResults();
SetSearchRange(A_ANONMYOUS);
MemorySearch(pkg,"300",&gs,FLOAT);
MemoryOffset(pkg,"90",-12,&gs,FLOAT);
MemoryWrite(pkg,"25;30.5",0,FLOAT);
MemorySearch(pkg,"9.201618194580078",&gs,FLOAT);
MemoryOffset(pkg,"180",28,&gs,FLOAT);
MemoryOffset(pkg,"180",32,&gs,FLOAT);
MemoryWrite(pkg,"25.0",28,FLOAT);
MemoryWrite(pkg,"30.0",32,FLOAT);
ClearResults();
close(handle);
break;			



case 27:   //  hegdmj^on خلطة 
ClearResults();
SetSearchRange(A_ANONMYOUS);
MemorySearch(pkg,"9.201618194580078",&gs,FLOAT);
MemoryOffset(pkg,"25.0",28,&gs,FLOAT);
MemoryOffset(pkg,"30.5",32,&gs,FLOAT);
MemoryWrite(pkg,"200",28,FLOAT);
MemoryWrite(pkg,"200",32,FLOAT);
ClearResults();
SetSearchRange(A_ANONMYOUS);
MemorySearch(pkg,"25;30.5",&gs,FLOAT);
MemoryOffset(pkg,"90",-12,&gs,FLOAT);
MemoryWrite(pkg,"300",0,FLOAT);
ClearResults();
SetSearchRange(A_ANONMYOUS);
MemorySearch(pkg,"16",&gs,FLOAT);
MemoryOffset(pkg,"26",4,&gs,FLOAT);
MemoryOffset(pkg,"18",80,&gs,FLOAT);
MemoryOffset(pkg,"28",84,&gs,FLOAT);
MemoryOffset(pkg,"8",100,&gs,FLOAT);
MemoryOffset(pkg,"15",104,&gs,FLOAT);
MemoryOffset(pkg,"18",180,&gs,FLOAT);
MemoryWrite(pkg,"-1339",0,FLOAT);
MemoryWrite(pkg,"-1339",4,FLOAT);
MemoryWrite(pkg,"-1339",80,FLOAT);
MemoryWrite(pkg,"-1339",84,FLOAT);
MemoryWrite(pkg,"-1339",100,FLOAT);
MemoryWrite(pkg,"-1339",104,FLOAT);
MemoryWrite(pkg,"-1339",180,FLOAT);
ClearResults();
SetSearchRange(A_ANONMYOUS);
MemorySearch(pkg,"10",&gs,FLOAT);
MemoryOffset(pkg,"46",4,&gs,FLOAT);
MemoryOffset(pkg,"45",28,&gs,FLOAT);
MemoryOffset(pkg,"45",32,&gs,FLOAT);
MemoryWrite(pkg,"7777",0,FLOAT);
MemorySearch(pkg,"10",&gs,FLOAT);
MemoryOffset(pkg,"46",4,&gs,FLOAT);
MemoryOffset(pkg,"135",28,&gs,FLOAT);
MemoryOffset(pkg,"135",32,&gs,FLOAT);
MemoryWrite(pkg,"7777",0,FLOAT);
MemorySearch(pkg,"10",&gs,FLOAT);
MemoryOffset(pkg,"46",4,&gs,FLOAT);
MemoryOffset(pkg,"225",28,&gs,FLOAT);
MemoryOffset(pkg,"225",32,&gs,FLOAT);
MemoryWrite(pkg,"7777",0,FLOAT);
MemorySearch(pkg,"10",&gs,FLOAT);
MemoryOffset(pkg,"46",4,&gs,FLOAT);
MemoryOffset(pkg,"315",28,&gs,FLOAT);
MemoryOffset(pkg,"315",32,&gs,FLOAT);
MemoryWrite(pkg,"7777",0,FLOAT);
ClearResults();
close(handle);
break;



case 277:   //  hegdmj^offخلطة 
ClearResults();
SetSearchRange(A_ANONMYOUS);
MemorySearch(pkg,"7777",&gs,FLOAT);
MemoryOffset(pkg,"46",4,&gs,FLOAT);
MemoryOffset(pkg,"135",28,&gs,FLOAT);
MemoryOffset(pkg,"135",32,&gs,FLOAT);
MemoryWrite(pkg,"10",0,FLOAT);
MemorySearch(pkg,"7777",&gs,FLOAT);
MemoryOffset(pkg,"46",4,&gs,FLOAT);
MemoryOffset(pkg,"225",28,&gs,FLOAT);
MemoryOffset(pkg,"225",32,&gs,FLOAT);
MemoryWrite(pkg,"10",0,FLOAT);
MemorySearch(pkg,"7777",&gs,FLOAT);
MemoryOffset(pkg,"46",4,&gs,FLOAT);
MemoryOffset(pkg,"315",28,&gs,FLOAT);
MemoryOffset(pkg,"315",32,&gs,FLOAT);
MemoryWrite(pkg,"10",0,FLOAT);
ClearResults();
close(handle);
break;
						

case 28:  //  parsh-on نزل سريع
ClearResults();
SetSearchRange(A_ANONMYOUS);
MemorySearch(pkg,"0.00050000002",&gs,FLOAT);
MemoryOffset(pkg,"20",-4,&gs,FLOAT);
MemoryWrite(pkg,"0.10000000149",0,FLOAT);
ClearResults();
close(handle);
break;	

case 29:  //  parsh-off نزول سريع
ClearResults();
SetSearchRange(A_ANONMYOUS);
MemorySearch(pkg,"0.10000000149",&gs,FLOAT);
MemoryOffset(pkg,"20",-4,&gs,FLOAT);
MemoryWrite(pkg,"0.00050000002",0,FLOAT);
ClearResults();
close(handle);
break;	


case 30:  //  fly-on طيران جيب 
ClearResults();
SetSearchRange(A_ANONMYOUS);
MemorySearch(pkg,"-980.0",&gs,FLOAT);
MemoryOffset(pkg,"200",32,&gs,FLOAT);
MemoryOffset(pkg,"100",44,&gs,FLOAT);
MemoryWrite(pkg,"20000",0,FLOAT);
ClearResults();
close(handle);
break;	

case 40:  //  fly-off طيران جيب
ClearResults();
SetSearchRange(A_ANONMYOUS);
MemorySearch(pkg,"20000",&gs,FLOAT);
MemoryOffset(pkg,"200",32,&gs,FLOAT);
MemoryOffset(pkg,"100",44,&gs,FLOAT);
MemoryWrite(pkg,"-980.0",0,FLOAT);
ClearResults();
close(handle);
break;	
 

case 41:  //  ipad-on منظور ايباد
ClearResults();
SetSearchRange(A_ANONMYOUS);
MemorySearch(pkg, "178.0", &gs, FLOAT);
MemoryOffset(pkg, "220.0", -24, &gs, FLOAT);
MemoryOffset(pkg, "15.0", 4, &gs, FLOAT);
MemoryWrite(pkg, "400", -24, FLOAT);
ClearResults();
close(handle);
break;	

case 42:  //  ipad-off منظور ايباد
ClearResults();
SetSearchRange(A_ANONMYOUS);
MemorySearch(pkg, "178.0", &gs, FLOAT);
MemoryOffset(pkg, "400", -24, &gs, FLOAT);
MemoryOffset(pkg, "15.0", 4, &gs, FLOAT);
MemoryWrite(pkg, "220", -24, FLOAT);
ClearResults(); 
close(handle);
break;	


case 43:  //  less on
ClearResults();
SetSearchRange(A_ANONMYOUS);
MemorySearch(pkg,"1.40129846e-45",&gs,FLOAT);
MemoryOffset(pkg,"9.5",120,&gs,FLOAT);
MemoryWrite(pkg,"0",0,FLOAT);
ClearResults();
close(handle); 
break;	

case 44:  // less off
ClearResults();
SetSearchRange(A_ANONMYOUS);
MemorySearch(pkg,"0",&gs,FLOAT);
MemoryOffset(pkg,"9.5",120,&gs,FLOAT);
MemoryWrite(pkg,"1.40129846e-45",0,FLOAT);
ClearResults();
close(handle);
break;	


case 45:  //  SmallCross-ON
ClearResults();
SetSearchRange(A_ANONMYOUS);
MemorySearch(pkg,"1.09375",&gs,FLOAT);
MemoryOffset(pkg,"3.359999895095825",-4,&gs,FLOAT);
MemoryWrite(pkg,"0",-4,FLOAT);
ClearResults();
close(handle); 
break;	

case 46:  // SmallCross-OFF
ClearResults();
SetSearchRange(A_ANONMYOUS);
MemorySearch(pkg,"1.09375",&gs,FLOAT);
MemoryOffset(pkg,"0",-4,&gs,FLOAT);
MemoryWrite(pkg,"3.359999895095825",-4,FLOAT);                                                   
close(handle);
break;	
case 47:  //  aimbot-on
ClearResults();
SetSearchRange(A_ANONMYOUS);
        MemorySearch(pkg,"200.0",&gs,FLOAT);
        MemoryOffset(pkg,"3.5",-56,&gs,FLOAT);
        MemoryOffset(pkg,"1.0",-52,&gs,FLOAT);
        MemoryOffset(pkg,"1.0",-48,&gs,FLOAT);
        MemoryOffset(pkg,"1.0",-44,&gs,FLOAT);
        MemoryOffset(pkg,"1.0",-40,&gs,FLOAT);
        MemoryOffset(pkg,"1.0",-36,&gs,FLOAT);
        MemoryOffset(pkg,"20.0",4,&gs,FLOAT);
        MemoryWrite(pkg,"250",0,FLOAT);
        MemoryWrite(pkg,"7.5",-56,FLOAT);
        MemoryWrite(pkg,"5",-52,FLOAT);
        MemoryWrite(pkg,"5",-48,FLOAT);
        MemoryWrite(pkg,"5",-44,FLOAT);
        MemoryWrite(pkg,"5",-40,FLOAT);
        MemoryWrite(pkg,"5",-36,FLOAT);
        MemoryWrite(pkg,"25",4,FLOAT);
        ClearResults();
close(handle); 
break;	

case 48:  // aimbot_off
ClearResults();
SetSearchRange(A_ANONMYOUS);
        MemorySearch(pkg,"250",&gs,FLOAT);
        MemoryOffset(pkg,"7.5",-56,&gs,FLOAT);
        MemoryOffset(pkg,"5",-52,&gs,FLOAT);
        MemoryOffset(pkg,"5",-48,&gs,FLOAT);
        MemoryOffset(pkg,"5",-44,&gs,FLOAT);
        MemoryOffset(pkg,"5",-40,&gs,FLOAT);
        MemoryOffset(pkg,"5",-36,&gs,FLOAT);
        MemoryOffset(pkg,"25",4,&gs,FLOAT);
        MemoryWrite(pkg,"200.0",0,FLOAT);
        MemoryWrite(pkg,"3.5",-56,FLOAT);
        MemoryWrite(pkg,"1.0",-52,FLOAT);
        MemoryWrite(pkg,"1.0",-48,FLOAT);
        MemoryWrite(pkg,"1.0",-44,FLOAT);
        MemoryWrite(pkg,"1.0",-40,FLOAT);
        MemoryWrite(pkg,"1.0",-36,FLOAT);
        MemoryWrite(pkg,"20.0",4,FLOAT);
        ClearResults();
close(handle);
break;	



case 49:  //  FlashSpeed-ON
ClearResults();
SetSearchRange(A_ANONMYOUS);
MemorySearch(pkg,"0.00050000002",&gs,FLOAT);
MemoryOffset(pkg,"0.40000000596",4,&gs,FLOAT);
MemoryWrite(pkg,"0.10000000149",0,FLOAT);
ClearResults();
close(handle); 
break;	

case 50:  // FlashSpeed-OFF
ClearResults();
SetSearchRange(A_ANONMYOUS);
MemorySearch(pkg,"0.10000000149",&gs,FLOAT);
MemoryOffset(pkg,"0.40000000596",4,&gs,FLOAT);
MemoryWrite(pkg,"0.00050000002",0,FLOAT);
ClearResults();
close(handle);
break;	


case 51:  // less on
ClearResults();
SetSearchRange(A_ANONMYOUS); 
MemorySearch(pkg,"0.30000001192",&gs,FLOAT);
MemoryOffset(pkg,"30",-8,&gs,FLOAT);
MemoryOffset(pkg,"30",-12,&gs,FLOAT);
MemoryWrite(pkg,"200",-0,FLOAT);
ClearResults();
SetSearchRange(ALL);
MemorySearch(pkg,"1.0",&gs,FLOAT);
MemoryOffset(pkg,"1.0",4,&gs,FLOAT);
MemoryOffset(pkg,"5.04467447e-44",8,&gs,FLOAT);
MemoryOffset(pkg,"1.0",12,&gs,FLOAT);
MemoryWrite(pkg,"0.00100000005",0,FLOAT);
ClearResults();
 ClearResults();     
close(handle); 
break;	

case 52:  // less off
ClearResults();
SetSearchRange(A_ANONMYOUS);
    MemorySearch(pkg,"0",&gs,FLOAT); 
    MemoryOffset(pkg,"-2",8,&gs,FLOAT);
    MemoryOffset(pkg,"0",440,&gs,FLOAT); 
    MemoryOffset(pkg,"1",444,&gs,FLOAT);
    MemoryWrite(pkg,"0.9986295104",1764,FLOAT); 
    ClearResults();     
close(handle);
break;

	

                    case 53:  // هيدشوت on 75	
                    ClearResults();
                    SetSearchRange(A_ANONMYOUS);
                    MemorySearch(pkg, "9.201618194580078", &gs, FLOAT);
                    MemoryOffset(pkg, "25.0", 28, &gs, FLOAT);
                    MemoryOffset(pkg, "30.5", 32, &gs, FLOAT);
                    MemoryWrite(pkg, "120.0", 28, FLOAT);
                    MemoryWrite(pkg, "120.0", 32, FLOAT);
                    ClearResults();
                    close(handle);
                    break;
                    case 54:  // هيدشوت off 75
                    ClearResults();
                    SetSearchRange(A_ANONMYOUS);
                    MemorySearch(pkg, "9.201618194580078", &gs, FLOAT);
                    MemoryOffset(pkg, "120.0", 28, &gs, FLOAT);
                    MemoryOffset(pkg, "120.0", 32, &gs, FLOAT);
                    MemoryWrite(pkg, "25.0", 28, FLOAT);
                    MemoryWrite(pkg, "30.5", 32, FLOAT);
                    ClearResults();
                     close(handle);                  
                    break;
                    case 55:  // هيدشوت on 50
                    ClearResults();
                    SetSearchRange(A_ANONMYOUS);
                    MemorySearch(pkg, "9.201618194580078", &gs, FLOAT);
                    MemoryOffset(pkg, "25.0", 28, &gs, FLOAT);
                    MemoryOffset(pkg, "30.5", 32, &gs, FLOAT);
                    MemoryWrite(pkg, "90.0", 28, FLOAT);
                    MemoryWrite(pkg, "90.0", 32, FLOAT);
                    ClearResults();
                    break;	                    
                    case 56:  // هيدشوت on 50
                    ClearResults();
                    SetSearchRange(A_ANONMYOUS);
                    MemorySearch(pkg, "9.201618194580078", &gs, FLOAT);
                    MemoryOffset(pkg, "90.0", 28, &gs, FLOAT);
                    MemoryOffset(pkg, "90.0", 32, &gs, FLOAT);
                    MemoryWrite(pkg, "25.0", 28, FLOAT);
                    MemoryWrite(pkg, "30.5", 32, FLOAT);
                    ClearResults();
                    break;	
                    case 57:  // ايمبوت ٣٦٠ on 
                    ClearResults();
                    SetSearchRange(A_ANONMYOUS);
                    MemorySearch(pkg, "200.0", &gs, FLOAT);
                    MemoryOffset(pkg, "3.5", -56, &gs, FLOAT);
                    MemoryOffset(pkg, "1.0", -52, &gs, FLOAT);
                    MemoryOffset(pkg, "1.0", -48, &gs, FLOAT);
                    MemoryOffset(pkg, "1.0", -44, &gs, FLOAT);
                    MemoryOffset(pkg, "1.0", -40, &gs, FLOAT);
                    MemoryOffset(pkg, "1.0", -36, &gs, FLOAT);
                    MemoryOffset(pkg, "20.0", 4, &gs, FLOAT);
                    MemoryWrite(pkg, "500", 0, FLOAT);
                    MemoryWrite(pkg, "500", -56, FLOAT);
                    MemoryWrite(pkg, "500", -52, FLOAT);
                    MemoryWrite(pkg, "500", -48, FLOAT);
                    MemoryWrite(pkg, "500", -44, FLOAT);
                    MemoryWrite(pkg, "500", -40, FLOAT);
                    MemoryWrite(pkg, "500", -36, FLOAT);
                    MemoryWrite(pkg, "500", 4, FLOAT);
                    ClearResults();
                    break;	
                    case 58:  // ايمبوت ٣٦٠ off
                    ClearResults();
                    SetSearchRange(A_ANONMYOUS);
                    MemorySearch(pkg, "500", &gs, FLOAT);
                    MemoryOffset(pkg, "500", -56, &gs, FLOAT);
                    MemoryOffset(pkg, "500", -52, &gs, FLOAT);
                    MemoryOffset(pkg, "500", -48, &gs, FLOAT);
                    MemoryOffset(pkg, "500", -44, &gs, FLOAT);
                    MemoryOffset(pkg, "500", -40, &gs, FLOAT);
                    MemoryOffset(pkg, "500", -36, &gs, FLOAT);
                    MemoryOffset(pkg, "500", 4, &gs, FLOAT);
                    MemoryWrite(pkg, "200.0", 0, FLOAT);
                    MemoryWrite(pkg, "3.5", -56, FLOAT);
                    MemoryWrite(pkg, "1.0", -52, FLOAT);
                    MemoryWrite(pkg, "1.0", -48, FLOAT);
                    MemoryWrite(pkg, "1.0", -44, FLOAT);
                    MemoryWrite(pkg, "1.0", -40, FLOAT);
                    MemoryWrite(pkg, "1.0", -36, FLOAT);
                    MemoryWrite(pkg, "20.0", 4, FLOAT);
                    ClearResults();
                    break;	
                    case 59:  // سماء سوداء on
                     ClearResults();
                     SetSearchRange(A_ANONMYOUS); 
                     MemorySearch(pkg,"3.4028235e38",&gs,FLOAT);
                     MemoryOffset(pkg,"0.05000000075",4,&gs,FLOAT);
                     MemoryWrite(pkg,"100",4,FLOAT);
                     ClearResults();
                    break;	
                    case 60:  // سماء سوداء off
                    ClearResults(); 
                    SetSearchRange(A_ANONMYOUS);
                    MemorySearch(pkg,"3.4028235e38",&gs,FLOAT);
                    MemoryOffset(pkg,"100",4,&gs,FLOAT);
                    MemoryWrite(pkg,"0.05000000075",4,FLOAT);
                    ClearResults();
                    break;	
                    case 61:  // هيدشوت 100 on
                    ClearResults();
                    SetSearchRange(A_ANONMYOUS);
                    MemorySearch(pkg, "9.201618194580078", &gs, FLOAT);
                    MemoryOffset(pkg, "25.0", 28, &gs, FLOAT);
                    MemoryOffset(pkg, "30.5", 32, &gs, FLOAT);
                    MemoryWrite(pkg, "250", 28, FLOAT);
                    MemoryWrite(pkg, "250", 32, FLOAT);
                    MemoryWrite(pkg, "250", 28, FLOAT);
                    MemoryWrite(pkg, "250", 32, FLOAT);
                    ClearResults();
                    break;	
                    case 62:  // هيدشوت 100 off
                    ClearResults();
                    SetSearchRange(A_ANONMYOUS);
                    MemorySearch(pkg, "9.201618194580078", &gs, FLOAT);
                    MemoryOffset(pkg, "250.0", 28, &gs, FLOAT);
                    MemoryOffset(pkg, "250.0", 32, &gs, FLOAT);
                    MemoryWrite(pkg, "25.0", 28, FLOAT);
                    MemoryWrite(pkg, "30.5", 32, FLOAT);
                    MemoryWrite(pkg, "25.0", 28, FLOAT);
                    MemoryWrite(pkg, "30.5", 32, FLOAT);
                    ClearResults();
                    break;
                    case 63:  //
                    ClearResults();
                    SetSearchRange(A_ANONMYOUS);
                    MemorySearch(pkg,"3.99622296e-41",&gs,FLOAT);
                    MemoryOffset(pkg,"1.5584387e28",-4,&gs,FLOAT);
                    MemoryWrite(pkg,"0",-0,FLOAT);
                    ClearResults();                   
                    break;
                    case 64:  //   on سيت سكوب
                    ClearResults();
                    SetSearchRange(A_ANONMYOUS);
                    MemorySearch(pkg, "-3.4223251342773438", &gs, FLOAT);
                    MemoryOffset(pkg, "18.38787841796875", -8, &gs, FLOAT);
                    MemoryOffset(pkg, "0.538672924041748", -4, &gs, FLOAT);
                    MemoryWrite(pkg, "120", -8, FLOAT);
                    ClearResults();                       
                    break; 
                    case 65:  //   off سيت سكوب    
                    ClearResults();  
                    SetSearchRange(A_ANONMYOUS);
                    MemorySearch(pkg, "-3.4223251342773438", &gs, FLOAT);
                    MemoryOffset(pkg, "120.0", -8, &gs, FLOAT);
                    MemoryOffset(pkg, "0.538672924041748", -4, &gs, FLOAT);
                    MemoryWrite(pkg, "18.38787841796875", -8, FLOAT);
                    ClearResults();  
                    break;     	         
                    case 66:  //   on ستاند سكوب      
                    ClearResults();     
                    SetSearchRange(A_ANONMYOUS);
                    MemorySearch(pkg, "0.0060901641845703125", &gs, FLOAT);
                    MemoryOffset(pkg, "23.52225685119629", -8, &gs, FLOAT);
                    MemoryOffset(pkg, "2.2840499877929688E-4", -4, &gs, FLOAT);
                    MemoryWrite(pkg, "100", -8, FLOAT);
                    MemoryWrite(pkg, "200", -4, FLOAT);
                    ClearResults();   
                    break;                                     	                                        
                    case 67:  //   off ستاند سكوب      
                    ClearResults(); 
                    SetSearchRange(A_ANONMYOUS);
                    MemorySearch(pkg, "0.0060901641845703125", &gs, FLOAT);
                    MemoryOffset(pkg, "100.0", -8, &gs, FLOAT);
                    MemoryOffset(pkg, "200.0", -4, &gs, FLOAT);
                    MemoryWrite(pkg, "23.52225685119629", -8, FLOAT);
                    MemoryWrite(pkg, "2.2840499877929688E-4", -4, FLOAT);
                    ClearResults();
                    break;    
                    case 68:  //      
                    SetSearchRange(C_ALLOC);
MemorySearch(pkg,("67109633"),&gs,DWORD);
printf("Found: %d\n",gs);
MemoryWrite(pkg,("657"),0,DWORD);
ClearResults();
SetSearchRange(OTHER);
MemorySearch(pkg,("67109633"),&gs,DWORD);
printf("Found: %d\n",gs);
MemoryWrite(pkg,("657"),0,DWORD);

                    break;            
                       
                    case 69:  //         
                    SetSearchRange(C_ALLOC);
MemorySearch(pkg,("131842"),&gs,DWORD);
printf("Found: %d\n",gs);
MemoryWrite(pkg,("657"),0,DWORD);
ClearResults();
SetSearchRange(OTHER);
MemorySearch(pkg,("131842"),&gs,DWORD);
printf("Found: %d\n",gs);
MemoryWrite(pkg,("657"),0,DWORD);   
                    break;                                    
                    case 70:  //   
                    SetSearchRange(C_ALLOC);
MemorySearch(pkg,"133634",&gs,DWORD);
printf("Found: %d\n",gs);
MemoryWrite(pkg,"657",0,DWORD);
ClearResults();
SetSearchRange(OTHER);
MemorySearch(pkg,"133634",&gs,DWORD);
printf("Found: %d\n",gs);
MemoryWrite(pkg,"657",0,DWORD);
                    break;                            
                   case 71:  //        
                   SetSearchRange(C_ALLOC);
MemorySearch(pkg,"131586",&gs,DWORD);
printf("Found: %d\n",gs);
MemoryWrite(pkg,"657",0,DWORD);
ClearResults();
SetSearchRange(OTHER);
MemorySearch(pkg,"131586",&gs,DWORD);
printf("Found: %d\n",gs);
MemoryWrite(pkg,"657",0,DWORD);
       
                   break;                 
                   case 72:  // 
                   SetSearchRange(C_ALLOC);
MemorySearch(pkg,"133378",&gs,DWORD);
printf("Found: %d\n",gs);
MemoryWrite(pkg,"657",0,DWORD);

SetSearchRange(OTHER);
MemorySearch(pkg,"133378",&gs,DWORD);
printf("Found: %d\n",gs);
MemoryWrite(pkg,"657",0,DWORD);
ClearResults();
break;            
case 73:  //        
SetSearchRange(C_ALLOC);
MemorySearch(pkg,"144387",&gs,DWORD);
printf("Found: %d\n",gs);
MemoryWrite(pkg,"657",0,DWORD);

SetSearchRange(OTHER);
MemorySearch(pkg,"144,387",&gs,DWORD);
printf("Found: %d\n",gs);
MemoryWrite(pkg,"657",0,DWORD);
ClearResults();

                   break;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          	                                                                         	                                                                         	                                                                                	                                                                         	                                                                         	                                        
                    puts("\n\n█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█\n    THIS APK MADE BY : @FERRARIVIP  ,  CHANNEL :- @FERRARIVIP1  \n\n                       FERRARI VIP \n█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");				
                    puts("\n\n█▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█\n    تم صنع التطبيق بواسطة : @FERRARIVIP  ,  قناة :- @FERRARIVIP1  \n\n                       FERRARI VIP \n█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█\n");				


	

                    	                    	                    
                    


		
								
		}
	}
}





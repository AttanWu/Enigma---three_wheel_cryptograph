//
//  main.c
//  three_wheel_cryptograph
//
//  Created by Attan Wu on 2017/3/10.
//  Copyright © 2017年 Attan Wu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int getBf(char *s){
    char temp[3]={"0"};
    int i=0 ;
    int bf;
    int sLength = (int)strlen(s);
    
    for (int j=0; j<sLength ; j++) {
        if (s[j] != 95) {             //95为acsii "_"
            temp[i] = s[j];
            i++;
        }else { i=0; break; }
    }
    bf = atoi(temp);
    return bf;
}

int getAf(char *s){
    char temp[3]={"0"};
    int i=0;
    int af;
    int sLength = (int)strlen(s);
    int j=0;
    while (s[j]!=95)
    {j++;}
        j++;
    for (; j<sLength; j++) {
        temp[i] = s[j];
        i++;
    }
    i=0;
    af = atoi(temp);
    return af;
}

char* clearOthers(char *s){
    int i = 0;
    int strLen = (int)strlen(s);
    while (s[i]) {
        while (   !isalpha(s[i]) && s[i]  )
        {
            for (int j = i ; j < strLen ; j++) {
                s[j] = s[j+1];
            }
        
        }
            
        i++;
        
    }

    return s ;
}

char* upToDown(char *s){   //*s=&a
    int i = 0;
    while (s[i]) {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
        i++;
    }
    return s;
//    while (*s) {
//        if (*s >= 'A' && *s <= 'Z')
//            *s += 32;
//            s++;
//        }
//    return s;
}

int toNum(char s){
    int n ;
    n=(int) (s-97);

    return n;

}

char toChar( int i){
    char s;
    s = (char) (i+97);
    
    return s;
}


char* reverse(char *s){
    int slen;
    int j=0;
    slen =(int) strlen(s);
    char *stemp=(char*)malloc(slen*sizeof(char));
    for (int i=slen-1; i>=0; i--) {
        stemp[j] = s[i];
        j++;
    }
    
    return stemp;
    
}
int main() {
    
    char* s[26]; //开了26个指针，每个指针指向一个char类型字符串
    char* m[26];
    char* q[26];
    char  tempSmq[10] = {"0"};
    
    for (int i = 0; i<26; i++) {
        q[i] = (char*)malloc(6*sizeof(char));
        m[i] = (char*)malloc(6*sizeof(char));
        s[i] = (char*)malloc(6*sizeof(char));
        
        
    }
   strcpy( s[0],"24_21"  );
   strcpy( s[1],"25_3"  );
   strcpy( s[2],"26_15"  );
   strcpy( s[3],"1_1"  );
   strcpy( s[4],"2_19"  );
   strcpy( s[5],"3_10"  );
   strcpy( s[6],"4_14"  );
   strcpy( s[7],"5_26"  );
   strcpy( s[8],"6_20"  );
   strcpy( s[9],"7_8"  );
    strcpy(s[10],"8_16"  );
    strcpy(s[11],"9_7"  );
    strcpy(s[12],"10_22"  );
    strcpy(s[13],"11_4"  );
    strcpy(s[14],"12_11"  );
    strcpy(s[15],"13_5"  );
    strcpy(s[16],"14_17"  );
    strcpy(s[17],"15_9"  );
    strcpy(s[18],"16_12"  );
    strcpy(s[19],"17_23"  );
    strcpy(s[20],"18_18"  );
    strcpy(s[21],"19_2"  );
    strcpy(s[22],"20_25"  );
    strcpy(s[23],"21_6"  );
    strcpy(s[24],"22_24"  );
    strcpy(s[25],"23_13"  );
    
   strcpy( m[0],"26_20");
   strcpy( m[1],"1_1");
   strcpy( m[2],"2_6");
   strcpy( m[3],"3_4");
   strcpy( m[4],"4_15");
   strcpy( m[5],"5_3");
   strcpy( m[6],"6_14");
   strcpy( m[7],"7_12");
   strcpy( m[8],"8_23");
   strcpy( m[9],"9_5");
    strcpy(m[10],"10_16");
    strcpy(m[11],"11_2");
    strcpy(m[12],"12_22");
    strcpy(m[13],"13_19");
    strcpy(m[14],"14_11");
    strcpy(m[15],"15_18");
    strcpy(m[16],"16_25");
    strcpy(m[17],"17_24");
    strcpy(m[18],"18_13");
    strcpy(m[19],"19_7");
    strcpy(m[20],"20_10");
    strcpy(m[21],"21_8");
    strcpy(m[22],"22_21");
    strcpy(m[23],"23_9");
    strcpy(m[24],"24_26");
    strcpy(m[25],"25_17");
    
   strcpy( q[0],"1_8");
   strcpy( q[1],"2_18");
   strcpy( q[2],"3_26");
   strcpy( q[3],"4_17");
   strcpy( q[4],"5_20");
   strcpy( q[5],"6_22");
   strcpy( q[6],"7_10");
   strcpy( q[7],"8_3");
   strcpy( q[8],"9_13");
   strcpy( q[9],"10_11");
    strcpy(q[10],"11_4");
    strcpy(q[11],"12_23");
    strcpy(q[12],"13_5");
    strcpy(q[13],"14_24");
    strcpy(q[14],"15_9");
    strcpy(q[15],"16_12");
    strcpy(q[16],"17_25");
    strcpy(q[17],"18_16");
    strcpy(q[18],"19_19");
    strcpy(q[19],"20_6");
    strcpy(q[20],"21_15");
    strcpy(q[21],"22_21");
    strcpy(q[22],"23_2");
    strcpy(q[23],"24_7");
    strcpy(q[24],"25_1");
    strcpy(q[25],"26_14");
    
    char fileSrc[200];
    printf("input the clearText_SRC :\n");
    scanf("%s" , fileSrc);
    FILE *fp;
    fp = fopen(fileSrc,"r");
    if (fp == 0 ) {
        printf("cant open \n");
    }
    fseek(fp, 0, 2);         //0为偏移量 ，2为从末尾开始偏移，功能为将指针定点至固定位置
    int fSize = (int)ftell(fp);//指针从开头开始偏移量
    fseek(fp, 0, 0);
    char *clearText =(char*)malloc(fSize*sizeof(char));
    char *temp =(char*)malloc(fSize*sizeof(char));
    fread(clearText, fSize, sizeof(char), fp);    //fgets(clearText, fSize, fp);    不能换行读
    strcpy(temp,clearOthers(clearText));   //去除不是字母的字符
    strcpy(clearText, temp);
    strcpy(temp, upToDown(clearText));    //全部转换为小写字母
    strcpy(clearText, temp);
    free(temp);
    fclose(fp);
    //printf("%s\n\n" , upToDown(clearText)); //明文全部转化为小写输出
    
    
    
    int clearTnum=0;
    int mindex=0;  //慢轮编号
    int qindex=0;  //快轮编号
    int qn=0;
    int i =0;
    char *csave=(char*)malloc(fSize*sizeof(char));
   
    
    //    加密部分
    while (*clearText)
    {
        
        clearTnum = (int)toNum(*clearText);
        
        for (int i=0; i<26; i++) {
            if (  getBf(s[clearTnum])==getAf(s[i])  ) {
                mindex = i;
                break;
            }
        }
        
        for (int i=0; i<26; i++) {
            if ( getBf(m[mindex]) == getAf(m[i]) ) {
                qindex = i;
                break;
            }
        }
        
        for (int i=0; i<26; i++) {
            if ( getBf(q[qindex]) == getAf(q[i]) ) {
                qindex = i;
                break;
            }
        }
        
        csave[i++] =toChar(qindex);
        qn++;
        
        strcpy(tempSmq, q[25]);
           for (int i =24; i>=0; i--)
           strcpy(q[i+1], q[i]);
        strcpy(q[0], tempSmq);


        
        if (qn%26==0 && qn!=0) {
            strcpy(tempSmq, m[25]);
            for (int i =24; i>=0; i--)
                strcpy(m[i+1], m[i]);
            strcpy(m[0], tempSmq);
        };
        if (qn%676==0) {
            strcpy(tempSmq, s[25]);
            for (int i =24; i>=0; i--)
                strcpy(s[i+1], s[i]);
            strcpy(s[0], tempSmq);
        };
        clearText++;
    }
    printf("密文是：\n%s\n" , csave);
    printf("input the SRC you wnat to save :\n");
    scanf("%s" , fileSrc);
    FILE *fsm;
    fsm=fopen(fileSrc,"w");
    if (!fsm) {
        printf("cant open");
    }
    fprintf(fsm,"%s",csave);
    
    
    
    char *csave2 =(char*)malloc(fSize*sizeof(char));
    mindex=0;
    qindex=0;
    int k=0;
    strcpy(csave,reverse(csave));
   
    while (isalpha(csave[k]))
    {
        
        strcpy(tempSmq, q[0]);
        for (int i =0; i<25; i++)
            strcpy(q[i], q[i+1]);
        strcpy(q[25], tempSmq);

        int clearTnum = (int)toNum(csave[k]);
        for (int i=0; i<26; i++) {
            if (  getAf(q[clearTnum])==getBf(q[i])  ) {
                mindex = i;
                break;
            }
        }
        
        for (int i=0; i<26; i++) {
            if ( getAf(m[mindex]) == getBf(m[i]) ) {
                qindex = i;
                break;
            }
        }
        
        for (int i=0; i<26; i++) {
            if ( getAf(s[qindex]) == getBf(s[i]) ) {
                qindex = i;
                break;
            }
        }
        csave2[k] =toChar(qindex);
        
        qn--;
        if (qn%26==0 && qn!=0) {
            strcpy(tempSmq, m[0]);
            for (int i =0; i<25; i++)
                strcpy(m[i], m[i+1]);
            strcpy(m[25], tempSmq);
        }
        
        
        if (qn%676==0 ) {
            strcpy(tempSmq, s[0]);
            for (int i =0; i<25; i++)
                strcpy(s[i], s[i+1]);
            strcpy(s[25], tempSmq);
        }
        
        k++;
        
    }
    
    
    strcpy(csave2, reverse(csave2));
    //printf("\n%s" , csave2);
    
    
    printf("input the SRC you wnat to save :\n");
    scanf("%s" , fileSrc);
    FILE *fs;
    fs=fopen(fileSrc,"w");
    if (!fs) {
        printf("cant open");
    }
    fprintf(fs,"%s",csave2);
    return 0;
}

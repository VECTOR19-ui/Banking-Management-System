//Use structure or union for some variables:
//Debug the withdraw formula:
//update check case to display user information more than the balance:
//|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\\
//Banking managment system:
//Preproccessing:
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
//\\
//variable declaration:
char name[250];
char NAME[250];
char PASS[30];
char fname[30];
char mname[30];
char lname[30];
char gender;
int age;
char citizenship[50];
char country[30];
char city[100];
int zipcode;
int id_num;
char address[100];
long double birthdate[100];
char email[30];
double phone_num;
int acc_id;
int button;
int regorback;
int logorback;
  char pass[20],ch;
  int VAVA,VAAVA;
//function declaration:
int reg();
int login();
int deposit();
int transfer();
int withdraw();
int check();
//date.of.opening();
//duration.in.years();
//int balance();
int main(){
    //Welcoming the user:
    printf("\n____________________________________________________________________________________________________\n");
    printf("\n\t\t\t\tWELCOME TO ZEX BANK\n");
    printf("\n\t\t•••••Choose your service below•••••\n");
      Back:
      printf("\n\t\t\t1,Open a new account\n");
    printf("\n\t\t\t2,Opem an existing account\n");
    printf("\n\t\t\t3,About\n");
    printf("\n\t\t\t4,Exit");
    printf("\nEnter your choice: ");
    scanf("%d",&button);
    system("cls");
    switch(button){
        case 1:
        printf("\nEnter 1 to register or 0 to bsck to main menu: ");
        scanf("%d",&regorback);
        if(regorback==1){
            printf("\nRegister");
            printf("\n:First name: ");
    scanf("%s",&fname);
    printf("\n:Middle name: ");
    scanf("%s",&mname);
    printf("\n:Last name: ");
   scanf("%s",&lname);
    printf("Full name: ");
   scanf("%s",&name);
  printf("%s",name);
    //lines of code for inputting and evaluating the sex of a person:
   printf("Enter sex (M/m)/(F/f): ");
   scanf("%s",&gender);
   //evaluating sex with switch statement:
   switch(gender){
       case 'M':
       case 'm':
       printf("Male");
       break;
       case 'F':
       case 'f':
       printf("Female");
       break;
       default:
       printf("Try again");
       break;
   }
   //lines of code for inputting age and checking its validity:
   int age;
    printf("\n:Age: ");
    scanf("%d",&age);
    if(age>0&&age<=120){
        printf("\nAge:%d",age);
    }else{
   printf("\nInvalid age");
    }
    //End of age expression\\
    //This lines of code aquieres citizenship of a person and evaluates it if it is inputted a real country:
    printf("\n:Citizenship: ");
    scanf("%s",&citizenship);
    //eof citizenship exp:
     //lines of code for acquiring the country of the user:
  int choice_cont;
printf("\n1,Afghanistan \t2,Albania \t3,Algeria \t4,Andorra \t5,Angola \n6,Antigua and Barbuda \t7,Argentina \t8,Armenia \t9,Australia \t10,Azerbaijan \n11,Bhamas \t12,Bahrain \t13,Bangladesh \t14,Barbados \t15,Belarus \n16,Belgium \t17,Belize \t18,Benin \t19,Bhutan \t20,Bolivia \n21,Bosnia and Herzegovina \t22,Botswana \t23,Brazil \t24,Brunei \t25,Bulgaria \n26,Burkina Faso \t27,Burundi \t28,Cambodia \t29,Cameron \t30,Canada \n31,Cape Verde \t32,Central African Republic \t33,Chad \t34,Chile \t35,Columbia \n36,Comoros \t37,Costa Rica \t38,Cote d'ivoire \t39,Croatia \t40,Cuba \n41,Cyprus \t42,Czech Republic \t43,Democratic Republic of Congo \t44,Denmark \t45,Djibouti \n46,Dominica \t47,Dominican Republic \t48,East Timor \t49,Ecuador \t50,Egypt \n51,El Salvador \t52,Equatorial Guinea \t53,Eritrea \t54,Estonia \t55,Ethiopia \n56,Fiji \t57,Finland \t58,France \t59,Gabon \t60Gambia \n61,Georgia \t62,Germany \t63,Ghana \t64,Greece \t65,Grenada \n66,Guatemala \t67,Guinea \t68,Guinea-Bissau \t69,Guyana \t70,Haiti \n71,Honduras \t72,Hungary \t73,Iceland \t74,India \t75,Indonesia \n76,Iran \t77,Iraq \t78,Ireland \t79,Israel \t80,Italy \n81,Jamaica \t82,Jordan \t83,Japan \t84,Kazakhstan \t85,Kenya \n86,Kiribati \t87,Kosovo \t88,Kuwait \t89,Kyrgyzstan \t90,Laos \n91,Latvia \t92,Lebanon \t93,Lesotho \t94,Liberia \t95,Libya \n96,Liechtenstein \t97,Lithuania \t98,Luxembourg \t99,Macedonia \t100,Madagascar \n101,Malawi \t102,Malaysia \t103,Maldives \t104,Mali \t105,Malta \n106,Marshall islands \t107,Mauritania \t108,Mauritius \t109,Mexico \t110,Micronesia \n111,Moldova \t112,Monaco \t113,Mongolia \t114,Montenegro \t115,Morocco \n116,Mozambique \t118,Myanmar \t119,Namibia \t120,Nauru \n121,Nepal \t122,Netherlands \t123,New Zealand \t124,Nicaragua \t125,Niger \n126,Nigeria \t127,North Korea \t128,Norway \t129,Oman \t130,Pakistan \n131,Palau \t132,Papua New-Guinea \t133,Paraguay \t134,Peoples Republic of China \t135,Peru \n136,Philippines \t137,Poland \t138,Portugal \t139,Qatar \t140,Republic of Congo \n141,Romania \t142,Russia \t143,Rwanda \t144,Saint Kits and Nevis \t144,Saint Lucia \t145,Saint Vincent and Grenadines \n146,Samoa \t147,San Marino \t148,San Tome and Principe \t149,Saudi Arabia \t150,Senegal \n151,Serbia \t152,Seychelles \t153,Serra Leone \t154,Singapore \t155,Sri Lanka \n156,Solomon islands \t157,Somalia \t158,South Africa \t159,South Korea \t159zSpain \t160,Sudan \n161,Suriname \t162,Swaziland \t163,Sweden \t164,Switzerland \t165,Syria \n166,Tajikistan \t167,Tanzania \t168,Togo \t169,Tonga \t170,Trinidad and Tobago \n171,Tunisia \t172,Turkey \t173,Turkmenistan \t174,uvalu \t175,Uganda \n176,Ukraine \t177UAE \t178,UK \t179,USA \t180,Uruguay \n181,Uzbekistan \t182,Vanuatu \t183,Vatican-City \t184,Venezuela \t185,Vietnam \n186,Western Sahara \t187,Yemen \t188,Zambia \t188,Zimbabwe\n");
printf("\nEnter your choice: ");
scanf("%d",&choice_cont);
switch(choice_cont){
    case 1:
    printf("\nAfghanistan\n");
    break;
    case 2:
    printf("\nAlbania\n");
    break;
    case 3:
    printf("\nAlgeria\n");
    break;
    case 4:
    printf("\nAndorra\n");
    break;
    case 5:
    printf("\nAngola\n");
    break;
    case 6:
    printf("\nAntigua and Barbuda\n");
    break;
    case 7:
    printf("\nArgentina\n");
    break;
    case 8:
    printf("\nArmenia\n");
    break;
    case 9:
    printf("\nAustralia\n");
    break;
    case 10:
    printf("\nAzerbaijan \n");
    break;
    case 11:
    printf("\nBhamas\n");
    break;
    case 12:
    printf("\nBahrain\n");
    break;
    case 13:
    printf("\nBangladesh\n");
    break;
    case 14:
    printf("\nBarbados\n");
    break;
    case 15:
    printf("\nBelarus\n");
    break;
    case 16:
    printf("\nBelgium\n");
    break;
    case 17:
    printf("\nBelize\n");
    break;
    case 18:
    printf("\nBenin\n");
    break;
    case 19:
    printf("\nBhutan\n");
    break;
    case 20:
    printf("\nBolivia\n");
    break;
    case 21:
    printf("\nBosnia and Herzegovina\n");
    break;
    case 22:
    printf("\nBotswana\n");
    break;
    case 23:
    printf("\nBrazil\n");
    break;
    case 24:
    printf("\nBrunei\n");
    break;
    case 25:
    printf("\nBulgaria\n");
    break;
    case 26:
    printf("\nBurkina Faso\n");
    break;
    case 27:
    printf("\nBurundi\n");
    break;
    case 28:
    printf("\nCambodia\n");
    break;
    case 29:
    printf("\nCameron\n");
    break;
    case 30:
    printf("\nCanada\n");
    break;
    case 31:
    printf("\nCape Verde\n");
    break;
    case 32:
    printf("\nCentral African Republic\n");
    break;
    case 33:
    printf("\nChad\n");
    break;
    case 34:
    printf("\nChile\n");
    break;
    case 35:
    printf("\nColumbia\n");
    break;
    case 36:
    printf("\nComoros\n");
    break;
    case 37:
    printf("\nCosta Rica\n");
    break;
    case 38:
    printf("\nCote d'ivoire\n");
    break;
    case 39:
    printf("\nCroatia\n");
    break;
    case 40:
    printf("\nCuba\n");
    break;
    case 41:
    printf("\nCyprus\n");
    break;
    case 42:
    printf("\nCzech Republic\n");
    break;
    case 43:
    printf("\nDemocratic Republic of Congo\n");
    break;
    case 44:
    printf("\nDenmark\n");
    break;
    case 45:
    printf("\nDjibouti\n");
    break;
    case 46:
    printf("\nDominica\n");
    break;
    case 47:
    printf("\nDominican Republic\n");
    break;
    case 48:
    printf("\nEast Timor\n");
    break;
    case 49:
    printf("\nEcuador\n");
    break;
    case 50:
    printf("\nEgypt\n");
    break;
    case 51:
    printf("\nEl Salvador\n");
    break;
    case 52:
    printf("\nEquatorial Guinea\n");
    break;
    case 53:
    printf("\nEritrea\n");
    break;
    case 54:
    printf("\nEstonia\n");
    break;
    case 55:
    printf("\nEthiopia\n");
    break;
    case 56:
    printf("\nFiji\n");
    break;
    case 57:
    printf("\nFinland\n");
    break;
    case 58:
    printf("\nFrance\n");
    break;
    case 59:
    printf("\nGabon\n");
    break;
    case 60:
    printf("\nGambia\n");
    break;
    case 61:
    printf("\nGeorgia\n");
    break;
    case 62:
    printf("\nGermany\n");
    break;
    case 63:
    printf("\nGhana\n");
    break;
    case 64:
    printf("\nGreece\n");
    break;
    case 65:
    printf("\nGrenada\n");
    break;
    case 66:
    printf("\nGuatemala\n");
    break;
    case 67:
    printf("\nGuinea\n");
    break;
    case 68:
    printf("\nGuinea-Bissau\n");
    break;
    case 69:
    printf("\nGuyana\n");
    break;
    case 70:
    printf("\nHaiti\n");
    break;
    case 71:
    printf("\nHonduras\n");
    break;
    case 72:
    printf("\nHungary\n");
    break;
    case 73:
    printf("\nIceland\n");
    break;
    case 74:
    printf("\nIndia\n");
    break;
    case 75:
    printf("\nIndonesia\n");
    break;
    case 76:
    printf("\nIran\n");
    break;
    case 77:
    printf("\nIraq\n");
    break;
    case 78:
    printf("\nIreland\n");
    break;
    case 79:
    printf("\nIsrael\n");
    break;
    case 80:
    printf("\nItaly\n");
    break;
    case 81:
    printf("\nJamaica\n");
    break;
    case 82:
    printf("\nJordan\n");
    break;
    case 83:
    printf("\nJapan\n");
    break;
    case 84:
    printf("\nKazakhstan\n");
    break;
    case 85:
    printf("\nKenya\n");
    break;
    case 86:
    printf("\nKiribati\n");
    break;
    case 87:
    printf("\nKosovo\n");
    break;
    case 88:
    printf("\nKuwait\n");
    break;
    case 89:
    printf("\nKyrgyzstan\n");
    break;
    case 90:
    printf("\nLaos\n");
    break;
    case 91:
    printf("\nLatvia\n");
    break;
    case 92:
    printf("\nLebanon\n");
    break;
    case 93:
    printf("\nLesotho\n");
    break;
    case 94:
    printf("\nLiberia\n");
    break;
    case 95:
    printf("\nLibya\n");
    break;
    case 96:
    printf("\nLiechtenstein\n");
    break;
    case 97:
    printf("\nLithuania\n");
    break;
    case 98:
    printf("\nLuxembourg\n");
    break;
    case 99:
    printf("\nMacedonia\n");
    break;
    case 100:
    printf("\nMadagascar\n");
    break;
    case 101:
    printf("\nMalawi\n");
    break;
    case 102:
    printf("\nMalaysia\n");
    break;
    case 103:
    printf("\nMaldives\n");
    break;
    case 104:
    printf("\nMali\n");
    break;
    case 105:
    printf("\nMalta\n");
    break;
    case 106:
    printf("\nMarshall islands\n");
    break;
    case 107:
    printf("\nMauritania\n");
    break;
    case 108:
    printf("\nMauritius\n");
    break;
    case 109:
    printf("\nMexico\n");
    break;
    case 110:
    printf("\nMicronesia\n");
    break;
    case 111:
    printf("\nMoldova\n");
    break;
    case 112:
    printf("\nMonaco\n");
    break;
    case 113:
    printf("\nMongolia\n");
    break;
    case 114:
    printf("\nMontenegro\n");
    break;
    case 115:
    printf("\nMorocco\n");
    break;
    case 116:
    printf("\nMozambique\n");
    break;
    case 117:
    printf("\nMyanmar\n");
    break;
    case 118:
    printf("\nNamibia\n");
    break;
    case 119:
    printf("\nNauru\n");
    break;
    case 120:
    printf("\nNepal\n");
    break;
    case 121:
    printf("\nNetherlands\n");
    break;
    case 122:
    printf("\nNew Zealand\n");
    break;
    case 123:
    printf("\nNicaragua\n");
    break;
    case 124:
    printf("\nNiger\n");
    break;
    case 125:
    printf("\nNigeria\n");
    break;
    case 126:
    printf("\nNorth Korea\n");
    break;
    case 127:
    printf("\nNorway\n");
;    case 128:
    printf("\nOman\n");
    break;
    case 129:
    printf("\nPakistan\n");
    break;
    case 130:
    printf("\nPalau\n");
    break;
    case 131:
    printf("\nPapua New-Guinea\n");
    break;
    case 132:
    printf("\nParaguay\n");
    break;
    case 133:
    printf("\nPeoples Republic of China\n");
    break;
    case 134:
    printf("\nPeru\n");
    break;
    case 135:
    printf("\nPhilippines\n");
    break;
    case 136:
    printf("\nPoland\n");
    break;
    case 137:
    printf("\nPortugal\n");
    break;
    case 138:
    printf("\nQatar\n");
    break;
    case 139:
    printf("\nRepublic of Congo\n");
    break;
    case 140:
    printf("\nRomania\n");
    break;
    case 141:
    printf("\nRussia\n");
    break;
    case 142:
    printf("\nRwanda\n");
    break;
    case 143:
    printf("\nSaint Kits and Nevis\n");
    break;
    case 144:
    printf("\nSamoa\n");
    break;
    case 145:
    printf("\nSan Marino\n");
    break;
    case 146:
    printf("\nSan Tome and Principe\n");
    break;
    case 147:
    printf("\nSaudi Arabia\n");
    break;
    case 148:
    printf("\nSenegal\n");
    break;
    case 149:
    printf("\nSerbia\n");
    break;
    case 150:
    printf("\nSeychelles\n");
    break;
    case 151:
    printf("\nSerra Leone\n");
    break;
    case 152:
    printf("\nSingapore\n");
    break;
    case 153:
    printf("\nSri Lanka\n");
    break;
    case 154:
    printf("\nSolomon islands\n");
    break;
    case 155:
    printf("\nSomalia\n");
    break;
    case 156:
    printf("\nSouth Africa\n");
    break;
    case 157:
    printf("\nSouth Korea\n");
    break;
    case 158:
    printf("\nSpain\n");
    break;
    case 159:
    printf("\nSudan\n");
    break;
    case 160:
    printf("\nSuriname\n");
    break;
    case 161:
    printf("\nSwaziland\n");
    break;
    case 162:
    printf("\nSweden\n");
    break;
    case 163:
    printf("\nSwitzerland\n");
    break;
    case 164:
    printf("\nSyria\n");
    break;
    case 165:
    printf("\nTajikistan\n");
    break;
    case 166:
    printf("\nTanzania\n");
    break;
    case 167:
    printf("\nThailand\n");
    break;
    case 168:
    printf("\nTogo\n");
    break;
    case 169:
    printf("\nTonga\n");
    break;
    case 170:
    printf("\nTrinidad and Tobago\n");
    break;
    case 171:
    printf("\nTunisia\n");
    break;
    case 172:
    printf("\nTurkey\n");
    break;
    case 173:
    printf("\nTurkmenistan\n");
    break;
    case 174:
    printf("\nTuvalu\n");
    break;
    case 175:
    printf("\nUganda\n");
    break;
    case 176:
    printf("\nUkraine\n");
    break;
    case 177:
    printf("\nUAE\n");
    break;
    case 178:
    printf("\nUK\n");
    break;
    case 179:
    printf("\nUSA\n");
    break;
    case 180:
    printf("\nUruguay\n");
    break;
    case 181:
    printf("\nUzbekistan\n");
    break;
    case 182:
    printf("\nVanuatu\n");
    break;
    case 183:
    printf("\nVatican-City\n");
    break;
    case 184:
    printf("\nVenezuela\n");
    break;
    case 185:
    printf("\nVietnam\n");
    break;
    case 186:
    printf("\nWestern Sahara\n");
    break;
    case 187:
    printf("\nYemen\n");
    break;
    case 188:
    printf("\nZambia\n");
    break;
    default:
    printf("Try again: ");
    break;
    }

    //Acquiring city:
printf("\n:City: ");
scanf("%s",&city);
    //eof city\\
    //Acquiring zipcode of a residency current city:
    printf("\nZipcode: ");
    scanf("%d",&zipcode);
     //Acquiring the serial code of residency id number:
     printf("\n:Id number: ");
    scanf("%d",&id_num);
    //eof id_num:
   //Acquiring address it will only be a city name:
   printf("\n:Address: ");
    scanf("%s",&address);
    //eof address\\
    //Acquiring the birthdate of a person this will be in form of dd/mm/yy:
    printf("\n:Birthdate: ");
    scanf("%ld",&birthdate);
    //eof birthdate\\
    //This lines of code gives choice for the user to choose account type:
      int acc_type;
     printf("\nAccount type:\n");
    printf("\n1,Personal\n");
    printf("\n2,Checking/Business suite\n");
    printf("\n3,Government account\n");
    printf("\n4,Group account\n");
    printf("Choose account type: ");
     scanf("%d",&acc_type);
      switch(acc_type){
        case 1:
        printf("\nPersonal");
        break;
        case 2:
        printf("Business");
        break;
        case 3:
        printf("\nGoverment account");
        break;
        case 4:
        printf("\nGroup account\n");
        break;
        default:
        printf("\ntry again");
        break;
    }
     //Aquiring email:
    printf("\n:Email: ");
    scanf("%s",&email);
    //eof email\\
    //Acquiring phone number of a user:
    printf("\n:Phone number: ");
    scanf("%lf",&phone_num);
    //eof phone number\\
    //valid invalid password:
      //char pass[20],ch;
       int value;
        int i,number,special,capital,small;
                number=special=capital=small=0;
                 printf("Enter Password>> ");
        scanf("%s",pass);
        for(i=0;pass[i]!='\0';i++)
        {
            if(pass[i]>='0' && pass[i]<='9')
            number=1;
            if(pass[i]>='a' && pass[i]<='z')
            small=1;
            if(pass[i]>='A' && pass[i]<='Z')
            capital=1;
            if(pass[i]=='!' || pass[i]=='@' || pass[i]=='#' || pass[i]=='$' || pass[i]=='%' || pass[i]=='*')
            special=1;
        }
        if(number==0 || special==0 || capital==0 || small==0)
        printf("\nInvalid Password");
        else
        printf("\nValid Password");
        getchar();
printf("Enter the validated password: ");
    scanf("%s",&pass);
printf("Repeat the validated password: ");
scanf("%s",&pass);
//comparing both the strings using strcmp() function
value=strcmp(pass,pass);
if(value==0){
 system("cls");
 goto Back;
}else
printf("\nTry agaim");

        }else if( regorback==0){
        system("cls");
        goto Back;
           //printf("\nExiting...");
        }else{
            printf("\nTry again:(");
        }
        break;
        case 2:
        system("cls");
   printf("\nLogin\n");
         printf("hit 1 to login Or hit 0 to exit: ");
         scanf("%d",&logorback);
         switch(logorback){
             case 1:
        //Asking the user to login:
//
    // int VAVA,VAAVA;
        printf("\nName: ");
        scanf("%s",&NAME);
   printf("\nPassword: ");
       scanf("%s",&PASS);
       VAVA=strcmp(name,NAME);
    VAAVA=strcmp(pass,PASS);
       if(VAVA==0 && VAAVA==0){
    system("cls");
    //Implementation of balance variable:
int balance;
int check;
int but_check=2;
int transfer;
int but_transfer=3;
int deposit;
int but_deposit=1;
int withdraw;
int but_withdraw=4;
int close_acc;
int but_close_acc=5;
int money;
int num;
     int hit,Hiit,Hitt,Hit,yesorno,Hodor,dragon;
    back:        printf("\nWelcome to our bank %s\n",fname);
             printf("\nEnter your choice below\n");
    printf("\n1,Deposit\n");
    printf("\n2,Check\n");
    printf("\n3,Transfer\n");
    printf("\n4,Withdraw\n");
    printf("\n5,Close account\n");
    printf("\n6,Logout\n");
    printf("\nEnter your choice: ");
    scanf("%d",&num);
     switch(num){
        case 1:
        //int Hitt;
 printf("\nDeposit\n");
        printf("Enter the amount to deposit or 00 to go back: ");
        scanf("%d",&balance);
        if(balance==00){
            system("cls");
            goto back;
        }else{
        printf("Your account:%d\n",balance);
        }
        printf("Hit 0 to back: ");
        scanf("%d",&Hitt);
         if(Hitt==0){
        system("cls");
        goto back;
        }else{
            printf("Try again");
        }
        break;
        case 2:
        //int /*hit*/";
  printf("\nCheck\n");
  printf("Balance:%d\n",balance);
  printf("Hit 0 to go back: ");
  scanf("%d",&hit);
  if(hit==0){
  system("cls");
  goto back;
  }else{
        printf("Try again");
  }
        break;
        case 3:
        //int a/*,Hiit*/;
printf("\nEnter the amount to transfer or 00 to go back: ");
scanf("%d",&transfer);
if(transfer==0){
    system("cls");
    goto back;
}else{
balance=transfer-balance;
        printf("Your remaining account is:%d\n",balance);
}
        printf("Hit 0 to go back: ");
        scanf("%d",&Hiit);
        if(Hiit==0){
            system("cls");
            goto back;
        }else{
            printf("Try again");
        }
        break;
        case 4:
       // int Hit;
printf("\nWithdraw\n");
printf("Enter the amount to withdraw or 00 to go back: ");
scanf("%d",&withdraw);
if(withdraw==00){
    system("cls");
    goto back;
}else{
balance=balance-withdraw;
printf("\nYou have withdrawed:%d",withdraw);
printf("\nYour remaining amount is:%d\n",balance);
    }
printf("Enter 0 to go back: ");
scanf("%d",&Hiit);
if(Hiit==0){
system("cls");
goto back;
}else{
printf("Try again");
        }
        break;
        case 5:
printf("\nClose account\n");
        printf("\nAre you sure you want to close your account?( yes(0)/no(1)): ");
        scanf("%d",    &yesorno);
 if(yesorno==0){
            while(balance==0){
            balance--;
        }
        printf("\nYou withdrawed:%d\n",balance);
    printf("0\nAccount closed");
    printf("\nHit 0 to go back: ");
    scanf("%d",&Hodor);
    if(Hodor==0){
        system("cls");
        goto back;
    }else{
        printf("Try again");
    }
        }else if(yesorno==1){
            int bac;
        printf("\nYou canceled the process hit 0 to go back");
        scanf("%d",&bac);
        if(bac==0){
            system("cls");
            goto back;
        }
        }else{
            printf("Try again");
        }
        break;
        //Add another case here to logout:
        case 6:
        //int dragon;
        printf("Hit 0 to logout");
        scanf("%d",&dragon);
        if(dragon==0){
            system("cls");
            goto Back;
        }else{
            printf("Try agaim");
        }
        default:
        printf("invalid number");
        break;
        }
       }else{
           printf("Try again");
       }
       break;
       //End of login:
       case 0:
       system("cls");
       goto Back;
       break;
         }
        break;
        case 3:
        system("cls");
     printf("\nWelcome to ZEX bank our bank is the best bank for all kinds of life classes with a highly community support,our bank is best for different kinds of saving choices for business,government,personal or a group account and also for investment. thank you for using our bank\n");
        int back;
        printf("Exit 0: ");
        scanf("%d",&back);
        if(back==0){
         system("cls");
         goto Back;
            //;
        }else{
            printf("\nTry again\n");
        }
        break;
        case 4:
        system("cls");
        printf("\t\t\t\nThank you for using our system :)\n");
      //
   break;
   default:
   printf("\nNon valid\n");
   break;
     }
    printf("\n____________________________________________________________________________________________________\n");
    return 0;
}
/*||
  ||
  ||
  ||
  ||
  ||
  ||
  ||
  ||
  ||
  ||
  ||
  ||
  ||
  ||
  ||
  ||
  ||
  ||
  ||
  ||
  ||
  ||
  ||
  ||
  ||
  ||*/

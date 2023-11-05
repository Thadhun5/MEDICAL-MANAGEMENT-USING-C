#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct tablets{
	char tab1[100];
	char tab2[100];
	char tab3[100];
	char tab4[100];
	char tab5[100];
	char tab6[100];
	char tab7[100];
	char tab8[100];
	char tab9[100];
	char tab10[100];
	char tab11[100];
};
int main(){

    struct tablets nooi1;
    struct tablets nooi2;
    struct tablets nooi3;
    struct tablets nooi4;
    struct tablets nooi5;
    struct tablets nooi6;
	char ch;
	FILE*details;
	int PASSWORD;
	int serial_no,yesno,delivery,quant[9],AGE,problem;
	char name[50],age[5],phone_no[50],address[45],medicine1[67],medicine2[99],medicine3[34],medicine4[50],medicine5[50],medicine6[70],medicine7[70],medicine8[80],medicine9[80],medicine10[80];	
	strcpy(nooi1.tab1,"(DOLO 650)");
	strcpy(nooi1.tab2,"(SARIDON)");
	strcpy(nooi1.tab3,"(DART)");
	strcpy(nooi1.tab5,"(CETZINE)");
	strcpy(nooi1.tab6,"(GLCORET)");
	strcpy(nooi1.tab7,"(ATEN)");
	strcpy(nooi1.tab8,"(DIGENE)");
	strcpy(nooi1.tab9,"(GELUSIL)");
	strcpy(nooi1.tab10,"(ANACIN)");
	strcpy(nooi2.tab1,"(VICS-ACTION-500)");
	strcpy(nooi2.tab2,"(DULCOFLEX)");
	strcpy(nooi2.tab3,"(SUPRADYN)");
	strcpy(nooi2.tab4,"(ZINCOVIT)");
	strcpy(nooi2.tab5,"(MOX-500)");
	strcpy(nooi2.tab6,"(PANTACID-40)");
	strcpy(nooi2.tab7,"(RANITIN-150)");
	strcpy(nooi2.tab8,"(GEMER-1)");
	strcpy(nooi2.tab9,"(GLYNASE-MF-TAB)");
	strcpy(nooi2.tab10,"(NUROBION-FORTE)");
	strcpy(nooi2.tab11,"(DOLOPAR-TAB)");
	strcpy(nooi3.tab1,"(HORLICS)");
	strcpy(nooi3.tab2,"(PROTEIN POWDER)");
	strcpy(nooi3.tab3,"(HIMALAYA NEEM SOAP)");
	strcpy(nooi3.tab4,"(HIMALAYA BABY SOAP)");
	strcpy(nooi3.tab5,"(HIMALAYA BABY POWDER)");
	strcpy(nooi3.tab6,"(HIMALAYA BABY HAIR OIL)");
	strcpy(nooi3.tab6,"(HIMALAYA MASSAGE LOTION)");
	strcpy(nooi3.tab6,"(HIMALAYA SHAMPOO)");
	strcpy(nooi3.tab7,"(JOHNSONS BABY POWDER)");
	strcpy(nooi3.tab8,"(JOHNSONS LOTION)" );
	strcpy(nooi3.tab9,"(JOHNSONS SOAP)");
	strcpy(nooi3.tab10,"(JOHNSONS SHAMPOO)");
	strcpy(nooi3.tab11,"(BODY SOAP)");
	strcpy(nooi4.tab1,"(DANDRUFF SHAMPOO)");
	strcpy(nooi4.tab2,"(NEEM FACEWASH)");
	strcpy(nooi4.tab3,"(ALOEVERA FACEWASH)");
	strcpy(nooi4.tab4,"(ALOEVERA GEL)");
	strcpy(nooi4.tab5,"(WIPES)");
	strcpy(nooi4.tab6,"(CERLAC)");
	strcpy(nooi4.tab7,"(HUGGIES)");
	strcpy(nooi4.tab8,"(PAMPERS)");
	strcpy(nooi4.tab9,"(SUGARFREE)");
	strcpy(nooi4.tab10,"(CIPLA DINE)");
	strcpy(nooi4.tab11,"(BETA DIN)");
	strcpy(nooi5.tab1,"(NASAL SPRAY)");
	strcpy(nooi5.tab2,"(EYE DROPS)");
	strcpy(nooi5.tab3,"(EAR DROPS)");
	strcpy(nooi5.tab4,"(WOODWARDS)");
	strcpy(nooi5.tab5,"(GELUSIL TONIC)");
	strcpy(nooi5.tab6,"(BENEDRILL COUGH TONIC)");
	strcpy(nooi5.tab7,"(ASCORILL TONIC)");
	strcpy(nooi5.tab8,"(CREMOPIN TONIC)");
	strcpy(nooi5.tab9,"(TRIFER TONIC)");
	strcpy(nooi5.tab10,"(ARISTAZINE DIGESION TONIC)");
	strcpy(nooi5.tab11,"(CLYCOPORM DROP)");
	strcpy(nooi6.tab1,"(ASTAMIC DROPS)");
	strcpy(nooi6.tab2,"(EMIZET DROPS)");
	printf("          KAVERI MEDICALS          \n");
	main :
	printf("1.NEW BUYER\n2.LIST OF OUR FAMOUS MEDICINES\n3.ALREADY A BUYER\n4.ABOUT OUR MEDICAL AND AGENCY\n5.ONLINE CONSULTING\n6.EXIT APPLICATION\n");
    printf("ENTER THE SERIAL NUMBER YOU WANT TO ENTER\n ");
    scanf("%d",&serial_no);
    switch(serial_no){
	
    	case 4:{
    	       printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n");
    		   printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n");
    		   printf("\tKAVERI MEDICALS AND AGENCY.\nADDRESS:312/313, KAVERI ROAD, KARUNGAL PALAYAM, ERODE-638001.\nPHONE NO.:88078-74345\n");
    		   printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n");   
    		   printf("ALL THE MEDICINES ARE AVAILABLE IN THE CHEAP RATE\n");
    		   printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n");
    		   printf("ALL THE MEDICINES CAN BE GIVEN AT YOUR DOOR STEP WITHOUT ANY EXTRA CHARGE\n");
    		   printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n");
    		   printf("WE CAN GIVE THE MEDICINES AT WHICH THE COMPANY YU NEED\n");
    		   printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n");
    		   printf("THIS IS THE USER FRIENDLY PHARMA...\n");
    		   printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n");
    		   goto main;
    		   break ;
		}
    	
        case 1:{{
    		    printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n",details);
    			printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n",details);
    			printf("ENTER YOUR NAME:\n");
    			scanf("%s",&name,details);
    			printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n",details);
    			printf("ENTER YOUR AGE:\n");
    			scanf("%s",&age,details);
    			printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n",details);
    			printf("ENTER YOUR PHONE NUMBER\n");
    			scanf("%s",&phone_no);
    			printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n",details);
    			printf("ENTER YOUR ADDRESS:\n");
    			scanf("%s",&address);
    			printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n",details);
    			printf("YOUR REGESTRATION HAS BEEN SUCCESSFULLY COMPLETED\n");
    			printf("YOUR PASSWORD IS 17175\n");
    			printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n",details);
    			printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n",details);
    			printf("ENTER THE MEDICINE YOU NEED\n");
    			scanf("%s",&medicine1);
    				   printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n");
    			printf("IF YOU HAVE ANY MORE MEDICINES TO BUY?\n IF YES PRESS 1 OR IF NO PRESS 0!\n");
    			scanf("%d",&yesno);	
				if(yesno==1){	
    				   printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n");
				printf("ENTER THE MEDICINE YOU NEED\n");
					   printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n");
				scanf("%s",&medicine2);
					   printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n");
				scanf("%s",&medicine3);
					   printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n");
				}
				else{
					printf("********\n");
				}
		    scanf("%s",&medicine4);
	//			scanf("%s",&medicine5);
		//		scanf("%s",&medicine6);
			//    scanf("%s",&medicine7);
			//	scanf("%s",&medicine8);
		//		scanf("%s",&medicine9);
		//	    scanf("%s",&medicine10);
				printf("THANK YOU FOR PURCHASING WITH US!!\nWE HAVE THE MEDICINE YOU WANT!!\nIF YOU WANT TO DELIVER THESE MEDICINES TO YOUR HOME PRESS 1\n");
					   printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n");
					   
				scanf("%d",&delivery);
    		}
						if(delivery==1){
						
    					printf("IF YOU WANT FREE HOME DELIVERY YOU SHOULD BUY MORE THAN 200 REPEES AND THE QUANTITY OF THE EACH TABLET SHOULD BE AT LEAST 30\n");
    						   printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n");
    				    printf("ENTER THE QUANTITY OF THE MEDECINES\n");
    				    	   printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n");
    				    printf("QUANTITY OF THE MEDECINE 1=%s\n",medicine1);
					    scanf("%d",&quant[1]);
					    	   printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n");
					    printf("QUANTITY OF THE MEDECINE 2=%s\n",medicine2);
					    scanf("%d",&quant[2]);
					    	   printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n");
					    printf("QUANTITY OF THE MEDECINE 3=%s\n",medicine3);
					    scanf("%d",&quant[3]);
			//		    	   printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n");
				//    	printf("QUANTITY OF THE MEDECINE 1=%s\n",medicine4);
				    	
			//		    scanf("%d",&quant[4]);
			//		    	   printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n");
			//		    printf("QUANTITY OF THE MEDECINE 2=%s\n",medicine5);
			//		    scanf("%d",&quant[5]);
			//		    	   printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n");
		//			    printf("QUANTITY OF THE MEDECINE 3=%s\n",medicine6);
		//			    scanf("%d",&quant[6]);
			//		    	   printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n");
				//	    printf("QUANTITY OF THE MEDECINE 1=%s\n",medicine7);
				//	    scanf("%d",&quant[7]);
					//    	   printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n");
					 //   printf("QUANTITY OF THE MEDECINE 2=%s\n",medicine8);
					  //  scanf("%d",&quant[8]);
					   // 	   printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n");
					    //printf("QUANTITY OF THE MEDECINE 3=%s\n",medicine9);
					    //scanf("%d",&quant[9]);
					    //	   printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n");
				}
				else{
					printf("THANK YOU FOR YOUR PURCHASE");
				}
		}
    			goto main;
    		    break ;	
    	case 3:{
    		details=fopen("user.c","w");
    		if(details==NULL){
    			printf("error file not found\n");
		}
		    fprintf(details,"**********************************************************************************************\n");
			fprintf(details,"DETAILS OF THE LOGGED PERSON\n");
			fprintf(details,"\nNAME:");
			fputs(name,details);
			  fprintf(details,"**********************************************************************************************\n");
			fprintf(details,"\nAGE:");
			fputs(age,details);
			  fprintf(details,"**********************************************************************************************\n");
			fprintf(details,"\nMEDICINE:");
			fputs(medicine1,details);
			fputs(medicine2,details);
			fputs(medicine3,details);
			  fprintf(details,"**********************************************************************************************\n");
			fclose(details);
		    
		 {   
		    	FILE*copy;
		    	printf("ENTER THE PASSWORD\n");
		    	scanf("%d",&PASSWORD);
		    	if(PASSWORD==17175){
		    		details=fopen("user.c","r");
		    		while((ch=fgetc(details))!=EOF)
		    		printf("%c",ch);
		    		fclose(details);
		    }
		    else{
		    	printf("YOUR PASSWORD IS WRONG\n");
			}
			goto main;
			break;
		}}
		case 2:{
            printf("OU\nR PRODUCTS TO DISPLAY\n");
            printf("%s\n",nooi1.tab1);
            printf("%s\n",nooi1.tab2);
			printf("%s\n",nooi1.tab3);
			printf("%s\n",nooi1.tab4);
			printf("%s\n",nooi1.tab5);
			printf("%s\n",nooi1.tab6);
			printf("%s\n",nooi1.tab7);
			printf("%s\n",nooi1.tab8);
			printf("%s\n",nooi1.tab9);
			printf("%s\n",nooi1.tab10);
			printf("%s\n",nooi2.tab1);
			printf("%s\n",nooi2.tab2);
			printf("%s\n",nooi2.tab3);
			printf("%s\n",nooi2.tab4);
			printf("%s\n",nooi2.tab5);
			printf("%s\n",nooi2.tab6);
			printf("%s\n",nooi2.tab7);
			printf("%s\n",nooi2.tab8);
			printf("%s\n",nooi2.tab9);
			printf("%s\n",nooi2.tab10);
			printf("%s\n",nooi3.tab1);
			printf("%s\n",nooi3.tab2);
			printf("%s\n",nooi3.tab3);
			printf("%s\n",nooi3.tab4);
			printf("%s\n",nooi3.tab5);
			printf("%s\n",nooi3.tab6);
			printf("%s\n",nooi3.tab7);
			printf("%s\n",nooi3.tab8);
			printf("%s\n",nooi3.tab9);
			printf("%s\n",nooi3.tab10);
			printf("%s\n",nooi4.tab1);
			printf("%s\n",nooi4.tab2);	
            printf("%s\n",nooi4.tab3);
            printf("%s\n",nooi4.tab4);
            printf("%s\n",nooi4.tab5);
            printf("%s\n",nooi4.tab6);
            printf("%s\n",nooi4.tab7);
            printf("%s\n",nooi4.tab8);
            printf("%s\n",nooi4.tab9);
            printf("%s\n",nooi4.tab1);
            printf("%s\n",nooi5.tab1);
            printf("%s\n",nooi5.tab2);
            printf("%s\n",nooi5.tab3);
            printf("%s\n",nooi5.tab4);
            printf("%s\n",nooi5.tab5);
            printf("%s\n",nooi5.tab6);
            printf("%s\n",nooi5.tab7);
            printf("%s\n",nooi5.tab8);
            printf("%s\n",nooi5.tab9);
            printf("%s\n",nooi5.tab10);
            printf("%s\n",nooi5.tab11);
            printf("%s\n",nooi6.tab1);
            printf("%s\n",nooi6.tab2);
            printf("%s\n",nooi2.tab11);
			printf("%s\n",nooi3.tab11);
			printf("%s\n",nooi4.tab11);
			printf("%s\n",nooi5.tab11);
				   printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n");
			goto main;
		    break ;
		}
		case 5:
		    {
			printf("                       ENTER THE PROBLEM YOU HAVE\n");
			printf("1.STOMACH PAIN\n2.FEVER\n3.COLD\n4.DYSENTRY\n5.HEAD PAIN\n6.TOOTH PAIN\n7.BODY PAIN\n");
		    printf("ENTER THE SERIAL NUMBER IN WHICH THE PROBLEM YOU HAVE\n");
			scanf("%d",&problem);
				   printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n");
			switch(problem){
				case 1:
					printf("ENTER YOUR AGE\n");
					scanf("%d",AGE);
						   printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n");
					if(AGE<4){
					     printf("CYCLOPAM-SYRUP==========>MORNNG 2ml AND NIGHT 2ml(after food)\nFOR TWO DAYS\n");
					     	   printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n");
					}
					else if(AGE>4){
						if(AGE<10){
							printf("CYCLOPAM-TABLET==========>MORNING 1/2 AND NIGHT 1/2(after food)\nFOR TWO DAYS\n");
								   printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n");
						}
					}
					else if(AGE>10){
						printf("CYCLOPAM-TABLET===========>MORNING 1 AND NIGHT 1(after food)\nFOR TWO DAYS\n");
							   printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n");
					}
					break;
				case 2:
					printf("ENTER YOUR AGE\n");
					scanf("%d",&AGE);
					if(AGE=1){
						printf("DOLO 120 SYRUP===========>MORNNG 2ml AND NIGHT 2ml(after food)\nFOR TWO DAYS");
							   printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n");
					}
					else if(AGE>1){
						if(AGE<9){
							printf("DOLO 250 SYRUP===========>MORNING 5ml AND NIGHT 5ml(after food)\nFOR 2 DAYS");
								   printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n");
						}
					}
					else if(AGE>9){
						if(AGE<15){
							printf("DOLO 500 TABLET===========>MORNING 1 AND NIGHT 1(after food)\nFOR TWO DAYS\n");
								   printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n");
						}
					}
					else if(AGE>14){
						printf("DOLO 650 TABLET===========>MORNING 1 AND NIGHT 1(after food)\nFOR TWO DAYS\n");
							   printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n");
					}
					break ;
				case 3:
				    printf("ENTER YOUR AGE\n");
					scanf("%d",&AGE);
					if(AGE<8){
						printf("T-MINIC SYRUP==========>MORNING 2.5ml AND NIGHT 2.5ml(after food)\nFOR TWO DAYS\n");
							   printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n");
					}	
			       else if(AGE>8){
				        if(AGE<16){
				        	printf("ASCORIL D-JUNIOR SYRUP==========>MORNING 5ml AND NIGHT 5ml(after food)\nFOR 2 DAYS\n");
				        		   printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n");
						}
			        }
			        else if(AGE>15){
			        	printf("ASCORIL SYRUP===========>MORNING 10ml AND NIGHT 10ml(after food)\nFOR 2 DAYS\n");
			        	printf("CHESTINCOLD TABLET =============>MORNING 1 AND NIGHT 1(after food)\nAMOXYLIN 500 TABLET==========> MORNING 1 AND NIGHT 1 (after food)\n");     	
			        		   printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n");
					}
					break;
				case 4:
				   	printf("ENTER YOUR AGE\n");
					scanf("%d",&AGE);
					if(AGE<10){
						printf("POWERQYE SYRUP==========>MORNING 2.5ml AND NIGHT 2.5ml(after food)\nFOR TWO DAYS\n");
							   printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n");
					}
					else if(AGE>8){
						if(AGE<16){
							printf("LOPAMIDE TABLET =============>MORNING 1 AND NIGHT 1(after food)\n");
								   printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n");
						}
					}
                    else if(AGE>15){
                    	printf("ELDOPER CAPSULE =============>MORNING 1 AND NIGHT 1(before food)\n");
                    	printf("NOR FLOX TABLET =============>MORNING 1 AND NIGHT 1(after food)\n");
                    		   printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n");
					}	
					break;	    
		        case 6:
		        	printf("ALL AGE GROUP CAN USE THE GIVEN TABLETS\n");
		        	printf("DOLONEX-DT TABLET=============>MORNING 1 AND NIGHT 1(after food)\n");
		        	printf("OMEE-2mg=============>MORNING 1 AND NIGHT 1(after food)\n");
		        	printf("DOXY-L-DR-FORTE-CAPSULES=============>MORNING 1 AND NIGHT 1(after food)\n");
		        		   printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n");
		            break;
                case 7:
				    printf("ALL AGE GROUP CAN USE THE GIVEN TABLETS\n");
					printf("ACECLO PLUS TABLET=============>MORNING 1 AND NIGHT 1(after food)\n");
					printf("OMEE-2mg=============>MORNING 1 AND NIGHT 1(after food)\n");
					printf("NUROBION FORTE=============>MORNING 1 AND NIGHT 1(after food)\n");
						   printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n");
					break;
				case 5:	
				    printf("ALL AGE GROUP CAN USE THE GIVEN TABLETS\n");
					printf("DOLO 650 TABLET=============>MORNING 1 AND NIGHT 1(after food)\n");	    
						   printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n");
		            break;}
		 goto main;
          }
		    
	case 6:{
		printf("******************************************THANKS FOR VISITING OUR MEDICAL********************************************************");	    
	   		break;	   printf("---****---****---****---****---****---****---****---****---****---****---****---****---****---****\n");
	
}
}}
		    
		    
				
			
			
			
			
			
			
			
			


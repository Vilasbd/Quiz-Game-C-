#include<stdio.h>
#include<stdlib.h>
void play();
void eassy();
void medium();
void hard();
void main()
{
    int choice;
    printf("----------check your knowleg----------\n");
    printf("1.play\n2.exit\n");
    printf("--------------------------------------\n");
    while(1)
    {
        printf("enter your choice :\n");
        scanf("%d",&choice);
        switch(choice)
         {
            case 1 :play();
            break;
            case 2 :exit(0);
            break;
            default:printf("invalid choice\n");
            break;
         }
    }
}
void play()
{
    int mode;
    printf("----------select the level----------\n");
    printf("1.eassy\n2.medium\n3.hard\n");
    printf("------------------------------------\n");
    printf("4.exit\n");
    printf("------------------------------------\n");
    while(1)
    {
        printf("enter your choice :\n");
        scanf("%d",&mode);
        switch(mode)
         {
            case 1 :eassy();
            break;
            case 2 :medium();
            break;
            case 3 :hard();
            break;
            case 4 :exit(0);
            break;
            default:printf("invalid choice\n");
            break;
         }
    }
}
void eassy()
{
    int hi,i=0;  
    printf("\n +++++ LEVEL 1 +++++\n");
    printf("\n1] Which is the lower house of the parliament of india ?\n");
    printf("1]Rajya sabha\t 2]Lok sabha\t 3]Vidhan sabha\t4]None of these\n");
    while(1)
    {
        printf("enter your choice :");
        scanf("%d",&hi);
        switch(hi)
        {
            case 1 :printf("----WRONG ANSWER----\n");
            goto ab;
            case 2 :printf("-------------------------\n");
                    printf("WELL DONE CORRECT ANSWER\n-------------------------\n");
                    i++;
                    ab:
                    printf("2] Name the river bank on which Taj Mahal is situated ?\n");
                    printf("1]Ganges\t 2]indus\t 3]Godavari\t4]Yamuna\n");
                    while(1)
                     {
                        int bi;
                        printf("enter your choice :");
                        scanf("%d",&bi);
                        switch(bi)
                         {
                           case 1 :printf("----WRONG ANSWER----\n");
                           goto cd;
                           case 2 :printf("----WRONG ANSWER----\n");
                           goto cd; 
                           case 3 :printf("----WRONG ANSWER----\n");
                           goto cd;
                           case 4 :printf("-------------------------\n");
                    printf("WELL DONE CORRECT ANSWER\n-------------------------\n");
                    i++;
                    cd:
                    printf("3] Which one of the below state's Pincode starts with 2 ?\n");
                    printf("1]Utter Pradesh\t 2]Rajasthan\t 3]Maharashtra\t4]Chandigarh\n");
                    while(1)
                     {
                        int ci;
                        printf("enter your choice :");
                        scanf("%d",&ci);
                        switch(ci)
                         {
                           case 1 :printf("-------------------------\n");
                    printf("WELL DONE CORRECT ANSWER\n-------------------------\n");
                    i++;
                    ef:
                    printf("4] Which is the first satellite of india ?\n");
                    printf("1]Bhaskara\t 2]Kalpana\t 3]Arayabhata\t4]Rohini\n");
                    while(1)
                     {
                        int di;
                        printf("enter your choice :");
                        scanf("%d",&di);
                        switch(di)
                         {
                           case 1 :printf("----WRONG ANSWER----\n");
                           goto gh; 
                           case 2 :printf("----WRONG ANSWER----\n");
                           goto gh; 
                           case 3 :printf("-------------------------\n");
                    printf("WELL DONE CORRECT ANSWER\n-------------------------\n");
                    i++;
                    gh:                    
                    printf("5] When is the National Voter's Day celebrated in india ?\n");
                    printf("1]5 December\t 2]25 January\t 3] 12 June\t4]19 March\n");
                    while(1)
                     {
                        int ei;
                        printf("enter your choice :");
                        scanf("%d",&ei);
                        switch(ei)
                         {
                           case 1 :printf("----WRONG ANSWER----\n");
                           goto ij; 
                           case 2 :printf("-------------------------\n");
                           printf("WELL DONE CORRECT ANSWER\n-------------------------\n");
                           i++;
                           ij:
                           printf("\n+++++ LEVEL 1 FINISHED +++++\n");
                           printf("\n[out of 5 you scored %d points]\n",i);
                           printf("\n----------select the level----------\n");
                           printf("1.eassy\n2.medium\n3.hard\n");
                           printf("------------------------------------\n");
                           printf("4.exit\n");
                           printf("------------------------------------\n");
                           return;
                           case 3 :printf("----WRONG ANSWER----\n");
                           goto ij;
                           case 4 :printf("----WRONG ANSWER----\n");
                           goto ij;
                           default:printf("invalid choice");
                           break;
                        }
                     }  
                           break;
                           case 4 :printf("----WRONG ANSWER----\n");
                           goto gh;
                           default:printf("invalid choice");
                           break;
                        }
                     }  
                           break;
                           case 2 :printf("----WRONG ANSWER----\n");
                           goto ef;
                           case 3 :printf("----WRONG ANSWER----\n");
                           goto ef;
                           case 4 :printf("----WRONG ANSWER----\n");
                           goto ef;
                           default:printf("invalid choice");
                           break;
                        }
                     }  
                           break;
                           default:printf("invalid choice");
                           break;
                        }
                     }  
                         break;
                         case 3 :printf("----WRONG ANSWER----\n");
                         goto ab;
                         case 4 :printf("----WRONG ANSWER----\n");
                         goto ab;
                         default:printf("invalid choice");
                         break;     
        }
    }
}
void medium()
{
     int mi,j=0;
    printf("\n +++++ LEVEL 2 +++++\n");
    printf("\n1] Which is the largest city of india ?\n");
    printf("1]Kolkata\t 2]Delhi\t 3]Madras\t4]Mumbai\n");
    while(1)
    {
        printf("enter your choice :");
        scanf("%d",&mi);
        switch(mi)
        {
            case 1 :printf("----WRONG ANSWER----\n");
            goto kl;
            case 2 :printf("----WRONG ANSWER----\n");
            goto kl;
            case 3 :printf("----WRONG ANSWER----\n");
            goto kl;
            case 4 :printf("-------------------------\n");
                    printf("WELL DONE CORRECT ANSWER\n-------------------------\n");
                    j++;
                    kl:
                    printf("2] Which is the widest river of india ?\n");
                    printf("1]Brahmaputra\t 2]Ganga\t 3]Gomti\t4]Chambal\n");
                     while(1)
    {
        int ni;
        printf("enter your choice :");
        scanf("%d",&ni);
        switch(ni)
        {
            case 1 :printf("-------------------------\n");
                    printf("WELL DONE CORRECT ANSWER\n-------------------------\n");
                    j++;
                    mn:
                    printf("3] Where was india's first women's university established ?\n");
                    printf("1]Kolkata\t 2]Bangalore\t 3]Delhi\t4]Mumbai\n");
                     while(1)
    {
        int oi;
        printf("enter your choice :");
        scanf("%d",&oi);
        switch(oi)
        {
            case 1 :printf("----WRONG ANSWER----\n");
            goto op;
            case 2 :printf("----WRONG ANSWER----\n");
            goto op;
            case 3 :printf("----WRONG ANSWER----\n");
            goto op;
            case 4 :printf("-------------------------\n");
                    printf("WELL DONE CORRECT ANSWER\n-------------------------\n");
                    j++;
                    op:
                    printf("4] Who is the first indian women judge in the Supreme court ?\n");
                    printf("1]Karnam Malleswari\t 2]Sushmita sen\t 3]Fatima Biwi\t4]Uma Bharti\n");
                    while(1)
    {
        int pi;
        printf("enter your choice :");
        scanf("%d",&pi);
        switch(pi)
        {
            case 1 :printf("----WRONG ANSWER----\n");
            goto qr;
            case 2 :printf("----WRONG ANSWER----\n");
            goto qr;
            case 3 :printf("-------------------------\n");
                    printf("WELL DONE CORRECT ANSWER\n-------------------------\n");
                    j++;
                    qr:
                    printf("5] Which country is known as the 'Land of the Rising Sun'?\n");
                    printf("1]Japan\t 2]India\t 3]China\t4]South Korea\n");
                    while(1)
    {
        int qi;
        printf("enter your choice :");
        scanf("%d",&qi);
        switch(qi)
        {
            case 1 :printf("-------------------------\n");
                    printf("WELL DONE CORRECT ANSWER\n-------------------------\n");
                    j++;
                    st:
                    printf("\n+++++ LEVEL 2 FINISHED +++++\n");
                    printf("\n[out of 5 you scored %d points]\n",j);
                    printf("\n----------select the level----------\n");
                    printf("1.eassy\n2.medium\n3.hard\n");
                    printf("------------------------------------\n");
                    printf("4.exit\n");
                    printf("------------------------------------\n");
            return;
            case 2 :printf("----WRONG ANSWER----\n");
            goto st;
            case 3 :printf("----WRONG ANSWER----\n");
            goto st;
            case 4 :printf("----WRONG ANSWER----\n");
            goto st;
            default:printf("invalid choice");
            break;
        }
}

            break;
            case 4 :printf("----WRONG ANSWER----\n");
            goto qr;
            default:printf("invalid choice");
            break;
        }
}


            break;
            default:printf("invalid choice");
            break;
        }
}
            break;
            case 2 :printf("----WRONG ANSWER----\n");
            goto mn;
            case 3 :printf("----WRONG ANSWER----\n");
            goto mn;
            case 4 :printf("----WRONG ANSWER----\n");
            goto mn;
            default:printf("invalid choice");
            break;
        }
}
            break;
            default:printf("invalid choice");
            break;
        }
}

}
void hard()
{
    int vi,k=0;
    printf("\n +++++ LEVEL 3 +++++\n");
    printf("\n1] Halley's comet returns to earth every _____ years ?\n");
    printf("1]86 Years\t 2]99 Years\t 3]76 Years\t4] 49 Years\n");
    while(1)
    {
        printf("enter your choice :");
        scanf("%d",&vi);
        switch(vi)
        {
            case 1 :printf("----WRONG ANSWER----\n");
            goto uv;
            case 2 :printf("----WRONG ANSWER----\n");
            goto uv;
            case 3 :printf("-------------------------\n");
                    printf("WELL DONE CORRECT ANSWER\n-------------------------\n");
                    k++;
                    uv:
                    printf("2] Which nation was called Persia until 1935 ?\n");
                    printf("1]Iran\t 2]Greece\t 3]Turkey\t 4]Japan\n");
                    while(1)
                            {
                             int wi;
                             printf("enter your choice :");
                             scanf("%d",&wi);
                             switch(wi)
                                  {
                                     case 1 :printf("-------------------------\n");
                                     printf("WELL DONE CORRECT ANSWER\n-------------------------\n");
                                     k++;
                                     wx:
                                     printf("3] Which man-made waterway connect the Atlantic Ocean with the Pacific Ocean ?\n");
                                     printf("1]Grand Canal\t 2]Suez Canal\t 3]Panama Canal\t 4]None of these\n");
                                     while(1)
                                      {
                                        int xi;
                                        printf("enter your choice :");
                                        scanf("%d",&xi);
                                        switch(xi)
                                              {
                                                case 1 :printf("----WRONG ANSWER----\n");
                                                goto yz;
                                                case 2 :printf("----WRONG ANSWER----\n");
                                                goto yz;
                                                case 3 :printf("-------------------------\n");
                                                printf("WELL DONE CORRECT ANSWER\n-------------------------\n");
                                                k++;
                                                yz:
                                                printf("4] The search engine 'Bing' belongs to which company ?\n");
                                                printf("1]Google\t 2]Apple\t 3]Microsoft\t4]None of these\n");
                                                while(1)
                                                 {
                                                   int yi;
                                                   printf("enter your choice :");
                                                   scanf("%d",&yi);
                                                   switch(yi)
                                                     {
                                                       case 1 :printf("----WRONG ANSWER----\n");
                                                       goto ac;
                                                       case 2 :printf("----WRONG ANSWER----\n");
                                                       goto ac;
                                                       case 3 :printf("-------------------------\n");
                                                       printf("WELL DONE CORRECT ANSWER\n-------------------------\n");
                                                       k++;
                                                       ac:
                                                       printf("5] What do you call the writing system used for blind people ?\n");
                                                       printf("1]Morse Code\t 2]Braille\t 3]Sign Language\t4]Blind Source\n");
                                                       while(1) 
                                                         {
                                                            int zi,tree;
                                                            printf("enter your choice :");
                                                            scanf("%d",&zi);
                                                            switch(zi)
                                                               {
                                                                 case 1 :printf("----WRONG ANSWER----\n");
                                                                 goto ad;
                                                                 case 2 :printf("-------------------------\n");
                                                                 printf("WELL DONE CORRECT ANSWER\n-------------------------\n");
                                                                 k++;
                                                                 ad:
                                                                 printf("\n+++++ LEVEL 3 FINISHED +++++\n");
                                                                 printf("\n[out of 5 you scored %d points]\n",k);
                                                                 printf("\n----------check your knowleg----------\n");
                                                                 printf("1.play\n2.exit\n");
                                                                 printf("--------------------------------------\n");
                                                                 while(1)
                                                                    {
                                                                        printf("enter your choice :\n");
                                                                        scanf("%d",&tree);
                                                                        switch(tree)
                                                                        {
                                                                            case 1 :play();
                                                                            break;
                                                                            case 2 :exit(0);
                                                                            break;
                                                                            default:printf("invalid choice\n");
                                                                            break;
                                                                        }
                                                                    }
                                                                 return;
                                                                 case 3 :printf("----WRONG ANSWER----\n");
                                                                 goto ad;
                                                                 case 4 :printf("----WRONG ANSWER----\n");
                                                                 goto ad;
                                                                 default:printf("invalid choice");
                                                                 break;
                                                               }
                                                         }
                                                        break; 
                                                        case 4 :printf("----WRONG ANSWER----\n");
                                                        goto ac;
                                                        default:printf("invalid choice");
                                                        break;
                                                      }
                                                 }      
                                                 break;
                                                 case 4 :printf("----WRONG ANSWER----\n");
                                                 goto yz;
                                                 default:printf("invalid choice");
                                                 break;
                                               }
                                      }
        
                                    break;
                                    case 2 :printf("----WRONG ANSWER----\n");
                                    goto wx;
                                    case 3 :printf("----WRONG ANSWER----\n");
                                    goto wx;
                                    case 4 :printf("----WRONG ANSWER----\n");
                                    goto wx;
                                    default:printf("invalid choice");
                                    break;
                                    }
                            }
            case 4 :printf("----WRONG ANSWER----\n");
            goto uv;
            default:printf("invalid choice");
            break;
        } 
    }
}
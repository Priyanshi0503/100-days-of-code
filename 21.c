#include <stdio.h>
int main () {
    int month ;
    printf("enter a number:");
    scanf("%d",&month);

    if(month==1){
        printf("january-31 days\n");//
    }
    else{
        if(month==2){
            printf("february-28 or 29 days\n");
        }
        else{
            if (month==3)
            {
                printf("march-31 days\n");
            }
            else{
                if(month==4){
                    printf("april-30 days\n");
                }
                else{
                    if(month==5){
                        printf("may-31 days\n");

                    }
                    else{
                        if (month==6){
                            printf("june-30 days\n");
                        }

                        else{
                            if(month==7){
                                printf("july-31 days\n");
                            }
                            else{
                                if(month==8){
                                    printf("august-31 days\n");
                                }
                                else{
                                    if(month==9){
                                        printf("september-30 days\n");
                                    }
                                    else{
                                        if(month==10){
                                            printf("october-31 days\n");
                                        }
                                        else{
                                            if(month==11){
                                                printf("november-30 days\n");
                                            }
                                            else{
                                                if(month=12){
                                                    printf("december-31 days\n");
                                                }
                                                else{
                                                    printf("invalid input\n");
                                                }

                                            }
                                        }
                                    }
                                    
                                }


                            }
                            
                                
                            
                            
                    
                            
                        }
                    }
                    
                        
                            
                        

                    }
                }
            }
        }
        return 0;
    }

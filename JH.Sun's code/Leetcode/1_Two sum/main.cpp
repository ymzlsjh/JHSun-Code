
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int* twoSum(int* nums, int numsSize, int target) {
    int i=0,j=0,tmp=0;
    int *hash1,*hash2,*ans;
    ans=(int*)malloc(sizeof(int)*2);
    hash1=(int*)malloc(sizeof(int)*100000);
    hash2=(int*)malloc(sizeof(int)*100000);
    memset(hash1,-1,sizeof(int)*100000);
    memset(hash2,-1,sizeof(int)*100000);
    for(;i<numsSize;i++){
        if(target-nums[i]>=0){
            if(hash1[target-nums[i]]>=0){
                ans[0]=i;
                ans[1]=hash1[target-nums[i]];
            }
            else{
                if(nums[i]>=0){
                    hash1[nums[i]]=i;
                }
                else{
                    j=nums[i]*(-1);
                    hash2[j]=i;
                }
            }
        }
        else{
            if(hash2[nums[i]-target]>=0){
                ans[0]=i;
                ans[1]=hash2[nums[i]-target];
            }
            else{
                if(nums[i]>=0){
                    hash1[nums[i]]=i;
                }
                else{
                    j=nums[i]*(-1);
                    hash2[j]=i;
                }
            }
        }

    }
    if(ans[0]>ans[1]){
        tmp=ans[0];
        ans[0]=ans[1];
        ans[1]=tmp;
    }
    ans[0]++;
    ans[1]++;
    free(hash1);
    free(hash2);
    return ans;
    }

    int main(){
        int nums[4]={-3,4,3,90};
        int *ans=NULL;
        ans=twoSum(nums,4,0);

        printf("%d\n",ans[0]);
        printf("%d\n",ans[1]);

        return 0;

    }



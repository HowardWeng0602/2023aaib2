bool isPalindrome(struct ListNode* head) {
    int a[100000], N=0; //陣列最多10萬個
    while(head!=NULL){
        a[N++]= head-> val;
        head = head->next;
    }
    for(int i=0; i<N/2; i++){
        if(a[i] !=a[N-1-i]) return false;
    }
    return true;
}
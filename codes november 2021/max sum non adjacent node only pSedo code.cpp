// max sum non adjacent nodes

// psedocode

// maxsum(struct node*root,map<struct node*root,int sum>

if(root==NULL)
return 0

if(mp.find(root)!=mp.end()){
	return mp[root];
}

int incl=root->data +maxsumgc(root,mp);
int excl=maxsum(root->left) + maxsum(root->right);

return mp[root]=max(incl,excl);


------

int maxsumgc(root,mp){
	
	int sum=0;
	
	if(root->left!=NULL){
		
	sum+=maxsum(root->left->left,mp);	
	}
	if(root->right){
		sum+=maxsum(root->right->roght,mp);
	}
	return sum;
}


// code  amzaon adobe  

// hashmap

#include<bits/stdc++=.h>
using namespace std;


public class main{

public static class HashMap<K,V>{

K key;
V value;

HMnode(K key,V value){
	this.key=key;
	this.value=vaue;
}


private int size;
private LinedList<HMnode>> [] buckets;

private void initBucket(int N){
	
	buckets =new LinkedList[4];
	for(int i=0;i<buckets.length;i++)
{
	
	buckets[i]=new LinkedList<>();
	
}

public void put(K key,V value){
	
	int bi=hashfn(key);
	int di=findInBucket(key,bi);
	if(di!=-1){
		// update
		HMNode node=buckets[bi].get(di);
		node.value=value;
	}
	// insert
	else
	{
		HMNode node=new HMNode(key,value);
		buckets[bi].add(node);
		size++;
	}
	double gen=(size*1.0/buckets.length)
	
	if(gen>2.0)
	{
	rehash();	
	}
}

private void rehash(){
	
	LinkedList<HMnode>[] oba=buckets;
	initBuckets(2*oba.length());
	size=0;
	for(int i=0;i<oba.length();i++){
		for(HMNode node:oba[i]){
			put(node.key,node.value);
		}
	}
	
}


private int hashfn(K key){
	
	
	int hc=key.hashCode();
	int abshc=Math.abs(hc);
	return abshc % buckets.length();
}

private int findInBucket(K key,int bi){
	
 
	int di=0;
	for(HMNode node:buckets[bi]){
		if(node.key==key){
		return di;	
		}
		di++;
	}
	return -1;
}

public V remove(K key){
	
	int bi=hashfn(key);
	int di=findInBucket(key,bi);
	if(di!=-1){
		return buckets[bi].remove(di);
		size--;
	}
	else
	return NULL;
}


public int size(){
	return size;
}

public V get(K key)
{
	
	int bi=hashfn(key);
	int di=findInBucket(key,bi);
	if(di!=-1)
	return bucket[bi].get(di);
	else
	return NULL;
	
}

public ArraLisy<K> keyset(){
	
	ArrayList<K> keys=new ArrayList<>();
	
	
	for(int i=0;i<buckets.length;i++){
		for(HMNode node: buckets[i]){
			keys.add(node.key);
		}
	}
	return keys;
}




public boolean containsKey(K key) throws Exception
{
	
	int bi=hashfn(key);
	int di=findInBuckey(K key,int bi);
	if(di!=-1)
	return true;
	else
	return false;
	
	
}



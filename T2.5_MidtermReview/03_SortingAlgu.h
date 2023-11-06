void display(int* arr, int len){
	printf("{");
	int ittx;
	
	for(ittx = 0; ittx<len; ittx++){
		printf("%d", *(arr+ittx));
		if(ittx<len-1){
			printf(", ");
		}
	}
	
	printf("}\n");
}

void swap(int* x, int* y){
	int temp = *x;
	*x = *y;
	*y = temp;
}

void SortBubble(int* arr, int len){
	int ittx;
	int itty;
	
	for(ittx = 1; ittx < len; ittx++){
		display(arr, len);
		for(itty = 0; itty < (len - ittx); itty++){
			if(*(arr + itty) > *(arr + itty + 1)){
				swap( (arr + itty), (arr + itty + 1));
			}
		}
	}
}


void BiggestLast(int* arr, int len){
	int* Biggest = arr;
	//temporary value would be the first element of the array
	
	int itt;
	for(itt = 0; itt<len; itt++){
		if(*Biggest < *(arr+itt)){
			Biggest = (arr+itt);//if anything is bigger, Biggest will get replaced
		}
	}
	
	swap(Biggest, arr+len-1);
}
void SortSelection(int* arr, int len){
	int itt;
	for(itt = 0; itt<len; itt++){
		display(arr, len);
		BiggestLast(arr, len-itt);
		// the biggest known number is moved to the top 
		// then the top is ignored
	}
}

void SortInsertion(int* arr, int len){
	int ittx;
	int itty;
	
	for(itty = 1; itty<len; itty++){
		display(arr, len);
		for(ittx = itty; *(arr + ittx) < *(arr + ittx - 1); ittx--){
			/* 
			swap while the left is greater than the right
			and keep checking till left
			*/ 
			swap((arr + ittx), (arr + ittx - 1));
		}
	}
}





















